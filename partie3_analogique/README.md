# Partie 3 - Lecture d'une entree analogique

Cablage : potentiometre Grove sur le connecteur A0, interrupteur du shield sur 5V.

- Plage de la tension en sortie du potentiometre : 0 V a 5 V.
- - Plage de `value` : 0 a 1023 (convertisseur analogique-numerique 10 bits, soit 1024 niveaux).
 
  - | Position | Tension (V) | value |
  - |---|---|---|
  - | 0 | 0 | 0 |
  - | 270 | 5 | 1023 |
  - | 135 | 2,5 | ~512 |
 
  - Fonction de transfert : `value = V * 1023 / 5`
