# Weather Station

This project simulates a simple weather station using Arduino Uno, a gas sensor, a TMP36 temperature sensor, a potentiometer as a humidity substitute, and a 16x2 I2C LCD.

## Learning Goals

- build a multi-input Arduino project
- switch between display modes using pushbuttons
- read analog sensor data and map it to user-friendly values
- present measurements on a character LCD

## Folder Contents

- [src/weather_station.ino](./src/weather_station.ino): Arduino sketch
- [bom.csv](./bom.csv): bill of materials
- [media/circuit.jpg](./media/circuit.jpg): main circuit image
- [media/tinkercad-layout.png](./media/tinkercad-layout.png): Tinkercad layout view
- [docs/weather-station-guide.pdf](./docs/weather-station-guide.pdf): workshop reference PDF

## Public Simulation

- Tinkercad link: [Open the public weather station simulation](https://www.tinkercad.com/things/7MCBJ2HEQz6-project-stimulation-02-weather-monitoring-station?sharecode=VNVADSSn7aQBaEI5H3D-EuOWA37Xi6T7O1XbTCPMKGM)

## Components

| Component | Quantity |
| --- | --- |
| Arduino Uno R3 | 1 |
| TMP36 temperature sensor | 1 |
| Gas sensor | 1 |
| Potentiometer | 1 |
| LCD 16x2 with I2C backpack | 1 |
| Pushbuttons | 3 |
| Resistors | multiple |

## Pin Mapping

- `A0` -> temperature sensor
- `A1` -> gas sensor
- `A2` -> potentiometer used for humidity simulation
- `D8` -> temperature mode button
- `D9` -> air-quality mode button
- `D10` -> humidity mode button

## How To Run

1. Recreate the circuit from the images in [`media/`](./media/).
2. Open [`src/weather_station.ino`](./src/weather_station.ino) in Arduino IDE or Tinkercad text mode.
3. Start the simulation.
4. Press one of the mode buttons to switch the LCD view.
5. Adjust the sensors and observe the readings on the display.

## Display Modes

- Temperature mode: shows temperature in Celsius with a simple condition label
- Air Quality mode: shows the raw gas sensor reading
- Humidity mode: maps the potentiometer to a percentage value

## Code Notes

The sketch is organized into small helper functions so students can follow the mode logic, sensor reads, and LCD updates more easily during the workshop.

## Related Files

- Workshop root: [README.md](../../../README.md)
- Simulation index: [../README.md](../README.md)
