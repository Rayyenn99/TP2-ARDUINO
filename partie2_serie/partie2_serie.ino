// TP2 - Partie 2 : moniteur serie
#define PIN_LED 3

void setup() {
    pinMode(PIN_LED, OUTPUT);
  Serial.begin(9600);   // meme vitesse a choisir dans le moniteur
}

void loop() {
    for (int dutyCycle = 0; dutyCycle <= 255; dutyCycle += 5) {
    analogWrite(PIN_LED, dutyCycle);
    Serial.print("dutyCycle = ");   // chaine de caracteres, sans retour a la ligne
    Serial.println(dutyCycle);      // valeur, puis retour a la ligne
    delay(100);
    }
}
