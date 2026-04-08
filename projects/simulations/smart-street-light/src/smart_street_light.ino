// Smart Street Light using an LDR and Arduino Uno

const uint8_t LDR_PIN = A5;
const uint8_t LIGHT_PIN = 3;

// Use separate thresholds to reduce rapid toggling near the edge.
const int TURN_LIGHT_ON_AT = 450;
const int TURN_LIGHT_OFF_AT = 550;

bool streetLightOn = false;

void setup() {
  pinMode(LIGHT_PIN, OUTPUT);
  digitalWrite(LIGHT_PIN, LOW);

  Serial.begin(9600);
  Serial.println("Smart Street Light initialized");
}

void loop() {
  const int lightLevel = analogRead(LDR_PIN);

  updateStreetLight(lightLevel);
  printStatus(lightLevel);

  delay(250);
}

void updateStreetLight(int lightLevel) {
  if (!streetLightOn && lightLevel <= TURN_LIGHT_ON_AT) {
    streetLightOn = true;
  } else if (streetLightOn && lightLevel >= TURN_LIGHT_OFF_AT) {
    streetLightOn = false;
  }

  digitalWrite(LIGHT_PIN, streetLightOn ? HIGH : LOW);
}

void printStatus(int lightLevel) {
  Serial.print("LDR value: ");
  Serial.print(lightLevel);
  Serial.print(" | Street light: ");
  Serial.println(streetLightOn ? "ON" : "OFF");
}
