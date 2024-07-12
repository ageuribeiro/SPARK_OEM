#define LED_AZUL 13
#define LED_AMARELO 13

void setup() {
  pinMode(LED_AZUL, OUTPUT);
  pinMode(LED_AMARELO, OUTPUT);
  Serial.begin(115200);

}

void loop() {
  digitalWrite(LED_AZUL,HIGH);
  delay(100);
  digitalWrite(LED_AZUL,LOW);
  delay(1000);
  Serial.println("Piscou...!!!");
}
