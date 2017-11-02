instructables. com
Módulos y Escudos
10-13 minutos
Introducción: Módulos y Escudos

En sí mismo, el Arduino se limita a un control de entrada y salida muy básico. Para hacer algo más, es necesario construir circuitos complejos a partir de muchos componentes electrónicos. El blindaje y los módulos son complejos circuitos pre-construidos diseñados para resolver una tarea particular. Esto significa que en vez de construir y conectar tu Arduino a un circuito casero complicado y grande, puedes simplemente conectarlo a los terminales apropiados en estas placas, y ellos harán mucho del trabajo por ti. Esto le permite ampliar rápida y fácilmente la funcionalidad del microcontrolador sin grandes complicaciones.

Un escudo Arduino es una placa de circuito especial que se enchufa en la parte superior del Arduino y le añade una funcionalidad especial. Se le da su nombre porque es un poco como si la tabla tuviera un escudo frente a sí misma como protección.

La gente fabrica todo tipo de escudos para mejorar las capacidades del Arduino. Son básicamente circuitos especiales diseñados para hacer algo muy particular, y luego se conectan directamente al Arduino. Dado que hay un sinfín de circuitos que se pueden conectar al Arduino, también hay innumerables escudos en el mundo realizando una amplia variedad de funciones.

Uno de los tipos más comunes de escudos encontrados en la robótica de hobby es un escudo del motor. Un blindaje de motor es un circuito para controlar motores usando uno o más puentes H, el cual - como se discutió en la lección de "Cerebros Robot" - es un tipo especial de circuito que le permite controlar la dirección del motor (y, típicamente, la velocidad también). Este escudo tiene cuatro puentes H separados que le permiten controlar cuatro motores DC diferentes, o dos motores paso a paso (o una combinación de ellos). El blindaje también está configurado para proporcionar una fuente de alimentación regulada (relativamente) de alta corriente a dos servomotores.

En este ejemplo estoy usando un escudo motor de Adafruit para simplemente controlar un solo motor en el canal 1. Para lograrlo, simplemente conecto un motor de corriente continua a los terminales etiquetados como M1 y conecto una fuente de alimentación externa (paquete de baterías) al bloque de terminales de potencia.

La ventaja de usar un blindaje es que se puede conectar una tarjeta de circuito externo sin cables sucios. Se adapta perfectamente a la placa Arduino, ahorrando espacio. También está explícitamente diseñado para trabajar con el Arduino, y a menudo tiene una biblioteca asociada con él.

Puesto que los escudos tienden a tener conexiones fijas al Arduino y una funcionalidad muy específica, a menudo tienen librerías asociadas con ellos. Una biblioteca es un conjunto de funciones que puede llamar en su código y que le ayuda a realizar tareas comunes de forma rápida y sencilla. Por ejemplo, en lugar de escribir un código Arduino complejo para interactuar con el hardware de esta pantalla del motor para encender el motor, simplemente puede instalar una biblioteca y usar la función "run" del motor.

Esta pantalla de motor en particular requiere que descargue y coloque la biblioteca Adafruit Motor Shield V2 en la carpeta de la biblioteca del software. Si no está seguro de cómo instalar una biblioteca, consulte la Clase Arduino para obtener instrucciones más completas.

Una vez instalado, reinicie el software Arduino y verá un boceto llamado "DCMotorTest" en Archivo > Ejemplos > Adafruit Motor Shield V2 Library. Abre y ejecuta este sketch para ver tu motor en acción.

Sin embargo, también hay ventajas y desventajas de usar el escudo. La desventaja es que podría atar más pines en el Arduino de lo que necesitas conectando funcionalidad no deseada en el escudo. Aunque no se planee utilizar todos los aspectos de los escudos, sin embargo, siempre está conectando esas partes del circuito con el Arduino. Por ejemplo, estamos controlando un solo motor de CC, pero hay dos pines conectados para controlar servomotores que no estamos usando. Esto es menos que ideal si queremos conectar varios otros módulos y componentes al Arduino. Rara vez se pueden apilar diferentes tipos de escudos sin que estos pernos interfieran.

Una forma sencilla de resolver este problema es utilizar módulos externos y conectar sólo los pines que necesites al Arduino.

Los módulos, como los escudos, son placas que se conectan a un Arduino y añaden una funcionalidad especial. La diferencia con los módulos es que no son específicos de Arduino. No necesitan enchufarse encima del Arduino, pero pueden conectarse a una serie de tarjetas de controladores diferentes utilizando un cable de conexión, o incluso a veces pueden funcionar como un dispositivo independiente (es decir, todos por sí mismos).

El sensor de movimiento IR y el sensor Ping que utilizamos en la lección de sensor anterior son ejemplos de una tarjeta de módulo. A medida que empiece a trabajar con la robótica, encontrará continuamente todo tipo de módulos diferentes. Al igual que con los escudos, hay un sinnúmero de ellos en el mundo que realizan más funciones de las que puedas imaginar.


Un tipo común de módulo que usted podría utilizar para la robótica es el módulo controlador de motor paso a paso DRV8833 ilustrado arriba. Esta placa es esencialmente sólo un controlador de motor con dos puentes H-bridges. Esto significa que puede controlar la velocidad y la dirección de dos motores de corriente continua, o la velocidad y la dirección de un solo motor paso a paso.

