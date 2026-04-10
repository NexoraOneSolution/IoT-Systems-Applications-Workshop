# IoT Systems & Applications Workshop 2025

This repository is the teaching hub for the IoT Systems & Applications Workshop 2025 led by Aryan Pandya in collaboration with the MCA Department at Sarvajanik College of Engineering & Technology (SCET), Surat. It now includes workshop-ready onboarding docs, core simulation projects, extension project tracks, and reusable classroom resources.

## Workshop Snapshot

- Date: 17 September 2025
- Time: 9:00 AM to 4:00 PM
- Venue: Computation Lab, MCA Department, SCET, Surat
- Trainer and Organizer: Aryan Pandya
- Faculty Support: Dr. Kaushika Pal

## Quick Start

1. Read the [getting started guide](./docs/getting-started.md).
2. Review the [full workshop schedule](./docs/schedule/iot-workshop-full-day-schedule.pdf).
3. Open the [core simulation index](./projects/simulations/README.md).
4. Choose a project and follow its README, pinout guide, and BOM.
5. Use the [workshop resources pack](./docs/workshop-resources/README.md) for slides, assignment work, quiz prompts, and capstone ideas.

## Repository Map

```text
.
|-- assets/
|   |-- circuit-diagrams/
|   `-- open-graph/
|-- docs/
|   |-- certificates/
|   |-- schedule/
|   `-- workshop-resources/
|-- projects/
|   |-- extensions/
|   `-- simulations/
|       |-- smart-street-light/
|       `-- weather-station/
|-- LICENSE
`-- README.md
```

## Core Workshop Projects

| Project | What Students Build | Key Concepts | Workshop Files |
| --- | --- | --- | --- |
| Smart Street Light | An automatic street light using an LDR and transistor-controlled output | Analog sensing, threshold logic, digital output, automation | [README](./projects/simulations/smart-street-light/README.md) |
| Weather Station | A multi-mode weather monitor with LCD output and buttons | Multi-sensor input, LCD display, mode switching, mapped readings | [README](./projects/simulations/weather-station/README.md) |

## Workshop Resources

| Resource | Purpose |
| --- | --- |
| [docs/getting-started.md](./docs/getting-started.md) | Software setup, board selection, libraries, and first-run steps |
| [docs/workshop-resources/presentation-outline.md](./docs/workshop-resources/presentation-outline.md) | Slide-by-slide teaching flow for a one-day session |
| [docs/workshop-resources/assignment-sheet.md](./docs/workshop-resources/assignment-sheet.md) | Guided student task sheet and submission expectations |
| [docs/workshop-resources/mini-quiz.md](./docs/workshop-resources/mini-quiz.md) | Short quiz with answer key for recap or evaluation |
| [docs/workshop-resources/final-project-ideas.md](./docs/workshop-resources/final-project-ideas.md) | Suggested capstone and follow-up project ideas |
| [docs/workshop-resources/facilitator-checklist.md](./docs/workshop-resources/facilitator-checklist.md) | Setup checklist for instructors and lab assistants |

## Extension Project Tracks

The [extension projects folder](./projects/extensions/README.md) adds follow-up ideas that can be used as lab assignments, mini-hackathon prompts, or capstone starters.

| Track | Focus |
| --- | --- |
| [Smart Irrigation System](./projects/extensions/smart-irrigation-system/README.md) | Soil-based watering automation |
| [Gas Leak Detector](./projects/extensions/gas-leak-detector/README.md) | Safety alerting with sensors and buzzers |
| [Home Security Alarm](./projects/extensions/home-security-alarm/README.md) | Motion detection and intrusion alerts |
| [Temperature Logger](./projects/extensions/temperature-logger/README.md) | Time-series sensor logging and trend thinking |
| [MQTT Cloud Monitoring](./projects/extensions/mqtt-cloud-monitoring/README.md) | Sending sensor data to dashboards and cloud tools |

## Public Simulation Links

- Weather Station public Tinkercad link: [Open simulation](https://www.tinkercad.com/things/7MCBJ2HEQz6-project-stimulation-02-weather-monitoring-station?sharecode=VNVADSSn7aQBaEI5H3D-EuOWA37Xi6T7O1XbTCPMKGM)
- Smart Street Light: use the local media and pinout guide to rebuild the circuit in Tinkercad or Arduino IDE. Add a public share link later if the instructor publishes one.

## Extra Reference Assets

- [docs/certificates/aryan-certificate.html](./docs/certificates/aryan-certificate.html)
- [assets/circuit-diagrams/rc-car-wiring-0.png](./assets/circuit-diagrams/rc-car-wiring-0.png)
- [assets/circuit-diagrams/rc-car-wiring-1.jpg](./assets/circuit-diagrams/rc-car-wiring-1.jpg)

## Learning Outcomes

- understand core IoT concepts and where sensors, actuators, and controllers fit together
- practice Arduino-based simulation workflows before moving to physical hardware
- wire simple circuits confidently using reference diagrams and pinout sheets
- explain automation logic, thresholds, and mode-based interfaces
- move from guided workshop exercises into independent extension projects

## Trainer

Aryan Pandya

- LinkedIn: [linkedin.com/in/aryan-pandya](https://www.linkedin.com/in/aryan-pandya)
- GitHub: [github.com/NexoraOneSolution](https://github.com/NexoraOneSolution)

## License

This repository uses dual licensing.

- Code is licensed under the MIT License.
- Workshop documents, slides, and media are licensed under CC BY-NC 4.0.

See [LICENSE](./LICENSE) for details.
