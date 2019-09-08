//Code Written By RAJDEEP BARUAH

// set motor_pin
int  motor_pin=9;
void setup()  {
  pinMode(motor_pin, OUTPUT);
}

void loop() {
  digitalWrite(motor_pin,HIGH);
  delay(1000);
  digitalWrite(motor_pin, LOW);
  delay(500);
  }
