#include <EEPROM.h>

//Kodu Bir Kere Run Etmeniz Yeterli Olacaktir.


void setup() {

}

void loop() {

for (int i = 0; i < 2048; i++) {
 EEPROM.write(i, 0);
 }
  EEPROM.commit();
delay(500);

}
