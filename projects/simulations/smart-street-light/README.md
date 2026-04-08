# Smart Street Light

This simulation demonstrates a simple street light controller using an Arduino Uno and an LDR. The light turns on when the environment becomes dark and turns off again when brightness rises.

## Learning Goals

- understand how an LDR behaves as an analog input
- read sensor values using `analogRead()`
- control an output using threshold logic
- observe automation behavior through the Serial Monitor

## Folder Contents

- [src/smart_street_light.ino](./src/smart_street_light.ino): Arduino sketch
- [bom.csv](./bom.csv): bill of materials
- [media/circuit.jpg](./media/circuit.jpg): main circuit image
- [media/circuit-alt.png](./media/circuit-alt.png): alternate circuit view
- [docs/smart-street-light-guide.pdf](./docs/smart-street-light-guide.pdf): workshop reference PDF

## Components

| Component | Quantity |
| --- | --- |
| Arduino Uno R3 | 1 |
| Photoresistor (LDR) | 1 |
| NPN transistor | 1 |
| Light bulb or LED load | 1 |
| 1 kOhm resistor | 1 |
| 10 kOhm resistor | 1 |
| 5V power supply | 1 |

## Wiring Summary

- `A5` -> LDR analog input
- `D3` -> light control output through the transistor
- `5V` and `GND` -> circuit power rails

## How To Run

1. Recreate the circuit using the images in [`media/`](./media/).
2. Open [`src/smart_street_light.ino`](./src/smart_street_light.ino).
3. Upload the sketch to Arduino Uno or paste it into a Tinkercad simulation.
4. Open the Serial Monitor at `9600` baud.
5. Change the light level and observe the lamp state.

## Code Notes

The sketch now uses separate ON and OFF thresholds to reduce flickering around the switching point. This small hysteresis makes the behavior more stable in classroom demos.

## Expected Behavior

- When the surroundings become dark, the street light turns on.
- When the surroundings become bright again, the light turns off.
- The Serial Monitor prints the live LDR value and current street light state.

## Related Files

- Workshop root: [README.md](../../../README.md)
- Simulation index: [../README.md](../README.md)
