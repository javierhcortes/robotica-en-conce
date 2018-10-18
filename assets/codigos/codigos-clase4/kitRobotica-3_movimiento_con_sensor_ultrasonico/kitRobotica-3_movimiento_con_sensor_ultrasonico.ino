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

// definicion pines del sensor ultrasonico
const int trigPin = 2;
const int echoPin = 3;

// definicion variables de alcance global
long duration;
int distance;

/// Bloque de configuración. se ejecuta una sola vez
void setup() {
  pinMode(trigPin, OUTPUT); // Setea el pin de Trigger como salida
  pinMode(echoPin, INPUT); // Setea el pin de Echo como Entrada
  Serial.begin(9600); // Configura la comunicacion serial
}

// ciclo que se ejecuta permanentemente
void loop() {
 
  int distanceNow = calcDistance();  
 // Serial.print("Distance: ");  Serial.println(distanceNow);

  if (distanceNow > 15)
  {
    forward();    delay(1000);
  }
  else
  {
    backward();  delay(1000);
    left();delay(1000);
  }
}

//funcion que agrupa el calculo de la distancia con sensor ultrasonico
int calcDistance()
{
  long duration;
  int distance;
  // limpia el pin de trigger
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // setea el pin de triger como alto, por 10 micro segundos
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  //lee el pin de echo. devuelve la onda de sonido que viajo en microsegundos
  duration = pulseIn(echoPin, HIGH);
  //calcula la distnacia
  distance = duration*0.034/2;
  return distance;
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
