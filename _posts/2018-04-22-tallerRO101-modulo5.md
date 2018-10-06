---
title: "Modulo practico de Electrónica"
date: 2018-04-22 13:00:00 -0300
permalink: /posts/RO101-modulo5/
description : Detalle de los ejercicios prácticos del modulo4
header:
  teaser: "assets/images/practica.JPG"
---

# Práctica Modulo Electrónica

![Banner](/../assets/images/practica.JPG)

En esta sección veremos al detalle los ejemplos del modulo practico de electrónica.
Mostraremos los ejemplos, el cableado con tu microcontrolador y el código que debes subir a tu placa.

## Documentación a descargar
Para tu comodidad, puedes bajar los códigos antes de comenzar.

[<i class="fas fa-download"></i> Descargar códigos & documentación aquí](/../assets/codigos/codigos.zip){: .btn .btn--success}

## Ejemplo 1 "Parpadeo"

Este ejemplo muestra lo más simple que puedes hacer con tu Arduino para ver su funcionamiento, parpadear el LED integrado.

1) **Hardware Requerido**
  * Cable USB
  * Placa Arduino nano

2) **Circuito**  
Este ejemplo utiliza el LED incorporado que tiene la placa Arduino nano. Por lo tanto no es necesario armar un circuito

3) **Código**

Abra su Arduino IDE y copie este código. lo analizaremos en detalle.


```c++
/*
  Parpadeo
  Enciende un LED durante un segundo, luego lo apaga durante un segundo, repetidamente.
  las barras // son un comentario
*/

// la función setup() se ejecuta una vez cuando se presiona
// reset o se enciende la tarjeta
void setup() {
  //Inicializar el pin digital "LED_BUILTIN" (led de la placa) como salida.
  pinMode(LED_BUILTIN, OUTPUT);
}

// la función de loop() se ejecuta una y otra vez para siempre
void loop() {
  digitalWrite(LED_BUILTIN, HIGH); // enciende el LED (HIGH es el nivel de tensión)
  delay(1000); // esperar un segundo
  digitalWrite(LED_BUILTIN, LOW); // apague el LED haciendo que la tensión sea BAJA
  delay(1000); // esperar un segundo
}
```

4)  **Análisis del código**

Lo primero que hay que hacer es inicializar el pin que tiene el led. en este caso su nombre es LED_BUILTIN. lo configuramos como salida.

    pinMode(LED_BUILTIN, OUTPUT);


En el loop (lazo) principal, se enciende el LED con la línea:

    digitalWrite(LED_BUILTIN, HIGH);

Esto suministra **5 voltios** al ánodo LED. Esto crea una diferencia de voltaje entre los pines del LED y lo enciende. Luego lo apagas con la línea:

    digitalWrite(LED_BUILTIN, LOW);

Esto hace que el pin LED_BUILTIN vuelva a **0 voltios** y apague el LED. Entre el encendido y el apagado, necesitamos que halla suficiente tiempo para observar el cambio, así que los comandos delay() le decimos a la placa que no haga nada durante 1000 milisegundos, o un segundo.

5) **Compilación y carga de código**

Por ultimo, dale click a el botón de compilar y de subir, para que el código se descargue en la placa


## Ejemplo 2 "Lectura de señal digital"

1) **Hardware Requerido**

* Arduino nano
* Cable usb
* Resistencia
* Pulsador
* Protoboard

2) **Circuito**  

Para este ejemplo, usaremos el protoboard, que es un elemento para hacer prototipós de circuitos
electónicos. Esta construido de manera que hay uniones electricas entre distintos puntos de la tarjeta.

{:refdef: style="text-align: center;"}
![duty](/../assets/images/protoboard.jpg){: height="60%"  width="60%"}
{: refdef}


Tambien utilizaremos un pulsador, que es un elemento capaz de abrir o cerrar el paso de electricidad.
en particular ocuparemos un pulsador de cuatro pines. Tiene el siguiente diagrama

{:refdef: style="text-align: center;"}
![duty](/../assets/images/switch_6mm.png)
{: refdef}

Ahora arme el siguiente circuito


{:refdef: style="text-align: center;"}
![duty](/../assets/images/digital_schema.png)
{: refdef}

3) **Código**

