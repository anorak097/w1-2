bool LED_status = HIGH;

void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  pinMode(3, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(3) == LOW){
    delay(50);
    while (digitalRead(3) == LOW){
      delay(10);
    }
    digitalWrite(2, LED_status);
    Serial.println(LED_status);
    LED_status = !LED_status;
  }
}
