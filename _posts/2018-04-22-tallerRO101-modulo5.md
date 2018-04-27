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

[<i class="fas fa-download"></i> Descargar los códigos y su documentación aquí](/../assets/codigos/codigos.zip){: .btn .btn--success}

## Ejemplo 1 "Parpadeo"

Este ejemplo muestra la cosa más simple que puedes hacer con tu Arduino para ver la salida física, parpadea el LED de la placa.

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


## Ejemplo 2 


/*
  DigitalReadSerial

  Reads a digital input on pin 2, prints the result to the Serial Monitor

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/DigitalReadSerial
*/

// digital pin 2 has a pushbutton attached to it. Give it a name:
int pushButton = 2;

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the pushbutton's pin an input:
  pinMode(pushButton, INPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input pin:
  int buttonState = digitalRead(pushButton);
  // print out the state of the button:
  Serial.println(buttonState);
  delay(100);        // delay in between reads for stability
}


## ejemplo 3

/*
  ReadAnalogVoltage

  Reads an analog input on pin 0, converts it to voltage, and prints the result to the Serial Monitor.
  Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/ReadAnalogVoltage
*/

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltage = sensorValue * (5.0 / 1023.0);
  // print out the value you read:
  Serial.println(voltage);
  delay(100);
}

## ejemplo 4

/*
  Analog Input

  Demonstrates analog input by reading an analog sensor on analog pin 0 and
  turning on and off a light emitting diode(LED) connected to digital pin 13.
  The amount of time the LED will be on and off depends on the value obtained
  by analogRead().

  The circuit:
  - potentiometer
    center pin of the potentiometer to the analog input 0
    one side pin (either one) to ground
    the other side pin to +5V
  - LED
    anode (long leg) attached to digital output 13
    cathode (short leg) attached to ground

  - Note: because most Arduinos have a built-in LED attached to pin 13 on the
    board, the LED is optional.

  created by David Cuartielles
  modified 30 Aug 2011
  By Tom Igoe

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/AnalogInput
*/

int sensorPin = A0;    // select the input pin for the potentiometer
int ledPin = 13;      // select the pin for the LED
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  // turn the ledPin on
  digitalWrite(ledPin, HIGH);
  // stop the program for <sensorValue> milliseconds:
  delay(sensorValue);
  // turn the ledPin off:
  digitalWrite(ledPin, LOW);
  // stop the program for for <sensorValue> milliseconds:
  delay(sensorValue);
}



## 05 distancia

    /*
    * Ultrasonic Sensor HC-SR04 and Arduino Tutorial
    *
    * Crated by Dejan Nedelkovski,
    * www.HowToMechatronics.com
    *
    */
    // defines pins numbers
    const int trigPin = 9;
    const int echoPin = 10;
    // defines variables
    long duration;
    int distance;
    void setup() {
    pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
    pinMode(echoPin, INPUT); // Sets the echoPin as an Input
    Serial.begin(9600); // Starts the serial communication
    }
    void loop() {
    // Clears the trigPin
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    // Sets the trigPin on HIGH state for 10 micro seconds
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    // Reads the echoPin, returns the sound wave travel time in microseconds
    duration = pulseIn(echoPin, HIGH);
    // Calculating the distance
    distance= duration*0.034/2;
    // Prints the distance on the Serial Monitor
    Serial.print("Distance: ");
    Serial.println(distance);
    }