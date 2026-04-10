# Weather Station Pinout

Use this table to wire the project consistently in Tinkercad or on a physical Arduino.

| Component | Arduino Pin | Purpose | Notes |
| --- | --- | --- | --- |
| TMP36 temperature sensor output | `A0` | Reads temperature | Connect sensor power to `5V` and `GND` |
| Gas sensor analog output | `A1` | Reads air-quality style value | Use the analog output pin from the sensor module |
| Potentiometer wiper | `A2` | Simulates humidity changes | Outer legs go to `5V` and `GND` |
| Temperature mode button | `D8` | Shows temperature on the LCD | Use a pull-down resistor if wired as a standard input |
| Air quality mode button | `D9` | Shows gas reading on the LCD | Same wiring style as the other buttons |
| Humidity mode button | `D10` | Shows humidity on the LCD | Same wiring style as the other buttons |
| LCD backpack SDA | `A4` or `SDA` | I2C data line | Arduino Uno uses `A4` as SDA |
| LCD backpack SCL | `A5` or `SCL` | I2C clock line | Arduino Uno uses `A5` as SCL |
| LCD power | `5V` and `GND` | Powers the display | Share a common ground with the sensors and buttons |
