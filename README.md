# 📟 Arduino I2C LCD Scanner & Tester

---

## 🔍 What is this?
This repository contains simple and practical Arduino codes for working with **I2C LCD displays**.

If your I2C LCD does not work or you don't know its address (like `0x27` or `0x3F`), this project helps you **find the correct I2C address** and then **test your LCD easily**.

---

## 📦 What’s Inside?
✅ I2C Scanner Code  
- Scans all I2C addresses  
- Displays detected devices in Serial Monitor  

✅ I2C LCD Test Code  
- Uses LiquidCrystal_I2C library  
- Prints text on 16x2 I2C LCD  
- Confirms LCD connection and address  

---

## 🔌 Wiring (Connection)

| LCD Pin | Arduino Pin |
|--------|-------------|
| VCC    | 5V          |
| GND    | GND         |
| SDA    | SDA         |
| SCL    | SCL         |

Note: Wiring image is available in the code folder.

---

## 🛠 How to Use

### Step 1: Find I2C Address
1. Upload I2C Scanner code
2. Open Serial Monitor
3. Set baud rate to 9600
4. Note the detected address (example: 0x27)

### Step 2: Test LCD
1. Open the LCD test code
2. Replace the address in this line:
   ```cpp
   LiquidCrystal_I2C lcd(0x27, 16, 2);
   ```
3. Upload the code
4. See text displayed on LCD

---

## 📚 Required Libraries
- Wire.h
- LiquidCrystal_I2C

Install them using Arduino Library Manager.

---

## 💾 Clone This Repository
```bash
git clone https://github.com/amiraligrr/I2C-LCD-Scanner-
```



---

## 🧪 Supported LCD
- 16x2 I2C LCD
- 20x4 I2C LCD (change size in code)

---

## 💡 Supported Boards
- Arduino UNO
- Arduino MEGA
- Arduino NANO
- Arduino Leonardo

---

## 🚀 Why Use This?
- Beginner friendly
- Fast I2C debugging
- Clean and simple code
- Works with most I2C LCD modules

---

## 🙏 Thanks for reading
Maid by Amirali Granmayeh ❤️
