#include <Adafruit_LiquidCrystal.h>

Adafruit_LiquidCrystal lcd(0);

const uint8_t TEMPERATURE_PIN = A0;
const uint8_t GAS_SENSOR_PIN = A1;
const uint8_t HUMIDITY_PIN = A2;

const uint8_t TEMPERATURE_BUTTON_PIN = 8;
const uint8_t AIR_BUTTON_PIN = 9;
const uint8_t HUMIDITY_BUTTON_PIN = 10;

enum DisplayMode {
  MODE_WELCOME,
  MODE_TEMPERATURE,
  MODE_AIR_QUALITY,
  MODE_HUMIDITY
};

DisplayMode currentMode = MODE_WELCOME;

void setup() {
  lcd.begin(16, 2);

  pinMode(TEMPERATURE_PIN, INPUT);
  pinMode(GAS_SENSOR_PIN, INPUT);
  pinMode(HUMIDITY_PIN, INPUT);

  pinMode(TEMPERATURE_BUTTON_PIN, INPUT);
  pinMode(AIR_BUTTON_PIN, INPUT);
  pinMode(HUMIDITY_BUTTON_PIN, INPUT);

  Serial.begin(9600);
  showWelcomeMessage();
}

void loop() {
  updateModeFromButtons();

  switch (currentMode) {
    case MODE_TEMPERATURE:
      renderTemperatureMode();
      break;
    case MODE_AIR_QUALITY:
      renderAirQualityMode();
      break;
    case MODE_HUMIDITY:
      renderHumidityMode();
      break;
    case MODE_WELCOME:
    default:
      break;
  }

  delay(200);
}

void updateModeFromButtons() {
  if (digitalRead(TEMPERATURE_BUTTON_PIN) == HIGH) {
    setMode(MODE_TEMPERATURE);
  } else if (digitalRead(AIR_BUTTON_PIN) == HIGH) {
    setMode(MODE_AIR_QUALITY);
  } else if (digitalRead(HUMIDITY_BUTTON_PIN) == HIGH) {
    setMode(MODE_HUMIDITY);
  }
}

void setMode(DisplayMode nextMode) {
  if (currentMode == nextMode) {
    return;
  }

  currentMode = nextMode;
  lcd.clear();
}

void showWelcomeMessage() {
  writeLine(0, "Press a button");
  writeLine(1, "to pick a mode");
}

float readTemperatureC() {
  return -40.0 + 0.878679 * (analogRead(TEMPERATURE_PIN) - 20);
}

const char *classifyTemperature(float temperatureC) {
  if (temperatureC >= 120) return "volcanic";
  if (temperatureC > 100) return "really hot";
  if (temperatureC > 85) return "hot";
  if (temperatureC > 70) return "quite warm";
  if (temperatureC > 55) return "pleasant";
  if (temperatureC > 40) return "chill";
  if (temperatureC > 25) return "cold";
  if (temperatureC > 10) return "really cold";
  return "arctic";
}

void writeLine(uint8_t row, const char *text) {
  lcd.setCursor(0, row);
  lcd.print("                ");
  lcd.setCursor(0, row);
  lcd.print(text);
}

void renderTemperatureMode() {
  const float temperatureC = readTemperatureC();

  writeLine(0, classifyTemperature(temperatureC));
  lcd.setCursor(0, 1);
  lcd.print("                ");
  lcd.setCursor(0, 1);
  lcd.print(temperatureC, 1);
  lcd.print(" C");

  Serial.print("Temperature: ");
  Serial.println(temperatureC);
}

void renderAirQualityMode() {
  const int gasValue = analogRead(GAS_SENSOR_PIN);

  writeLine(0, "Air Quality");
  lcd.setCursor(0, 1);
  lcd.print("                ");
  lcd.setCursor(0, 1);
  lcd.print(gasValue);
  lcd.print(" ppm");

  Serial.print("Air quality reading: ");
  Serial.println(gasValue);
}

void renderHumidityMode() {
  const int rawHumidity = analogRead(HUMIDITY_PIN);
  const int humidityPercent = map(rawHumidity, 0, 1023, 0, 100);

  writeLine(0, "Humidity");
  lcd.setCursor(0, 1);
  lcd.print("                ");
  lcd.setCursor(0, 1);
  lcd.print(humidityPercent);
  lcd.print("%");

  Serial.print("Humidity reading: ");
  Serial.println(humidityPercent);
}
