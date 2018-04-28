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


## Ejemplo 2 "Lectura de señal digital"

1) **Hardware Requerido**

* Arduino nano
* Cable usb
* Resistencia
* pulsador

2) **Circuito**  
Arme el siguiente circuito

{:refdef: style="text-align: center;"}
![duty](/../assets/codigos/ejemplo2.jpg)
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

## ejemplo 3  "Leer un voltaje análogo"

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

## ejemplo 4 "Entrada análoga"

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