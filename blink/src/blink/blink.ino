int led = 13;

extern int sum(int a, int b);

void setup() {
  Serial.begin(115200);
  Serial.println("hello");
  Serial.print(sum(99,1),DEC);
  pinMode(led, OUTPUT);  
}

void loop() {
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(1000);
}
