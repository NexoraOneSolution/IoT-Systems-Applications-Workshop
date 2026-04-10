# Smart Street Light Pinout

Use this table when building the circuit in Tinkercad or on a breadboard.

| Component | Arduino Pin | Purpose | Notes |
| --- | --- | --- | --- |
| LDR voltage divider output | `A5` | Reads ambient light level | Pair the LDR with a `10 kOhm` resistor |
| Transistor base through resistor | `D3` | Switches the lamp or LED load | Use a `1 kOhm` resistor between `D3` and the transistor base |
| Lamp or LED positive path | Switched from transistor stage | Represents the street light | Do not drive a large load directly from the Arduino pin |
| Power rail | `5V` | Supplies the sensor divider and output stage | In simulation, the Arduino `5V` pin is enough |
| Common ground | `GND` | Shared circuit reference | Every component must share the same ground |
