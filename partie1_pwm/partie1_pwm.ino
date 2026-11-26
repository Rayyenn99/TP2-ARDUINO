// TP2 - Partie 1 : sortie PWM (module LED sur D3)
#define PIN_LED 3   // D3 est une broche PWM (~) de l'Uno

void setup() {
    pinMode(PIN_LED, OUTPUT);
}

void loop() {
    // La luminosite monte de 0 a 255
  for (int dutyCycle = 0; dutyCycle <= 255; dutyCycle++) {
    analogWrite(PIN_LED, dutyCycle);
    delay(10);
  }
  // puis redescend de 255 a 0
  for (int dutyCycle = 255; dutyCycle >= 0; dutyCycle--) {
    analogWrite(PIN_LED, dutyCycle);
    delay(10);
  }
}
