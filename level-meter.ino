int sensorPin = A0;    // select the input pin for the potentiometer
int ledPin5 = 10; // select the pin for the LED
int ledPin6 = 11;
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
  if (sensorValue > 100) {
    digitalWrite(ledPin5, HIGH);
  } else {
    digitalWrite(ledPin5, LOW);
  }
  if (sensorValue > 200) {
  digitalWrite(ledPin6, HIGH);
  } else {
    digitalWrite(ledPin6, LOW);
  }
  if (sensorValue > 300) {
  digitalWrite(ledPin9, HIGH);
  } else {
    digitalWrite(ledPin9, LOW);
  }
}
