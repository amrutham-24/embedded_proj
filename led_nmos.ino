
const int MOSFET_GATE = 25;

void setup() {
  pinMode(MOSFET_GATE, OUTPUT);
  digitalWrite(MOSFET_GATE, LOW);  // Start with MOSFET OFF
}

void loop() {
  digitalWrite(MOSFET_GATE, HIGH); // MOSFET ON, LED lights up
  delay(2000);

  digitalWrite(MOSFET_GATE, LOW);  // MOSFET OFF, LED turns off
  delay(2000);
}
