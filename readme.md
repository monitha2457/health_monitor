# 🩺 Health Monitoring System using ESP32

## 📖 Overview
This project is a simple Health Monitoring System built using ESP32 and simulated in Wokwi. It monitors Heart Rate (BPM) and SpO₂ levels using potentiometers and displays the readings on an I2C LCD. A buzzer alerts the user when abnormal values are detected.

## ✨ Features
- Heart Rate (BPM) Monitoring
- SpO₂ Monitoring
- LCD Display Output
- Buzzer Alert System
- Serial Monitor Output

## 🛠️ Components Used
- ESP32 DevKit V1
- 16x2 I2C LCD
- 2 Potentiometers
- Piezo Buzzer
- Jumper Wires

## 🔌 Connections

| Component | ESP32 Pin |
|------------|------------|
| LCD SDA | GPIO 21 |
| LCD SCL | GPIO 22 |
| Heart Rate Potentiometer | GPIO 34 |
| SpO₂ Potentiometer | GPIO 35 |
| Buzzer | GPIO 15 |

## ⚙️ Working
1. Potentiometers simulate Heart Rate and SpO₂ values.
2. ESP32 reads and processes the values.
3. Readings are displayed on the LCD.
4. A buzzer sounds when readings go beyond normal limits.

## 📷 Output
- Displays BPM and SpO₂ values on the LCD.
- Activates buzzer for abnormal readings.

## 🚀 Future Improvements
- Add MAX30102 sensor for real-time measurements.
- Enable Wi-Fi based remote monitoring.
- Store health data in the cloud.

## 👩‍💻 Author
**Monitha**
