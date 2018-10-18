/*
 Para instrucciones del armado del kit revise
 http://roboticaenconce.cl/posts/RO101-armado-kit/
 */

/// Bloque inicialización. Aqui escribimos variables de alcance global.

// definicion conexionado puente H - microcontrolador
const int BIA = 10; // (pwm) pin 10 connected to pin B-IA  
const int BIB = 6;  // (pwm) pin 6  connected to pin B-IB 

const int AIA = 9;  // (pwm) pin 9 connected to pin A-IA 
const int AIB = 5;  // (pwm) pin 5 connected to pin A-IB 

byte speed = 255;  // este valor entre [0-255] define la velocidad de los motores

/// Bloque de configuración. se ejecuta una sola vez
void setup() {
  pinMode(AIA, OUTPUT); // configura los pines como salida
  pinMode(AIB, OUTPUT);
  pinMode(BIA, OUTPUT);
  pinMode(BIB, OUTPUT);
}

/// Bloque de iteracción. Se repite infinitas veces.
void loop() {
  forward(); 
  delay(1000);
  backward();
  delay(1000);
  left();
  delay(1000);
  right();
  delay(1000);
}

// Definición del funcionamiento del puente H - segun hoja de datos.
void backward()
{
  analogWrite(AIA, 0);
  analogWrite(AIB, speed);
  analogWrite(BIA, 0);
  analogWrite(BIB, speed);
}

void forward()
{
  analogWrite(AIA, speed);
  analogWrite(AIB, 0);
  analogWrite(BIA, speed);
  analogWrite(BIB, 0);
}

void left()
{
  analogWrite(AIA, speed);
  analogWrite(AIB, 0);
  analogWrite(BIA, 0);
  analogWrite(BIB, speed);
}

void right()
{
  analogWrite(AIA, 0);
  analogWrite(AIB, speed);
  analogWrite(BIA, speed);
  analogWrite(BIB, 0);
}
