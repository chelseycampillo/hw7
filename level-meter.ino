int sensorPin = A0;    // select the input pin for the potentiometer
int ledPin5 = 5; // select the pin for the LED
int ledPin6 = 6;
int ledPin9 = 9;
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin6, OUTPUT);
  pinMode(ledPin9, OUTPUT);
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  // turn the ledPin on
  if (sensorValue == 1/4) {
    digitalWrite(ledPin5, HIGH);
  }
  if (sensorValue == 1/2) {
  digitalWrite(ledPin6, HIGH);
  }
  if (sensorValue == 3/4) {
  digitalWrite(ledPin9, HIGH);
  }
  // turn the ledPin off:
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin9, LOW);
}
