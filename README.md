# ⛽ Refill Alert: LPG Cylinder Monitoring and Alert Notification System

## 📖 Overview

The **LPG Cylinder Monitoring and Alert Notification System** is a smart embedded system designed to monitor the remaining LPG gas in a cylinder using a **Load Cell** and **HX711 amplifier**. The system continuously measures the cylinder's weight and estimates the remaining gas level.

When the gas level falls below a predefined threshold, the system automatically:

* 🔔 Activates a buzzer
* 📱 Sends an SMS notification using a GSM module
* 📟 Displays the cylinder status on an LCD display

Unlike many existing solutions, this project **does not require an Internet connection**, making it suitable for both urban and rural areas.

---

## 🚀 Features

* Real-time LPG cylinder weight monitoring
* Automatic low gas detection
* SMS alert using GSM module
* LCD display for gas level indication
* Buzzer warning system
* Low-cost and reliable design
* Internet-independent operation

---

## 🛠 Hardware Components

* Arduino Uno
* Load Cell
* HX711 Load Cell Amplifier
* GSM Module (SIM800L/SIM900)
* 16×2 LCD Display
* Buzzer
* Power Supply
* LPG Cylinder

---

## 💻 Software Requirements

* Arduino IDE
* Embedded C/C++
* HX711 Library
* LiquidCrystal Library
* SoftwareSerial Library

---

## ⚙️ Working Principle

1. The Load Cell continuously measures the cylinder weight.
2. The HX711 amplifier converts the analog signal into digital data.
3. Arduino processes the weight readings.
4. The remaining gas level is calculated.
5. If the gas level is above the threshold:

   * LCD displays **NORMAL**
6. If the gas level is below the threshold:

   * LCD displays **GAS LEVEL LOW**
   * Buzzer is activated
   * SMS alert is sent through the GSM module

---

## 📈 Results

* Accurate LPG level measurement using a Load Cell.
* Detects low gas within a few seconds.
* SMS notification sent automatically.
* Works without Internet connectivity.
* Suitable for domestic and commercial kitchens.

---

## 🔮 Future Enhancements

* Mobile application support
* IoT cloud monitoring
* Automatic LPG refill booking
* Data analytics dashboard
* Voice notifications

---

## 👨‍💻 Authors

* Garapati Meghana
  
---

## ⭐ Support

If you found this project useful, please ⭐ Star this repository.
