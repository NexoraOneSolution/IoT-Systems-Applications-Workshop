# Smart Street Light Troubleshooting

## The Lamp Never Turns On

- confirm that the LDR output is wired to `A5`
- verify the transistor is oriented correctly
- make sure the output pin in code matches the wiring to `D3`
- reduce the light level in Tinkercad so the LDR reading drops below the ON threshold

## The Lamp Stays On All The Time

- check whether the LDR divider is reversed
- confirm the resistor values are close to the intended `1 kOhm` and `10 kOhm`
- open the Serial Monitor and verify the LDR value changes when the light source changes

## The Lamp Flickers

- keep the LDR stable during the demo
- check for loose jumper wires
- verify the code still uses separate ON and OFF thresholds

## Serial Monitor Shows No Output

- set the Serial Monitor to `9600` baud
- confirm the sketch uploaded successfully
- press reset on the Arduino board after opening the monitor