```c++
/*
  Lectura de señal digital
  Lee el valor digital del pin de entrada 2, muestra el resultado en el monitor Serial
*/

// El pin digital 2 tiene conectado un pulsado
// ponle un nombre:
int pushButton = 2;

//la rutina de configuración, una vez que se inicia //el arduino
void setup() {
  // Inicia la comunicación serial a 9600 bps
  Serial.begin(9600);
  // configuramos el botón como entrada
  pinMode(pushButton, INPUT);
}

// el ciclo que se ejecutara por siempre
void loop() {
  // lee el pin de entrada
  int estadoDelBoton = digitalRead(pushButton);
  // imprime el estado del boton
  Serial.println(estadoDelBoton);
  delay(100);        // tiempo de espera entre lecturas
}
```

## Ejemplo 3  "Leer un voltaje análogo"

1) **Hardware Requerido**
* Arduino nano
* Cable usb
* Potenciometro

2) **Circuito**  
Arme el siguiente circuito

{:refdef: style="text-align: center;"}
![duty](/../assets/images/potenciometro_schema.png)
{: refdef}

3) **Código**

```c++
/*
  Leer un voltaje análogo

  Lee una entrada análoga, en el pin 0. convierte el valor a voltaje y muestra en pantalla el valor.
  Conecte el pin centrar del potenciómetro al pin A0, y los extremos a +5V y tierra
*/

//la rutina de configuración, una vez que se inicia //el arduino
void setup() {
  // Inicia la comunicación serial a 9600 bps
  Serial.begin(9600);
}

// el ciclo que se ejecutara por siempre
void loop() {
  // lee el input analogo en el pin 0
  int sensorValue = analogRead(A0);
  // Convierte el valor analogo de lectura (que va desde los 0-1023)  a voltaje (0 a 5V)
  float voltage = sensorValue * (5.0 / 1023.0);
  // muestra en pantalla el valor
  Serial.println(voltage);
  delay(100);
}
```

## Ejemplo 4 "Entrada análoga"

1) **Hardware Requerido**
* Arduino nano
* Cable usb
* Potenciometro

2) **Circuito**  
Arme el siguiente circuito

{:refdef: style="text-align: center;"}
![duty](/../assets/codigos/ejemplo3y4.jpg)
{: refdef}

3) **Código**

```c++
/*
  Entrada análoga

  Muestra la entrada análoga, leyendo un sensor análogo en el pin 0 y cambiando el encendido y apagado de un led conectado en el pin 13.
  La cantidad de tiempo que el led estará encendido y apagado, depende del valor análogo obtenido
*/

int sensorPin = A0;    // selecciona el pin de entrada
int ledPin = 13;      // selecciona el pin del led
int sensorValue = 0;  // variable para almacenar el valor del sensor

void setup() {
  // declaramos el "pinLed" como una salida
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // leemos el valor del sensor
  sensorValue = analogRead(sensorPin);
  // prendemos el led
  digitalWrite(ledPin, HIGH);
  // detenemos el programa por <sensorValue> milisegundos

  delay(sensorValue);
  // apagamos el led
  digitalWrite(ledPin, LOW);
  //detenemos el programa por <sensorValue> milisegundos
  delay(sensorValue);
}
```

## Ejemplo05  "Medidor de distancia"
1) **Hardware Requerido**
* Arduino nano
* Cable USB
* Sensor de distancia

2) **Circuito**  
Arme el siguiente circuito

{:refdef: style="text-align: center;"}
![duty](/../assets/codigos/ejemplo5.jpg)
{: refdef}

3) **Código**

```c++
/*
Sensor ultrasonido HC-SR04
Crated by Dejan Nedelkovski,
*/

// defines pines de funcionamiento
const int trigPin = 9;
const int echoPin = 10;
// define variables
long duration;
int distance;
// configuración del arduino
void setup() {
pinMode(trigPin, OUTPUT); // Setea el pin de Trigger como salida
pinMode(echoPin, INPUT); // Setea el pin de Echo como Entrada
Serial.begin(9600); // Configura la comunicacion serial
}

// ciclo que se ejecuta permanentemente
void loop() {
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
distance= duration*0.034/2;
//imprime la distancia en el monitor serial
Serial.print("Distance: ");
Serial.println(distance);
}
```

# Ejemplo 6 Anillo Led

1) **Hardware Requerido**
* Arduino nano
* Cable USB
* Anillo led 16 pixeles

2) **Circuito**  
Arme el siguiente circuito **"referencial"**

{:refdef: style="text-align: center;"}
![duty](/../assets/codigos/ejemplo6.png)
{: refdef}


3) **Código**

