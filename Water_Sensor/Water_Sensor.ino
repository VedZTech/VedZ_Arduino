// Занятие с датчиком уровня воды
#define S_PIN A0
void setup() {
 Serial.begin(9600);
 pinMode(S_PIN, INPUT);
}

void loop() {
 int water = analogRead (S_PIN);       //от 0 до 1023
 if(water>5 && 500>water) {
 Serial.println(water);
 delay(1000);
 }
 if(water<5) {
  Serial.println("Слишком сухо");
  delay(1000);
 }
 if(500<water) {
  Serial.println("Слишком влажно");
  delay(1000);
 }
}
