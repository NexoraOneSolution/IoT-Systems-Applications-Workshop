# Getting Started

Use this guide before the workshop or during the first 20 minutes of class setup.

## Software You Need

- Arduino IDE 2.x or newer
- A browser with access to [Tinkercad Circuits](https://www.tinkercad.com/circuits)
- USB drivers for Arduino Uno if you plan to use physical hardware

## Board And Library Setup

1. Open Arduino IDE.
2. Go to `Tools -> Board -> Boards Manager`.
3. Install `Arduino AVR Boards`.
4. Select `Arduino Uno` from `Tools -> Board`.
5. Open `Tools -> Manage Libraries`.
6. Install `Adafruit LiquidCrystal` for the weather station project.

## Workshop Hardware Checklist

- Arduino Uno R3
- Breadboard and jumper wires
- USB cable
- LEDs or miniature lamp
- LDR
- TMP36 temperature sensor
- Gas sensor
- Potentiometer
- Pushbuttons
- 16x2 LCD with I2C backpack
- Assorted resistors

## How To Run A Project In Tinkercad

1. Open [Tinkercad Circuits](https://www.tinkercad.com/circuits).
2. Create a new circuit.
3. Open the project folder inside [`projects/simulations/`](../projects/simulations/README.md).
4. Rebuild the circuit using the images in `media/` and the matching `pinout.md`.
5. Open the sketch file from the project's `src/` folder.
6. Switch Tinkercad code mode to `Text`.
7. Paste the Arduino sketch and start the simulation.

## How To Run A Project On Real Hardware

1. Assemble the circuit using the project pinout guide.
2. Connect the Arduino board over USB.
3. Select `Tools -> Board -> Arduino Uno`.
4. Select the correct port from `Tools -> Port`.
5. Open the sketch in Arduino IDE.
6. Click `Upload`.
7. Open the Serial Monitor at `9600` baud when the sketch expects serial output.

## Suggested Classroom Flow

1. Begin with the schedule and workshop introduction.
2. Demonstrate one sensor input and one output on the board.
3. Run the smart street light project first because it is the shortest automation example.
4. Move to the weather station project for multi-sensor and LCD concepts.
5. End with a mini quiz or extension project discussion.

## Common Setup Problems

- If Arduino IDE cannot upload, check the selected board and USB port.
- If Tinkercad refuses to run the sketch, make sure the code is pasted into `Text` mode rather than blocks.
- If the weather station LCD stays blank, install `Adafruit LiquidCrystal` and verify the LCD backpack wiring.
- If buttons behave unpredictably, confirm the pull-down resistor wiring or use the project troubleshooting guide.

## Where To Go Next

- Core projects: [projects/simulations/README.md](../projects/simulations/README.md)
- Workshop resources: [docs/workshop-resources/README.md](./workshop-resources/README.md)
- Final project ideas: [docs/workshop-resources/final-project-ideas.md](./workshop-resources/final-project-ideas.md)
