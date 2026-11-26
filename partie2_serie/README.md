# Partie 2 - Moniteur serie

- `Serial.begin(9600)` ouvre la liaison serie a 9600 bauds.
- - `Serial.println(x)` affiche `x` puis passe a la ligne.
  - - `Serial.print(x)` affiche `x` sans passer a la ligne : les valeurs se suivent sur la meme ligne.
    - - Une chaine de caracteres s'ecrit entre guillemets : `Serial.print("dutyCycle = ");`
