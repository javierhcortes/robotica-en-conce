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
pinMode(pin,[INPUT, OUTPUT]);
digitalWrite(pin, valor);
int digitalreal(pin);
void setup(){}
void loop(){}
```

- Estructuras basicas y de control
:    son conjunto de palabras que general un control del flujo de funciones

``` c++
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

Cada sketch contiene dos partes fundamentales que no puden ser olvidadas

1) **Setup :**

El código de configuración va en esta sección.  Por ejemplo, puede que desee mover un servomotor a su posición por defecto o bien, active el Serial Monitor para depurar su código o parpadear un patrón de prueba de LED para hacerle saber que la aplicación ha comenzado.

2) **Loop :**

Cualquier cosa que ponga aquí se va a ejecutar una y otra vez.
Aquí es donde debería vivir la mayor parte de su código.  El Arduino pasará por lo que haya aquí indefinidamente hasta que se quede sin energía.