Debe instalar la libreria de manejo de pixeles.
disponible en este repositorio:

    https://github.com/adafruit/Adafruit_NeoPixel


Puede instalarlo directo desde el arduino IDE. dirigirse a Sketch->inlcude libraries->Manage libraries
en buscar escriba "Adafruit NeoPixel" e instale la versión 1.1.6(actual)

```c++
#include <Adafruit_NeoPixel.h>

#define PIN 2
#define STRIPSIZE 16

// Parameter 1 = number of pixels in strip
// Parameter 2 = pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
Adafruit_NeoPixel strip = Adafruit_NeoPixel(STRIPSIZE, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
  strip.setBrightness(25);  // Lower brightness and save eyeballs!
  strip.show(); // Initialize all pixels to 'off'
}

void loop() {
  // Some example procedures showing how to display to the pixels:
  colorWipe(strip.Color(0,0,0), 25); // Black
  colorWipe(strip.Color(64, 0, 0), 100); // Red
  colorWipe(strip.Color(0, 64, 0), 100); // Green
  colorWipe(strip.Color(0, 0, 64), 100); // Blue
  colorWave(75);
  colorWipe(strip.Color(0,0,0), 100); // Black
  rainbow(15);
  colorWipe(strip.Color(0,0,0), 100); // Black
  rainbowCycle(15);
  colorWipe(strip.Color(0,0,0), 100); // Black
  colorWave(30);
}

// Fill the dots one after the other with a color
void colorWipe(uint32_t c, uint8_t wait) {
  for(uint16_t i=0; i<strip.numPixels(); i++) {
      strip.setPixelColor(i, c);
      strip.show();
      delay(wait);
  }
}

void rainbow(uint8_t wait) {
  uint16_t i, j;

  for(j=0; j<256; j++) {
    for(i=0; i<strip.numPixels(); i++) {
      strip.setPixelColor(i, Wheel((i+j) & 255));
    }
    strip.show();
    delay(wait);
  }
}

// Slightly different, this makes the rainbow equally distributed throughout
void rainbowCycle(uint8_t wait) {
  uint16_t i, j;

  for(j=0; j<256*5; j++) { // 5 cycles of all colors on wheel
    for(i=0; i< strip.numPixels(); i++) {
      strip.setPixelColor(i, Wheel(((i * 256 / strip.numPixels()) + j) & 255));
    }
    strip.show();
    delay(wait);
  }
}

// Input a value 0 to 255 to get a color value.
// The colours are a transition r - g - b - back to r.
uint32_t Wheel(byte WheelPos) {
  if(WheelPos < 85) {
   return strip.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
  } else if(WheelPos < 170) {
   WheelPos -= 85;
   return strip.Color(255 - WheelPos * 3, 0, WheelPos * 3);
  } else {
   WheelPos -= 170;
   return strip.Color(0, WheelPos * 3, 255 - WheelPos * 3);
  }
}

/**
 *      ^   ^   ^  
 * ~~~~~ ColorWave ~~~~~
 *        V   V   V   
 */
void colorWave(uint8_t wait) {
  int i, j, stripsize, cycle;
  float ang, rsin, gsin, bsin, offset;

  static int tick = 0;

  stripsize = strip.numPixels();
  cycle = stripsize * 25; // times around the circle...

  while (++tick % cycle) {
    offset = map2PI(tick);

    for (i = 0; i < stripsize; i++) {
      ang = map2PI(i) - offset;
      rsin = sin(ang);
      gsin = sin(2.0 * ang / 3.0 + map2PI(int(stripsize/6)));
      bsin = sin(4.0 * ang / 5.0 + map2PI(int(stripsize/3)));
      strip.setPixelColor(i, strip.Color(trigScale(rsin), trigScale(gsin), trigScale(bsin)));
    }

    strip.show();
    delay(wait);
  }

}

/**
 * Scale a value returned from a trig function to a byte value.
 * [-1, +1] -> [0, 254]
 * Note that we ignore the possible value of 255, for efficiency,
 * and because nobody will be able to differentiate between the
 * brightness levels of 254 and 255.
 */
byte trigScale(float val) {
  val += 1.0; // move range to [0.0, 2.0]
  val *= 127.0; // move range to [0.0, 254.0]

  return int(val) & 255;
}

/*
   Map an integer so that [0, striplength] -> [0, 2PI]
*/

float map2PI(int i) {
  return PI*2.0*float(i) / float(strip.numPixels());
}

```
