
const int signalPin = 25; // Pin connected after the diode

void setup() {
  Serial.begin(115200);
  pinMode(signalPin, INPUT);
}

void loop() {
  int signalState = digitalRead(signalPin);

  if (signalState == HIGH) {
    Serial.println("High voltage detected!");
  } else {
    Serial.println("No high voltage detected (safe).");
  }

  delay(500);
} // Missing closing brace for loop() - ADDEDvoid setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:

}
