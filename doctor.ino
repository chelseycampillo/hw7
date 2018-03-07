
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  int n = 0;
}

// the loop function runs over and over again forever
void loop() {
  int n = 0;
  if (n < 5) {
    digitalWrite(LED_BUILTIN, HIGH);   
    delay(1000);                      
    digitalWrite(LED_BUILTIN, LOW);    
    delay(1000);  
    n = n + 1;
  }else {
    digitalWrite(LED_BUILTIN, LOW);                    
  }
}
