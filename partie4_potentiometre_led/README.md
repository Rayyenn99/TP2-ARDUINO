# Partie 4 - Controle de la LED par le potentiometre

## Schema de cablage

Potentiometre -- cable Grove --> A0
Grove Base Shield sur Arduino Uno - 5V
D3 -- cable Grove --> Module LED
PC -- USB --> SHIELD

## Algorigramme

Debut -> LED en sortie, A0 en entree, serie a 9600
-> Lire value sur A0 : 0 a 1023
-> dutyCycle = value mis a l'echelle 0 a 255
-> Ecrire dutyCycle en PWM sur D3
-> Afficher value et dutyCycle
-> Attendre 50 ms -> boucle
