# Partie 1 - Sortie PWM

Cablage : Grove Base Shield sur l'Uno, module LED sur le connecteur D3.

`analogWrite(PIN_LED, dutyCycle)` genere un signal PWM. `dutyCycle` va de 0 (0 %) a 255 (100 %) ; 128 correspond a environ 50 %.
Le programme fait monter puis descendre la luminosite.
