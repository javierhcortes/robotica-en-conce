---
title: "Programación y software"
date: 2018-05-05 13:00:00 -0300
permalink: /posts/RO101-modulo8/
description : detalle del modulo de programación
future: true
header:
  teaser: "assets/images/progamando.JPG"
---

# **¿Que es Programar?**
Programar es la tarea de escribir **lineas de texto** con los pasos que debe seguir un procesador. Estas lineas de texto se denominan código fuente.

<q>_Programar es un arte_</q>

A diferencia de los demás temas asociados a la robótica, la programación es mas arte que ciencia. Esto es porque para ser hábil en programación se necesita mucha practica, paciencia y documentación.

No te preocupes si es tu primera vez programando, **siempre hay conceptos desconocidos**, pero de a poco se conoce mas sobre el código fuente y se progresa.
{: .notice--info}

## **Seteando las herramientas**

Siempre que inicie una tarea de programación revise las herramientas que dispone para trabajar, esto hará mas grata y cómoda su experiencia de programación.

1) **Entorno de desarrollo integrado (IDE en ingles):**

  Los entornos de desarrollo son los programas donde escribimos nuestro código. A diferencia de un editor de texto común, estos incluyen herramientas que permiten comprobar su código y/o cargarlo en su placa. Hasta ahora hemos usado **ARDUINO IDE** pero hay muchos otros que usted puede elegir.

  Considere que trabajar con cualquier otro entorno de desarrollo implica configurarlo
  {: .notice--danger}


  Algunos IDE's populares para programar su placas electrónicas son :
   - PlatformIO IDE
   - Notepad++ con plugin para arduino
   - Stino plugin para sublimeText
   - Cualquier editor de texto, habilitando la opción de editor externo en arduino IDE

2) **Color y letra de su editor :**

  Aunque los IDE's tienen la capacidad de cambiar esta configuración, *no la tome a la ligera!!*.
  En general utilice colores oscuros para el fondo y letras legibles (como negrita) de color blanco. Esto reducirá el cansancio de estar leyendo su código fuente por varios minutos.

3) **Documentación :**

  Se acostumbra a decir que sin documentación los proyectos no funcionan. Para programar, también se utiliza documentación, en general guiás de apoyo y la estructura de los pines de su placa electrónica. **Siempre tenga a mano la documentación de sus dispositivos**, tanto el hardware como el software.

  [<i class="fas fa-download"></i> Documentación Pines Arduino nano](/assets/documentacion/nano_pinout.pdf){: .btn .btn--info}
  [<i class="fas fa-download"></i> Documentación guía de apoyo en español](/assets/documentacion/ProgramacionArduino.pdf){: .btn .btn--info}

  [Link funciones arduino desde Arduino.cc](https://www.arduino.cc/reference/en/)


4) **Teclado y mouse :**
  Aunque es una característica menor, siempre es conveniente tener un teclado numérico separado y un mouse en vez de touchpad. Todo esto con el fin de crear código con mayor velocidad y comodidad.


## **Conceptos de la programación**

1) **Sintaxis :**

Cada lenguaje de programación tiene una manera de ser formateado. Por ejemplo, la mayoría de las expresiones en programación terminan con un punto y coma, así **(;)**. Esto es como escribir un punto al final de la oración.

Si escribes un ensayo sin puntos confundirás al lector. Del mismo modo, si escribes un programa Arduino sin sintaxis, confundirás al compilador.

**Atención :** Si alguna vez estás recibiendo errores extraños y no puedes decir por qué, es probable que hayas roto una de las reglas de la sintaxis (es decir, el formato).
{: .notice--warning}

**Nota :** En el lenguaje de programación C++, el punto y coma (;) es como un punto y aparte. Estamos diciendo que hemos terminado una sentencia y a partir de ese momento, empezamos algo nuevo sin relación a lo anterior a nivel de sintaxis.
{: .notice--success}


2) **Expresiones de código :**

Al leer y escribir código encontrarás algunos bloques básicos de construcción como lo harías en cualquier otro idioma. Por ejemplo, el español tiene sustantivos, adjetivos y verbos. Estos componentes se estructuran en oraciones. La programación a su vez tiene **constantes**, **variables**, **operadores**, entre otros. Éstos se estructuran en **funciones**. Veremos cada uno de estos en detalle.

