---
title: "Programación"
date: 2018-05-05 13:00:00 -0300
permalink: /posts/RO101-modulo8/
description : detalle del modulo de programación
draft: true
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



  Sintaxis

  Cada lenguaje de programación tiene una sintaxis para la forma en que el código necesita ser formateado. Eso es básicamente el equivalente de conocer la gramática apropiada. Por ejemplo, la mayoría de las expresiones en programación terminan con un punto y coma - así; Esto es un poco como escribir un punto al final de la oración. Si escribes un ensayo sin periodos confundirás al lector. Del mismo modo, si escribes un programa Arduino sin sintaxis, confundirás el compilador. El compilador interpreta el código y es un poco como el lector de un ensayo en nuestra analogía.

  Si alguna vez estás recibiendo errores extraños y no puedes decir por qué, es probable que hayas roto una de las reglas de la sintaxis (es decir, el formato).

  Expresiones de código

  Al leer y escribir código encontrarás algunos bloques básicos de construcción como lo harías en cualquier otro idioma. Por ejemplo, el inglés tiene sustantivos, adjetivos y verbos. Estos componentes se estructuran en oraciones. La programación a su vez tiene constantes, variables y operadores. Éstos se estructuran en funciones.

  Aquí están algunas definiciones básicas de los componentes comunes de programación:

  Las constantes son términos que se definen una vez y no cambian.

  Las variables son términos que son marcadores de posición para otros valores y pueden cambiar.

  Los operadores son términos que ejecutan una acción, que es típicamente alguna forma de comparación matemática o lógica entre valores.

  Las funciones son un conjunto estructurado de constantes, operadores y variables. Cada vez que se llama una función, ésta lee y ejecuta la misma rutina de acción específica.

  Estructura del programa

  Una vez que haya dominado los componentes de la gramática inglesa y haya comenzado a escribir oraciones, el siguiente paso lógico es escribir una composición como un ensayo. Así como un ensayo tiene una estructura con un párrafo de apertura, un cuerpo de texto y un párrafo de cierre, así también lo tiene un programa Arduino. Sin embargo, la estructura de un programa Arduino es un poco diferente.

  A continuación se presenta un programa típico:


  //####################
  EL ENCABEZADO #### ###
  //####################

  El encabezado le explica a usted como ser humano lo que el programa está haciendo
  No es procesado por el compilador
  También nota que cualquier cosa precedida por dos barras como ésa' //' /
  Se considera un comentario y no procesado por el compilador.
  Los comentarios le explican lo que está sucediendo en el código.


  //#####################
  DEFINICION ####
  //#####################

  Las definiciones son cosas que queremos establecer globalmente en todo el código.
  Hacemos esto antes de que empiece el código.
  Sólo ocurre una vez cuando el código se ejecuta.

  Las librerías a menudo se requieren para añadir funcionalidad adicional al software Arduino.
  Un ejemplo que usaremos mucho es la biblioteca de servos.
  Al añadir la biblioteca de servos obtenemos comandos servo-específicos que facilitan la vida.
  #Incluye <bibliotecas. h>


  También podemos definir variables y constantes
  que queremos establecer globalmente en todo el código.
  Hay diferentes tipos de variables y constantes
  Aprenda más aquí bajo' constante' y' tipos de datos':
  // http://www.arduino.cc/en/Reference/HomePage

  Por ejemplo, podemos establecer una variable intenger
  int definición1;

  También podemos establecer una variable larga y darle un valor inicial.
  definición larga2 = 3000;

  También podemos nombrar algo constante, y darle un valor que no cambiará
  const esteIsaconstante = 2;


  //################
  /#### SETUP ###
  //################

  nulo setup () {

    El código de configuración va aquí.
    Como las definiciones sólo se ejecuta una vez.
    La diferencia es que en la configuración se incluyen las cosas que se quieren hacer,
    no cosas que quieras definir.

    Por ejemplo, puede que desee mover un servomotor a su posición por defecto

    O bien, active el Serial Monitor para depurar su código

    O parpadear un patrón de prueba de LED para hacerle saber que la aplicación ha comenzado

  }


  //###################
  ##### BUCLE PRINCIPAL ###
  //###################

  bucle vacío () {

    Cualquier cosa que ponga aquí se va a atropellar una y otra vez.
    Aquí es donde debería vivir la mayor parte de su código.
    El Arduino pasará por lo que haya aquí indefinidamente hasta que se quede sin energía.

  }


  ----------------

  03. Analógico --> Fading

  Una vez hecho esto, cambie el cable conectado del pin digital 7 al pin digital 9, y suba el código a su Arduino.

  El LED debería ahora desaparecer y apagarse.


  Una vez que domine los LEDs parpadeantes y fundidos, puede transferir este conocimiento al control de un motor. Sin embargo, no se puede conectar un motor directamente al pin Arduino por dos razones. Primero, el pin Arduino sólo es capaz de proporcionar un poquito de corriente, y un motor es un cerrojo de corriente (especialmente cuando arranca y se detiene). Además, cuando un motor se detiene, produce una corriente de polaridad opuesta a la que está funcionando. Se sabe que esta corriente daña los pines de Arduino y evita que funcionen. Por lo tanto, construir un circuito de amortiguación es útil.

  Todo lo que necesita para controlar un motor usando un Arduino es una resistencia de 2K, un transistor NPN (TIP120 en este caso), y un diodo 1N4001. La resistencia 2K trabaja para proteger el perno Arduino, el transistor sirve como una válvula que permite que más o menos corriente fluya a través del motor. Esto es lo que enciende y apaga el motor y controla su velocidad.

  El diodo se utiliza como amortiguador. Cuando la electricidad fluye a través del motor, el diodo no hace nada. Sin embargo, cuando el motor se detiene, la corriente inversa fluye a través del diodo, y de regreso a través del motor. Esto protege el circuito de picos de tensión repentinos.

  Si todo esto suena confuso, usted puede aprender más sobre estos componentes básicos en mi Clase de Electrónica.

  Si desea encender y apagar el motor usando el circuito ilustrado, necesita hacer dos conexiones más. Primero, conecte la toma de tierra del paquete de baterías externas a la clavija de tierra del Arduino. Esto se llama "compartir la tierra" y es necesario para que el circuito funcione. A continuación, conecte el pin 13 del Arduino a la resistencia 2K conectada a la base de transistores. Una vez hecho esto, carga el ejemplo de Blink y súbelo al Arduino. En lugar de parpadear un LED, encenderá y apagará el motor.

  Si desea controlar la velocidad del motor, cambie el cableado al pin 13 y cargue el ejemplo de desvanecimiento para aumentar y disminuir la velocidad del motor.

  Puede que ahora te haya dado la espalda, ninguna de estas dos soluciones revertirán el motor. Para hacer girar el motor hacia atrás, necesitará un puente en H.

  Un H-bridge es un circuito que permite invertir la dirección del motor. Puentes H más avanzados - como los que se encuentran dentro de los servomotores - también le permiten controlar la velocidad del motor.

  Esencialmente, un H-bridge consta de cuatro interruptores o transistores. En el ejemplo anterior, hay un interruptor entre cada polo del motor y la tierra. También hay otro juego de interruptores entre cada polo del motor y la potencia.

  Cuando estos interruptores se dibujan en un diagrama, parecen una especie de "H". Así es como el circuito obtiene el nombre de H-bridge.

  Cuando el conjunto de interruptores etiquetados con "A" está cerrado, la potencia fluye a través del motor de tal manera que gira en sentido horario.

  Cuando el otro ajuste "B" está cerrado, la potencia fluye en sentido contrario y el motor gira en sentido contrario a las agujas del reloj.

  Lo importante que hay que tener en cuenta cuando se trata de puentes H es que ambos conjuntos no se pueden cerrar al mismo tiempo, o la alimentación y la tierra se conectarán directamente, y usted tendrá un cortocircuito.

  Además, si mezcla y combina los interruptores como el cierre A1 y B2, también creará un cortocircuito. Es importante que los interruptores "A" se cierren o los interruptores "B". Nunca ambas cosas o alguna combinación de ellas.

  Si quieres controlar la velocidad, usarías cuatro transistores en vez de interruptores y controlarías la base de cada transistor usando tu Arduino.

  Arriba hay un ejemplo crudo de un puente H DIY usando dos transistores PNP (2N3906) y dos NPN (2N3904). Antes de que usted salga y construya este circuito y lo ponga en su proyecto, es importante tener en cuenta que estos transistores no pueden manejar mucha corriente en absoluto. Este ejemplo sólo debe ser probado con motores relativamente' muy pequeños' (no más grandes que el de la foto), y no es necesario construir. Es principalmente para explicar el concepto. A medida que continuamos con el curso utilizaremos placas de controladores de motor con puentes H prefabricados.

  Ahora que eso está fuera del camino, vamos a discutir brevemente acerca de lo que está sucediendo. Cada lado de la "H" consta de un transistor PNP en la "parte superior" y un transistor NPN en la "parte inferior". La base de cada uno de estos transistores está conectada a un riel común a través de una resistencia de 1K (para proteger el Arduino), y este riel se conecta a un pin Arduino. El emisor del transistor PNP está conectado a la alimentación y el emisor del transistor NPN está conectado a tierra. A cada lado de la' H', ambos colectores se conectan entre sí para unir un solo perno del motor. También se incluyen en el circuito cuatro diodos de protección de silicio 1N4001 que están polarizados inverso entre cada clavija del motor y la alimentación de voltaje positivo y tierra.

  Usando una combinación de transistores PNP y NPN - en contraposición a cuatro transistores NPN - se logran dos cosas. Primero, crea un arreglo donde un transistor en cada lado está siempre desenganchado, previniendo cortocircuitos. En segundo lugar, permite el control del H-bridge con sólo dos pines digitales desde el Arduino.

  Por ejemplo, si tienes un pin Arduino enviando una señal alta a un lado de la' H', y el otro pin Arduino enviando una señal baja al otro lado, la electricidad fluirá desde el PNP de un lado al NPN del otro. Si usted invierte los pines Arduino, la electricidad fluirá a través del par de transistores opuestos, invirtiendo la dirección del motor.

  La velocidad del motor también se puede controlar usando un puente H como éste, mediante PWM, accionando el perno Arduino positivo en lugar de colocarlo en HIGH.

  Si usted se ha adelantado y ha construido este circuito, puede usar el siguiente código para verlo en acción:

  nulo setup () {
    Ajustar los pines digitales como salidas
    pinMode (5, OUTPUT);
    pinMode (6, OUTPUT);  
  }

  bucle vacío () {
    Girar en el sentido de las agujas del reloj
    digitalWrite (5, LOW);   
    digitalWrite (6, HIGH);
    retraso (2000);

    Giro en sentido antihorario
    digitalWrite (5, HIGH);    
    digitalWrite (6, LOW);
    retraso (2000);              
  }


  Si desea probar el control de la velocidad en ambas direcciones, pruebe con este código PWM-ing the base pins of the transistor:

  nulo setup () {
    Ajustar los pines digitales como salidas
    pinMode (5, OUTPUT);
    pinMode (6, OUTPUT);  
  }

  bucle vacío () {
    Girar lentamente en el sentido de las agujas del reloj
    digitalWrite (5, LOW);   
    analogWrite (6,80);
    retraso (2000);

    Gira más rápido en sentido contrario a las agujas del reloj
    analogWrite (5,180);    
    digitalWrite (6, LOW);
    retraso (2000);              
  }

  La construcción de un puente en H muy confiable es una forma de arte para sí misma y fuera del alcance de esta clase. En su lugar, utilizaremos la pantalla del controlador del motor y los módulos. Básicamente son placas de circuito impreso con puentes H prefabricados para el control de motores.

  Algunos motores incluso tienen su propio H-bridge ya incorporado, como aprenderá a continuación en la lección servo.
