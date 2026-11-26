// TP2 - Partie 4 : luminosite de la LED (D3) reglee par le potentiometre (A0)
#define PIN_LED 3
#define PIN_POTENTIOMETRE A0

void setup() {
    pinMode(PIN_LED, OUTPUT);
  pinMode(PIN_POTENTIOMETRE, INPUT);
  Serial.begin(9600);
}

void loop() {
    int value = analogRead(PIN_POTENTIOMETRE);          // 0 a 1023
  int dutyCycle = map(value, 0, 1023, 0, 255);        // mise a l'echelle PWM
  analogWrite(PIN_LED, dutyCycle);

  Serial.print("value = ");
  Serial.print(value);
  Serial.print("  dutyCycle = ");
  Serial.println(dutyCycle);
  delay(50);
}
