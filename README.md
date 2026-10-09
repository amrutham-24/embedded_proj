

# Hardware Connections — `led_nmos.ino`

The following table lists the hardware connections for `led_nmos.ino`.

| Component         | Connection                       |
| ----------------- | -------------------------------- |
| ESP32 GPIO 25     | 220 Ω resistor → MOSFET Gate (G) |
| MOSFET Gate (G)   | 10 kΩ resistor → GND             |
| MOSFET Source (S) | GND                              |
| ESP32 3.3 V       | 220 Ω resistor → LED anode (+)   |
| LED cathode (−)   | MOSFET Drain (D)                 |
| ESP32 GND         | Common GND                       |