Para interconectarse con un motor bipolar paso a paso (dos bobinas), cada bobina debe conectarse a una de las salidas del módulo. Si usted no puede averiguar qué cable es cuál, puede encontrar las bobinas conectando y LED a la bobina del motor y girando el eje del motor con la mano. Si el LED se enciende, usted ha encontrado un par de cables de bobina. Si no es así, inténtelo de nuevo hasta que se encienda el LED. Una vez que haya encontrado la primera bobina, el otro par de cables debe ser la otra bobina por defecto.

El módulo regulador del servo controlador tiene pines de entrada, que se conectan al Arduino. Esto se debe a que la entrada de control del módulo recibe los impulsos de salida del Arduino. Los pines de salida del módulo se conectan al motor. Cada salida es un solo puente H y tiene dos pines. Las bobinas del servomotor se conectan a cada salida.

Dicho de otro modo, cada bobina de la escalera se conecta a un puente H separado. El módulo procesa los comandos del Arduino para activar los puentes H en la secuencia apropiada para mover el motor. Afortunadamente, no es necesario calcular la secuencia apropiada necesaria para alimentar las bobinas con las polaridades apropiadas. La biblioteca de pasos incorporada del Arduino resuelve esto para usted.

Para conectarlo, realice las siguientes conexiones de entrada:

Pin Arduino 4 > AIN1

Pin Arduino 5 > AIN 2
Pin Arduino 6 > BIN1
Pin Arduino 7 > BIN 2
Arduino +5v > SLP

En el lado de salida, usted desea conectar un par de cables de bobina escalonados a uno de los pares de pines de salida H-bridge. A continuación se conecta el otro par de cables del motor a la otra salida.

Finalmente, conecte la fuente de alimentación externa (paquete de baterías) en el bloque de terminales de alimentación externa, manteniendo un ojo en mantener la polaridad apropiada.

Para que funcione, basta con iniciar la librería, iniciar una instancia de un motor paso a paso en el código, y luego configurarlo para que coincida con nuestro motor. Puedes ver un ejemplo aquí:

    Incluya la biblioteca de pasos. 
    Esto viene por defecto con el software Arduino.
    
    #include <Stepper. h>
     
    200 es el número de "pasos" que toma el motor para hacer 
    Una revolución de 360 grados. Cambie este número para que coincida con su
    Motor paso a paso dividiendo el ángulo de paso en 360°.
    En este caso, 360/1.8 = 200 pasos
    
    Definir PASOS 200
    
    crear una instancia de la clase stepper llamada "stepper"
    Indique el número de pasos a seguir 
    el motor para hacer una revolución.
    y qué alfileres lo controlarán.
    
    Escalón de paso (STEPS, 4,5,6,7);
     
    nulo setup ()
    {
      Ajustar la velocidad del motor a 100 rpm
      stepper. setSpeed (100);
    }
     
    bucle vacío (){

      Seleccione una cantidad aleatoria de pasos para que el motor tome
      entre 0 y 500
      
      int randomsteps = aleatorio (500);
      
      Encender las bobinas del motor en sentido horario
      Sin embargo, para tomar muchos pasos seleccionados por randomsteps
      
      
      retardo (1000);

      Encender las bobinas del motor en sentido contrario a las agujas del reloj
      simplemente añadiendo un símbolo
      
      stepper. step (-randomsteps);
      retardo (1000);
      
    }

La ventaja de utilizar un módulo es que se puede elegir la funcionalidad que se desee de la tarjeta y sólo se está conectando el mínimo número de pines Arduino. Además, como no se sienta encima del Arduino, puede ser más pequeño y compacto. Este pequeño tamaño es beneficioso porque no sólo facilita el montaje dentro de recintos estrechos del proyecto, sino que también reduce los costes de fabricación. Los módulos tienden a ser más económicos que las pantallas protectoras.

Sin embargo, es posible que desee simplemente ir con un escudo porque es potencialmente más fácil de interfaz con y no terminará con un lío de cables.

Independientemente de si está utilizando un escudo o un módulo, cuanto más avanzado sea el robot, menos probable será que una sola placa haga todo lo que necesite. Tanto los escudos como los módulos están diseñados para resolver problemas comunes básicos. A medida que su robot empiece a evolucionar, usted encontrará problemas complejos específicos que exceden las habilidades de estas tablas.

Si no encuentra un escudo o módulo que haga lo que necesita, no se desespere. Usted siempre puede construir su propia tarjeta de circuito personalizado para satisfacer sus necesidades. Como se ha demostrado anteriormente, estas nuevas placas prototipo pueden incluso ser apiladas en la parte superior de los escudos Arduino existentes, si realmente quieres ir más allá, puedes dar un paso más allá diseñando tu propia placa de circuito personalizado y fabricándola. Esto no es algo que harías inmediatamente, pero se hará más atractivo cuanto más profundo te zambulles en la robótica.
¿Qué sigue?


¿Qué sigue?

Ahora que usted está armado con todo este conocimiento de la electrónica para robots, el siguiente paso es construir un robot. Le sugiero que empiece con el Robot de Telepresencia. Esta es una guía comprensiva que repasa la construcción de un robot y revisa muchos de los mismos conceptos cubiertos en esta clase.

Sin embargo, si ese robot no le parece bien, hay algunas sugerencias adicionales que se enumeran a continuación.

"Anterior
Hacer una pregunta

Dé a su pregunta un título lo más descriptivo posible para que otros puedan encontrarlo fácilmente. Máximo 70 caracteres.

?

Pregunta nº 1: Denos más detalles sobre su pregunta...

No se han encontrado resultados

Más preguntas

No se han encontrado resultados

Más preguntas

