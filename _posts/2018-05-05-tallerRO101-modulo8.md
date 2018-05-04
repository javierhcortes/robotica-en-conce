---
title: "Programación y software"
date: 2018-05-05 13:00:00 -0300
permalink: /posts/RO101-modulo8/
description : detalle del modulo de programación
future: true
header:
  teaser: "assets/images/progamando.JPG"
---

Programar es la tarea de escribir **texto legibles por los humanos** pero que pueda **interpretar un procesador**. Este texto se denomina código de programación.

<q>_Programar es un arte_</q>

A diferencia de los demás temas asociados a la robótica, la programación es mas arte que ciencia. Esto es porque para ser hábil en programación se necesita mucha practica, paciencia y documentación.

No te preocupes si es tu primera vez programando, **siempre hay conceptos desconocidos**, pero de a poco se comprende el funcionamiento y se progresa.
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
   - Atmel Studio
   - gedit

2) **Color y letra de su editor :**

  Aunque los IDE's tienen la capacidad de cambiar esta configuración, *no la tome a la ligera!!*.
  En general utilice colores oscuros para el fondo y letras legibles(como negrita) de color blanco. Esto reducirá el cansancio de estar leyendo su código por varios minutos.

3) **Documentación :**

  Se acostumbra a decir que sin documentación los proyectos no funcionan. Para programar, también se utiliza documentación, en general guiás de apoyo y la estructura de los pines. **Siempre** tenga a mano la documentación de sus dispositivos, tanto el hardware como el software.

  [<i class="fas fa-download"></i> Documentación Pines Arduino nano](/assets/documentacion/nano_pinout.pdf){: .btn .btn--info}
  [<i class="fas fa-download"></i> Documentación guía de apoyo en español](/assets/documentacion/ProgramacionArduino.pdf){: .btn .btn--info}

  [Link funciones arduino desde Arduino.cc](https://www.arduino.cc/reference/en/)


4) **Teclado y mouse :**
  Aunque es una característica menor, siempre es conveniente tener un teclado numérico separado y un mouse en vez de touchpad. Todo esto con el fin de crear código con mayor velocidad y comodidad.


## **Conceptos de la programación**

1) **Sintaxis :**

Cada lenguaje de programación tiene una manera de ser formateado. Eso es básicamente el equivalente de conocer la gramática apropiada. Por ejemplo, la mayoría de las expresiones en programación terminan con un punto y coma, así **(;)**. Esto es como escribir un punto al final de la oración.

Si escribes un ensayo sin puntos confundirás al lector. Del mismo modo, si escribes un programa Arduino sin sintaxis, confundirás al compilador.

**Atención :** Si alguna vez estás recibiendo errores extraños y no puedes decir por qué, es probable que hayas roto una de las reglas de la sintaxis (es decir, el formato).
{: .notice--warning}

**Nota :** En el lenguaje de programación C++, el punto y coma (;) es como un punto y aparte. Estamos diciendo que hemos terminado una sentencia y a partir de ese momento, empezamos algo nuevo sin relación a lo anterior a nivel de sintaxis.
{: .notice--success}


2) **Expresiones de código :**

Al leer y escribir código encontrarás algunos bloques básicos de construcción como lo harías en cualquier otro idioma. Por ejemplo, el español tiene sustantivos, adjetivos y verbos. Estos componentes se estructuran en oraciones. La programación a su vez tiene **constantes**, **variables**, **operadores**, entre otros. Éstos se estructuran en funciones. Veremos cada uno de estos en detalle.

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
pinMode(pin,[INPUT, OUTPUT])
digitalWrite(pin, valor)
int digitalreal(pin)
```

- Estructuras basicas y de control
:    son conjunto de palabras que general un control del flujo de funciones

``` c++
void setup(){}
void loop(){}
if () {...} else{...}
while(){...}
for(int i= 0; i<10; i++)
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

 - Setup:
  El código de configuración va en esta seccion.  Por ejemplo, puede que desee mover un servomotor a su posición por defecto o bien, active el Serial Monitor para depurar su código o parpadear un patrón de prueba de LED para hacerle saber que la aplicación ha comenzado.