- Constantes
:   Las constantes son términos que se definen una vez y no cambian.

``` c++
true, false
INPUT, OUTPUT
HIGH, LOW
```

- Variables
:    Elementos que almacenan un valor y pueden modificarse en el tiempo

``` c++
int, bool, char, float, double
```


- Operadores
:    son elementos que ejecutan acciones, generalmente alguna forma de comparación matemática o lógica entre valores.

``` c++
 =, == , <=, >=, +, *, !
```
- Funciones
:     Las funciones son un conjunto estructurado de constantes, operadores y variables.

``` c++
pinMode(pin,[INPUT, OUTPUT]);
digitalWrite(pin, valor);
int digitalreal(pin);
void setup(){}
void loop(){}
```

- Estructuras básicas y de control
:    son conjunto de palabras que general un control del flujo de funciones

``` c++
if () {...} else{...} // sirve para expresiones condicionales
while(){...} // sirve para realizar una accion "MIENTRAS" se produzca cierta condicion
for(int i= 0; i<10; i++) // itera hasta que se cumple la condición
```

- Bibliotecas(libraries)
:    Son un conjunto de fuciones y estructuras que se utilizan para añadir funcionalidad extra a nuestro codigo. se utiliza cuando la tarea a programar es utilziada frecuentemente.

``` c++
include <Servo.h>
```

## Programando el Arduino

Un programa de Arduino se denomina sketch o proyecto y tiene la extensión .ino

Importante: para que funcione el sketch, el nombre del fichero debe estar en un directorio con el mismo nombre que el sketch.
{: .notice}

Cada sketch contiene dos partes fundamentales que no pueden ser olvidadas. Estas son el setup y el loop.

1) **Setup :**

El código de configuración va en esta sección.  Por ejemplo, puede que desee mover un servomotor a su posición por defecto o bien, active el Serial Monitor para depurar su código o parpadear un patrón de prueba de LED para hacerle saber que la aplicación ha comenzado.

2) **Loop :**

Cualquier cosa que ponga aquí se va a ejecutar una y otra vez.
Aquí es donde debería vivir la mayor parte de su código.  El Arduino pasará por lo que haya aquí indefinidamente hasta que se quede sin energía.


## Diagramas de flujo

Antes de comenzar a programar, existe un método muy útil de estructurar las ideas de programación, llamado **diagrama de flujo**. Usted siempre debería hacer este ejercicio antes de comenzar a escribir código.

El diagrama de flujo consite en gfraficar de manera consistente un flujo de control. Veamos un ejemplo.

{:refdef: style="text-align: center;"}
![diagrama](/../assets/images/diagrama/diagrama_flujo.jpeg){: height="60%"  width="60%"}
{: refdef}
Bloques verdes representan funciones. Amarillos condicionales
{: style="color:gray; font-size: 80%; text-align: center;"}

En este caso vemos como el flujo de control "Cocinar y Servir un huevo" tiene un flujo de control.

Revisemos ahora el siguiente caso

{:refdef: style="text-align: center;"}
![diagrama](/../assets/images/diagrama/diagrama_flujo_example.jpg){: height="40%"  width="40%"}
{: refdef}

La diferencia de este caso es la recursividad de la tarea que se ejecuta permanentemente.

## Ejercios

Tratemos de programar nuestra propia lineas de código. Como ejemplo, utilizaremos el sensor de distancia ultrasonico como en el ejemplo del modulo 5.
Programen un código que cumpla la condición
"Si la distancia medida por el sensor ultrasonico es mayor a X, enciende un led. Si es menor o igual, lo apaga."

## Punte H

Ahora veremos como programar un punte H. Recuerde siempre tener a mano la documentación de su chip antes de comenzar a trabajar.

