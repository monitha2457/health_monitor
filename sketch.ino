#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

#define BPM_PIN 34
#define SPO2_PIN 35
#define BUZZER_PIN 15

void setup() {
  Serial.begin(115200);

  lcd.init();
  lcd.backlight();

  pinMode(BUZZER_PIN, OUTPUT);

  lcd.setCursor(0, 0);
  lcd.print("Health Monitor");
  delay(2000);
  lcd.clear();
}

void loop() {
  int bpmRaw = analogRead(BPM_PIN);
  int spo2Raw = analogRead(SPO2_PIN);

  // Simulate Heart Rate and SpO2
  int bpm = map(bpmRaw, 0, 4095, 60, 120);
  int spo2 = map(spo2Raw, 0, 4095, 85, 100);

  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("HR:");
  lcd.print(bpm);
  lcd.print(" BPM");

  lcd.setCursor(0, 1);
  lcd.print("SpO2:");
  lcd.print(spo2);
  lcd.print("%");

  Serial.print("Heart Rate: ");
  Serial.print(bpm);
  Serial.print(" BPM  |  SpO2: ");
  Serial.print(spo2);
  Serial.println("%");

  // Alert condition
  if (bpm < 60 || bpm > 100 || spo2 < 95) {
    tone(BUZZER_PIN, 100);
  } else {
    noTone(BUZZER_PIN);
  }

  delay(1000);
}
