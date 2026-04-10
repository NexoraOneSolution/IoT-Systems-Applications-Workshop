# Weather Station Troubleshooting

## The LCD Is Blank

- install the `Adafruit LiquidCrystal` library in Arduino IDE
- confirm the LCD backpack is powered from `5V` and `GND`
- verify the I2C lines are connected to `A4` and `A5` on Arduino Uno

## Buttons Do Not Change The Screen

- make sure the buttons are wired to `D8`, `D9`, and `D10`
- check the pull-down resistor wiring if you are using physical hardware
- confirm the button actually reaches `HIGH` in the simulator when pressed

## Temperature Reading Looks Wrong

- confirm the TMP36 output goes to `A0`
- rotate the sensor correctly in the simulator so the pins are not reversed
- remember this project is a classroom simulation, so exact values may vary

## Air Quality Or Humidity Never Changes

- verify the gas sensor output is on `A1`
- verify the potentiometer wiper is on `A2`
- change the sensor values in the simulator and watch the Serial Monitor for updates

## The LCD Text Looks Messy

- wait a moment after switching modes so the refresh loop catches up
- make sure you are running the latest sketch from this repository
