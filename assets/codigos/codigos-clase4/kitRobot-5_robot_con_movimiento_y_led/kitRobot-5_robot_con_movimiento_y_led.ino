/*
Para instrucciones del armado del kit revise
 http://roboticaenconce.cl/posts/RO101-armado-kit/
*/

// si hay errores en esta linea, debe cargar la librearia de Fast LED 
// se encuentra en el manejador de librearias desde su arduino IDE.

#include "FastLED.h"

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

const int ledPin = 4;
const int NUM_LEDS = 16;
const int brilloNow = 20;

// Define the array of leds
CRGB leds[NUM_LEDS];

void setup() {
  
  delay(1000);
  pinMode(AIA, OUTPUT); // set pins to output
  pinMode(AIB, OUTPUT);
  pinMode(BIA, OUTPUT);
  pinMode(BIB, OUTPUT);
  // seteo de sensor distancia
  pinMode(trigPin, OUTPUT); // Setea el pin de Trigger como salida
  pinMode(echoPin, INPUT); // Setea el pin de Echo como Entrada
  Serial.begin(9600); // Configura la comunicacion serial

  //configuracion anillo led
  FastLED.addLeds<WS2812, ledPin, GRB>(leds, NUM_LEDS);
  FastLED.setBrightness( brilloNow );

}

void loop() {
  allOneColor(CRGB::Blue);

  //imprime la distancia en el monitor serial
  int distanceNow = calcDistance();  
 // Serial.print("Distance: ");  Serial.println(distanceNow);

  if (distanceNow > 15)
  {
    forward();  allOneColor(CRGB::Yellow);  delay(1000);
    //right();    delay(1000);
  }
  else
  {
    backward(); allOneColor(CRGB::Red); delay(1000);
    left(); allOneColor(CRGB::Black);delay(1000);
  }
}

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


void sweepColor(){
  for(int dot = 0; dot < NUM_LEDS; dot++){
    leds[dot] = CRGB::Blue;
    FastLED.show();
    // clear this led for the next time around the loop
    leds[dot] = CRGB::Black;
    delay(30);
  }
}

void allOneColor(CRGB colorNow){
  for(int dot = 0; dot < NUM_LEDS; dot++){
    leds[dot] = colorNow;
  }
  FastLED.show();
}

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



