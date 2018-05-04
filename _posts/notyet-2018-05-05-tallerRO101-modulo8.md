---
title: "Programación"
date: 2018-05-05 13:00:00 -0300
permalink: /posts/RO101-modulo8/
description : detalle del modulo de programación
future: true
header:
  teaser: "assets/images/progamando.JPG"
---
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

# Programación

Programar es un arte.

A diferencia de los demás temas, la programación es mas arte que ciencia. Esto es porque para ser habil en programacion, se necesita practicar mucho y se practica utilizando codigo en el que no conocemos nada, vamos aprendiendo de a poco cada una de sus sentencias y finalmente entendemos todos sus componentes.

Es por esta misma razon que usted no deberia preocuparse al comenzar a programar. siempre se desconocen las formas y maneras de trabajar. pero de a poco iremos agregando conceptos.


## **Seteando las herramientas**

Para programar se necesita paciencia y buenas herramientas. veremos ahora las herramientas que ncestia para programar su arduino de una manera practica y comoda

1) Integrated Development Enviroment (IDE)
  El IDE es el conjunto de herramientas que permiten escribir codigo (como en un documento de texto), comprobarlo, cargarlo en la placa y revisarlo. Hasta ahora hemos estado usando "ARDUINO IDE" pero hay muchos otros que usted puede elegir. Sin embargo considere que cualquier otro entorno devera configurarlo y testearlo antes de cambiar completamente su flujo de trabajo.

  Algunos IDE's populares para el trabajo en arduino son : 
   - PlatformIO IDE
   - Notepad++ con plugin para arduino
   - Stino plugin para sublimeText
   - Atmel Studio
   - gedit

2) Color y letra de su editor
  Aunque los IDE's tienen la capacidad de cambiar esta configuración, *no la tome a la ligera!!*.
  En general utilice colores oscuros y letras legibles. Esto reducira el cansancio de estar leyendo su codigo por varios minutos

3) Documentacion
  Se acostumbra a decir que sin documentacion los proyectos no funcionan. PAra programar, tambien se utiliza documentación, en general guias de apoyo como esta.
-- descargue aqui una guia de apoyo de doc --
  
  **siempre** tenga a mano la documentacion de sus dispositivos, tanto el hardware como el software.

4) Teclado y mouse
  Aunque es una caracteristica menor, siempre es conveniente tener un teclado numerico separado y un mouse en vez de touchpad. todo esto con el fin de comprobar su codigo con mayor velocidad.


## **Conceptos de la programacion** 

1) Sintaxis

Cada lenguaje de programación tiene una sintaxis para la forma en que el código necesita ser formateado. Eso es básicamente el equivalente de conocer la gramática apropiada. Por ejemplo, la mayoría de las expresiones en programación terminan con un punto y coma - así; Esto es un poco como escribir un punto al final de la oración. Si escribes un ensayo sin periodos confundirás al lector. Del mismo modo, si escribes un programa Arduino sin sintaxis, confundirás el compilador. El compilador interpreta el código y es un poco como el lector de un ensayo en nuestra analogía.  Si alguna vez estás recibiendo errores extraños y no puedes decir por qué, es probable que hayas roto una de las reglas de la sintaxis (es decir, el formato).
En el lenguaje de programación C++, el punto y coma (;) es como un punto y aparte. Básicamente lo que está diciendo es que hemos terminado una sentencia y a partir de ese momento, empezamos algo nuevo sin relación a lo anterior a nivel de sintaxis.

Expresiones de código

Al leer y escribir código encontrarás algunos bloques básicos de construcción como lo harías en cualquier otro idioma. Por ejemplo, el español tiene sustantivos, adjetivos y verbos. Estos componentes se estructuran en oraciones. La programación a su vez tiene constantes, variables y operadores. Éstos se estructuran en funciones. Veremos cada uno de estos en detalle.

- Constantes:
    Las constantes son términos que se definen una vez y no cambian.

- Variables:
    Elementos que almacenan un valor y pueden modificarse en el tiempo

- Operadores:
    son elementos que ejecutan acciones, generalmente alguna forma de comparación matemática o lógica entre valores.

- Funciones :
     Las funciones son un conjunto estructurado de constantes, operadores y variables.

- Estructuras basicas y de control: 
    son conjunto de palabras que general un control del flujo de funciones

- Bibliotecas(libraries):
    Son un conjunto de fuciones y estructuras que se utilizan para añadir funcionalidad extra a nuestro codigo. se utiliza cuando la tarea a programar es utilziada frecuentemente.


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
