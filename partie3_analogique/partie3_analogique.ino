// TP2 - Partie 3 : lecture d'une entree analogique (potentiometre sur A0)
#define PIN_POTENTIOMETRE A0

void setup() {
    pinMode(PIN_POTENTIOMETRE, INPUT);
  Serial.begin(9600);
}

void loop() {
    int value = analogRead(PIN_POTENTIOMETRE);   // 0 a 1023
  Serial.println(value);                       // println : une mesure par ligne
  delay(200);
}