[<i class="fas fa-download"></i> Documentación Puente H](/assets/documentacion/datasheet-l9110.pdf){: .btn .btn--info}

 - Teoria del Punte H :
    El puente H es un dispositivo que es capaz de controlar motores DC, pudiendo regular la velocidad de giro y la dirección. Esto lo hace a través de modificar los caminos de corriente que tiene el circuito.

    {:refdef: style="text-align: center;"}
    ![diagrama](/../assets/images/puenteh.png){: height="60%"  width="60%"}
    {: refdef}

  - Funcionamiento en código :
    Para cambiar la dirección de giro de un motor con puente H, solo debe elegir la secuencia correcta de interruptores a trabajar. Continuación se presenta un código que permite trabajar con puente H.


```c++

const int AIA = 9;  // (pwm) pin 9 connected to pin A-IA
const int AIB = 5;  // (pwm) pin 5 connected to pin A-IB
const int BIA = 10; // (pwm) pin 10 connected to pin B-IA  
const int BIB = 6;  // (pwm) pin 6 connected to pin B-IB

byte speed = 255;  // change this (0-255) to control the speed of the motors

void setup() {
  pinMode(AIA, OUTPUT); // set pins to output
  pinMode(AIB, OUTPUT);
  pinMode(BIA, OUTPUT);
  pinMode(BIB, OUTPUT);
}

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
```

Modifique el código, para ejecutar una rutina de control a su gusto, utilizando las funciones backward(), forward(), left(), right().

Este ejemplo lo puede encontrar en el siguiente [link](https://raw.githubusercontent.com/javierhcortes/robotica-en-conce/master/assets/codigos/codigos-clase4/kitRobotica-1_solo_movimiento/kitRobotica-1_solo_movimiento.ino "EJemplo Robot1").

Para ejecutar este codigo copie el codigo fuente del enlace anterior y carguelo en su Arduino IDE
{: .notice}



## Programación Incremental KIT robot

Asumiremos que usted ha construido su kit de robótica basado en la guía de [Robótica en conce - Guía Armado Kit Robótico](/posts/RO101-armado-kit/) 

El siguiente es el listado de códigos que ira cargando en su robot. Cada uno demuestra una funcionalidad de su robot. En el ejemplo final tendrá el mismo código utilizado en la primera clase para la demostración de este kit robótico. 

1) Este ejemplo carga el robot con solo movimiento fijo, es decir adelante, atrás, izquierda, derecha. Comprueba que su robot siga ese patrón de movimiento, si no es así, probablemente deba cambiar la polaridad de los motores en su puente H. [link](https://raw.githubusercontent.com/javierhcortes/robotica-en-conce/master/assets/codigos/codigos-clase4/kitRobotica-1_solo_movimiento/kitRobotica-1_solo_movimiento.ino "Ejemplo Robot1"). 

2) Este ejemplo comprueba que su robot funcione el sensor ultrasonico[link].Cuando lo cargue abra el monitor Serial o monitor gráfico y observe el cambio de distancia. [link](https://raw.githubusercontent.com/javierhcortes/robotica-en-conce/master/assets/codigos/codigos-clase4/kitRobotica-2_test_sensor_ultrasonico/kitRobotica-2_test_sensor_ultrasonico.ino "Ejemplo Robot2"). 

3) Este ejemplo comprueba que su robot se mueva en función de la lectura del sensor ultrasónico. Con este ejemplo ya se puede considerar un robot. Revise la rutina y observe que el valor del sensor ultrasónico que utiliza para decidir la acción de movimiento del robot. [link](https://raw.githubusercontent.com/javierhcortes/robotica-en-conce/master/assets/codigos/codigos-clase4/kitRobotica-3_movimiento_con_sensor_ultrasonico/kitRobotica-3_movimiento_con_sensor_ultrasonico.ino "Ejemplo Robot3"). 

4) Este ejemplo prueba que su robot se mueva en función de una medición del sensor ultrasónico cuando se mueve el servomotor. Igual que el anterior caso, en este ejemplo el robot se detendrá ṕor algún momento y obtendrá la medición de sensor. [link](https://raw.githubusercontent.com/javierhcortes/robotica-en-conce/master/assets/codigos/codigos-clase4/kitRobot-4_funcionamiento_servomotor/kitRobot-4_funcionamiento_servomotor.ino "Ejemplo Robot4").

