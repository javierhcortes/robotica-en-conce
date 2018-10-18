/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

/*
Usaremos la libreria de servo ofrecida por arduino.
peudes ver la documentacion aqui
https://www.arduino.cc/en/Reference/Servo
*/

/// Bloque inicialización. Aqui escribimos variables de alcance global.
//Usamos la libreria de servomotores por defecto
#include <Servo.h>

Servo myservo;  // creamos un objeto llamado 'myservo' para controlar fisicamente el servomotor
int pos = 0;    // variable para almacenar la posicion del servo
const int servoPin = 12;

/// Bloque de configuración. se ejecuta una sola vez
void setup() {
  myservo.attach(servoPin);  // attaches the servo on pin 9 to the servo object
}

// ciclo que se ejecuta permanentemente
void loop() {
  for (pos = 0; pos <= 180; pos += 1) { // va de 0 grados a 180 grados en pasos de 1 grado    
    myservo.write(pos);              // le dice al servo que vaya a la posición en la variable 'pos'
    delay(15);                       // espera 15ms a que el servo alcance la posición
  }
  for (pos = 180; pos >= 0; pos -= 1) { //  va de 180 grados a 0 grados
    myservo.write(pos);              // decirle al servo que vaya a la posición en la variable 'pos'.
    delay(15);                       //  espera 15ms a que el servo alcance la posición
  }
}