- Loop:
Cualquier cosa que ponga aquí se va a ejecutar una y otra vez.
Aquí es donde debería vivir la mayor parte de su código.  El Arduino pasará por lo que haya aquí indefinidamente hasta que se quede sin energía.


  ----------------


  Una vez que domine los LEDs parpadeantes y fundidos, puede transferir este conocimiento al control de un motor. Sin embargo, no se puede conectar un motor directamente al pin Arduino por dos razones. Primero, el pin Arduino sólo es capaz de proporcionar un poquito de corriente, y un motor es un cerrojo de corriente (especialmente cuando arranca y se detiene). Además, cuando un motor se detiene, produce una corriente de polaridad opuesta a la que está funcionando. Se sabe que esta corriente daña los pines de Arduino y evita que funcionen. Por lo tanto, construir un circuito de amortiguación es útil.

 Para hacer girar el motor hacia atrás, necesitará un puente en H.

  Un H-bridge es un circuito que permite invertir la dirección del motor.

  Esencialmente, un H-bridge consta de cuatro interruptores o transistores. En el ejemplo anterior, hay un interruptor entre cada polo del motor y la tierra. También hay otro juego de interruptores entre cada polo del motor y la potencia.

  Cuando estos interruptores se dibujan en un diagrama, parecen una especie de "H". Así es como el circuito obtiene el nombre de H-bridge.

  Cuando el conjunto de interruptores etiquetados con "A" está cerrado, la potencia fluye a través del motor de tal manera que gira en sentido horario.

  Cuando el otro ajuste "B" está cerrado, la potencia fluye en sentido contrario y el motor gira en sentido contrario a las agujas del reloj.

  Lo importante que hay que tener en cuenta cuando se trata de puentes H es que ambos conjuntos no se pueden cerrar al mismo tiempo, o la alimentación y la tierra se conectarán directamente, y usted tendrá un cortocircuito.

  Además, si mezcla y combina los interruptores como el cierre A1 y B2, también creará un cortocircuito. Es importante que los interruptores "A" se cierren o los interruptores "B". Nunca ambas cosas o alguna combinación de ellas.


  Si usted se ha adelantado y ha construido este circuito, puede usar el siguiente código para verlo en acción:

´´´c++
  void setup () {
    Ajustar los pines digitales como salidas
    pinMode (5, OUTPUT);
    pinMode (6, OUTPUT);  
  }

  void loop () {
    Girar en el sentido de las agujas del reloj
    digitalWrite (5, LOW);   
    digitalWrite (6, HIGH);
    retraso (2000);

    Giro en sentido antihorario
    digitalWrite (5, HIGH);    
    digitalWrite (6, LOW);
    retraso (2000);              
  }
´´´

  Si desea probar el control de la velocidad en ambas direcciones, pruebe con este código PWM-ing the base pins of the transistor:

´´´c++
  void setup () {
    Ajustar los pines digitales como salidas
    pinMode (5, OUTPUT);
    pinMode (6, OUTPUT);  
  }

  void loop () {
    Girar lentamente en el sentido de las agujas del reloj
    digitalWrite (5, LOW);   
    analogWrite (6,80);
    delay (2000);

    Gira más rápido en sentido contrario a las agujas del reloj
    analogWrite (5,180);    
    digitalWrite (6, LOW);
    delay (2000);
  }
´´´
---


Seguramente el código anterior no significa nada para ti si no has programado nunca antes. Sin embargo, quiero que te fijes en el punto y coma final. El compilador interpreta que a partir de ese punto y coma todo lo que escriba será una sentencia nueva, sin nada que ver con la anterior.

En este punto ya podemos hacer una prueba para ver como actúa el compilador. Abre un nuevo programa en el IDE de Arduino y copia el siguiente código. No hace falta ni que conectes la placa a tu ordenador.
//Sin punto y coma
int variable1 = 0

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}

Por último en el editor nos sale una franja roja indicando la línea donde está el error y donde se hace referencia en la consola. Ahora cambia el código y pon el punto y coma al final de la línea 2 y verás como compila.

Como ves no estás sólo. El compilador es muy exigente pero también nos ayuda a corregir los errores.


## Modulo 7 - Mecánica practico día 3
  * puente H con motores, atrás y adelante al presionar botones (cargado en micro-controlador)
  * servomotor moviendo una base donde estén los sensores

# Día 4

## Modulo 8 - Software
 * Lógica de programación
    * variables, operadores, iteración
 * Algoritmos, diagrama de bloque

## Modulo 9 - Practica de Software día 4
  * Armado de chasis con ruedas y Sensores
  * Cargado de varios programas de control ( evasor de obstáculos - Giro constante)
https://www.arduino.cc/reference/en/  

https://playground.arduino.cc/Main/InterfacingWithHardware#microBox

https://github.com/microcodesv/Acordeon-arduino/blob/master/Acordeon%20Arduino.pdf
