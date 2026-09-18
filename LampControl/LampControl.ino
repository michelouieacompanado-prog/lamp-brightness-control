void setup() {
  Serial.begin(115200);
  int brightnessSetting = 100;
  bool switchOn = false;
  int lampBrightness = 0;

  if (switchOn) {
    lampBrightness = brightnessSetting;
  } else {
    lampBrightness = 0;
  }

  Serial.print("Brightness setting: ");
  Serial.println(brightnessSetting);

  Serial.print("Lamp brightness: ");
  Serial.println(lampBrightness);
}

void loop() {
}
