instructables. com
Servo A-Go-Go!
23-30 minutos
Introducción: Servo A-Go-Go!

Un servo es básicamente un tipo especial de motorreductor. Lo que hace que un servo sea diferente de un motorreductor normal es que tiene una placa controladora incorporada y (normalmente) un potenciómetro de retroalimentación (como una perilla de volumen estéreo) para un posicionamiento preciso. Es muy fácil controlar un servo motor utilizando un microcontrolador como un Arduino. Normalmente no se necesita ningún otro circuito de control. Los servos son básicamente un motor muy fácil y fiable para trabajar con ellos.
Tipos de Servos

Los servos de pasatiempo tienden a venir en una amplia gama de tamaños. También tienen una variedad de otras opciones como su rotación general, cómo se construye su caja de cambios y cómo se comunican con los microcontroladores. Los siguientes son algunos tipos básicos de servos que puede encontrar.

Servos Estándar

Los servos estándar son bastante estándar en cuanto a servos van. De ahí el nombre, servo estándar. El nombre estándar se aplica en gran medida al tamaño del motor (aproximadamente 1,5" x 1,5" x 1,75"). Más allá de eso, no suele haber nada estándar en el servo estándar.

Hay incontables tipos diferentes de servos estándar que usted puede encontrar. Se fabrican con reductores de plástico o metálicos, que a su vez están diseñados para la operación de alta velocidad o torsión. La mayoría tienen una rotación de 90 grados (90 grados en ambas direcciones - 180 en total), pero algunos tienen una rotación de 180 grados (180 grados en ambas direcciones - 360 en total), o son de rotación continua y pueden girar libremente. Algunos incluso tienen tarjetas de control digital, a diferencia de los servos con tarjetas analógicas como las que estamos usando. Incluso puede encontrar algunos que no cumplen con ninguna de estas descripciones. Hay muchos servos "estándar" en el mundo.

Nano Servos

Los nano servos son pequeños - aproximadamente del tamaño de una moneda muy pequeña. Éstos se utilizan cuando las limitaciones de tamaño son un problema. Son buenos para manipular los mecanismos existentes (es decir, pulsar un botón) o construir robots muy - muy - pequeños. Se fabrican en gran parte para hacer cosas como aletas de control en aviones RC.

Micro Servos

Estos son como nano servos, pero un poco más grandes y poderosos. Tienen la mayoría de los mismos casos de uso y funcionalidad de nano servos. Son buenos para construir cosas pequeñas en lugar de cosas pequeñas. También se fabrican típicamente para su uso en aviones RC.

1/4 Escala

Si juzgas por el nombre podrías inferir que un servo de escala 1/4 es muy pequeño. Sin embargo, estarías equivocado. Estos servos están pensados para ser usados con modelos de coches que tienen un cuarto del tamaño de la cosa real. Por lo tanto, son relativamente grandes y típicamente son bastante poderosos. Cuando necesites algo pesado, este debe ser tu camino.

Su tamaño y potencia los hacen ideales para motores de accionamiento. Desafortunadamente, estos servos raramente vienen pre-fabricados para la rotación continua. Sin embargo, es posible modificar un servo estándar para que sea un servo de rotación continua y varios minoristas lo harán por usted por un cargo extra.

Construcción de reductores

Como se mencionó anteriormente, no todos los servos son creados por igual. Cada servo funciona de forma diferente según el tipo de motor utilizado, la configuración del engranaje y si los engranajes son de plástico o de metal.

Los servos con engranajes de metal tienden a ser construidos para proporcionar más torque que los servos con engranajes de plástico. La razón de esto es que los engranajes de plástico se rompen bajo cargas pesadas y los engranajes de metal tienden a ser mucho más fuertes. De este modo, los servos de engranajes metálicos son capaces de soportar las cargas más pesadas y las mayores fuerzas.

Para aquellos que aún están confundidos, el par motor es básicamente la cantidad de fuerza que un eje giratorio puede proporcionar. Lo que esto significa es que algo con más par de torsión es menos probable que se detenga (o deje de rotar y/o aplique presión) que algo con menos par de torsión. Si necesitas levantar algo, o presionar sobre algo, mientras más par de torsión tu servo pueda proporcionar, mejor.

Las mediciones de par de torsión que usted puede encontrar típicamente son en onzas-pulgadas (oz-in), kilogramo-cmetro (kg-cm) o medidor de Newton (N-m). Entender esto es un asunto complicado. Para simplificar, lo más grande es típicamente mejor para la mayoría de las aplicaciones. Usted debe acostumbrarse a trabajar en oz-in o kg-cm, y luego utilizar los convertidores de medición en línea para traducir todas las mediciones al valor con el que se sienta más cómodo.

Servos Estándar

Cuando se utiliza un servo estándar, se puede enviar a una posición muy específica a lo largo de su ángulo de rotación. En otras palabras, si está usando un servo capaz de rotar 180 grados, puede decirle que vaya a cualquier grado (por ejemplo, digamos - 112 grados), y se moverá allí desde su posición actual.

La razón es saber en qué posición se encuentra porque hay un potenciómetro (o resistencia variable) incorporado en la caja de cambios. Ese componente es básicamente el botón giratorio que se ve flotando sobre la parte superior de la tarjeta de circuito. La forma en que esto funciona es que cuando los engranajes rotan, también giran la perilla que cambia la cantidad de resistencia en el circuito. El panel de control es capaz de detectar este cambio en la resistencia y determinar con precisión la posición del eje del motor en grados.

Dado que un potenciómetro sólo se puede girar hasta ahora, estos motores no pueden girar más allá de su ángulo máximo. Además, si usted mira de cerca a la rueda dentada más grande en el lado derecho de la caja de engranajes, notará una pequeña lengüeta plástica que sobresale de la superficie. Se trata de un tope físico que impide que el servo se extienda más allá de su ángulo de rotación máximo. Los servos estándar están físicamente restringidos para hacer una rotación completa de dos maneras.

Aunque obviamente no se puede utilizar este tipo de servo para conducir el robot, es muy útil para un gran número de aplicaciones. Digamos que estás construyendo un brazo robot, por ejemplo. Puede utilizar un servo para controlar cada articulación. De este modo, puede decirle a cada articulación que se mueva a una posición muy precisa, lo que le permite realizar tareas muy complejas. También puede utilizarlos para hacer cosas como construir arañas robot con múltiples patas andantes, presionar sobre otras cosas como una boquilla rociadora o hacer muñecas espeluznantes animatrónicas.

Servos de Rotación Continua

Los servos de rotación continua no tienen capacidad de posicionamiento y pueden hacer una rotación completa. Si usted mira de cerca el engranaje grande a la derecha notará que no hay una parada física dura que restrinja su capacidad de girar.

En lugar de ajustar la posición, los servos continuos le permiten ajustar la dirección y velocidad del motor. Esto le permite hacer cosas como especificar que va rápido en el sentido de las agujas del reloj, hacer una pausa por un momento, y luego reanudar muy lentamente en el sentido contrario a las agujas del reloj. Estos servos tienen básicamente un H-bridge incorporado que usted puede controlar usando un microcontrolador.

Son muy útiles como ruedas motrices de robots, o en sistemas mecánicos que requieren un motor con rotación continua (como el mecanismo de pincel en el bot esponja). Sin embargo, no espere que se les dé mucha velocidad. Aunque los servos son conocidos por su fácil control y par de torsión decente, no son conocidos por su velocidad. Esto se debe a que las cajas de cambios diseñadas para proporcionar par lo hacen a expensas de la velocidad total del motor.

A lo largo de esta clase sólo utilizaremos servos como motores de accionamiento porque nada de lo que estamos construyendo está pensado para ir notablemente rápido. Sin embargo, a medida que se profundiza en la robótica y comienza a sentir una necesidad de velocidad, es posible que desee investigar los motores de engranajes y controladores de motor de corriente continua. Esto puede sonar abrumador, pero recuerde que un servo de rotación continua es básicamente un motor de corriente continua con el controlador del motor incorporado.

Activación de un Servo

Un servo tiene 3 cables saliendo de él.

Señal: Conectado a un pin de control digital de 5V desde un microcontrolador.
Alimentación: Puede conectarse a una tensión positiva desde 4,5V hasta 6V.
Tierra: Conectado a tierra común - siempre.

Usted puede ser tentado a simplemente conectar el cable de alimentación del servo al pin de 5V en el microcontrolador Arduino. DON'T!

Conectar el servo al pin de 5V es una mala idea porque:

1) El pin de 5V del Arduino sólo puede proporcionar una cantidad limitada de corriente. Por lo tanto, es probable que usted esté subalimentando el motor.
2) El pin de 5V no tiene mucho en el camino de un circuito de protección. Esto significa que si un voltaje superior a 5V aparece en el pin, se puede dañar la placa Arduino. Los motores (como los servos) son particularmente conocidos por producir corriente inversa (es decir, corrientes eléctricas inesperadas), y usted podría enviar más de 5V de vuelta a la placa.
3) Además, si extrae demasiada corriente de la placa Arduino, su código simplemente podría hacer cosas graciosas y no funcionar correctamente. Es simplemente la mejor práctica para alimentar a los cerdos actuales (como motores) por separado.

La solución más sencilla es dotar al motor de su propia fuente de alimentación. Esto se puede hacer más fácilmente conectando una batería de 6V al servo. Bueno, casi se puede hacer tan fácilmente. Está la cuestión del terreno. El cable de tierra del paquete de baterías necesita ser compartido con el cable de tierra del Arduino. Esto puede sonar complicado, pero es realmente simple. Dolorosamente simple de hecho.


Siempre que se construya un circuito con múltiples fuentes de voltaje DC, o cuando se conecten juntas diferentes tarjetas de circuito, sus cables de tierra deben estar conectados.

De la misma manera que es importante tener un terreno común entre todos los participantes en una conversación, es importante tener un terreno común cuando se trabaja con la electrónica. Tener una conexión a tierra compartida pone todos los voltajes en la misma página, y les permite comunicarse.

Hablando de comunicación, conecte el cable de señal al Pin 9 Digital del Arduino.


Controlando un Servo Estándar

Sube el siguiente código al Arduino para hacer que el Servo se mueva adelante y atrás:

/*
 
 Servo Back y código Forth
 
 Envía el servo sonotrodo de ida y vuelta de 0 grados a 180 grados
 
*/

Incluir la biblioteca Servo
Esto es necesario para enviar los comandos servo-específicos de Arduino
#Incluye <Servo. h>

Deja saber al Arduino que hay un servo estándar conectado.
Servo StandardServo1; 

Crear una variable para almacenar la posición del servo
servoPosición int = 0;


nulo setup () {

  Dile al Arduino que el servo estándar está conectado al pin 9
  StandardServo1. attach (9);  

}

bucle vacío () {

  Esto es un "para bucle". El código contenido entre paréntesis se repite una y otra vez
  hasta que el valor de servoPosición sea superior a 180 grados.
  Básicamente, incrementa la servoPosición variable en 1 de 0 a 180 grados.
  para (servoPosición = 0; servoPosición <= 180; servoPosición += 1){

    Mueve el servo al valor de la variable servoPosición
    En otras palabras, a medida que la variable aumenta en 1, la posición del servo aumenta en 1 
    StandardServo1. write (servoPosition);             

    Esperar un poquito para que el servo se mueva en su lugar
    retraso (15);                       
  }

  Hace lo mismo que el último' para bucle', pero en la dirección opuesta.
  Esto disminuye el valor de servoPosición de 180 grados a 0.
  para (servoPosition = 180; servoPosition >= 0; servoPosition -= 1) {) {) 
    StandardServo1. write (servoPosition); 
    retraso (15); 
  }
  
}

Controlando un Servo Continuo

Cargue el siguiente código para hacer que el motor gire en sentido horario:

/*
 
 Girar un servo continuo en sentido horario
  
*/

Incluir la biblioteca Servo
Esto es necesario para enviar los comandos servo-específicos de Arduino
#Incluye <Servo. h>

Deje saber al Arduino que hay un servo continuo conectado.
Servo ContinuousServo1; 

nulo setup () {

  Dile al Arduino que el servo continuo está conectado al pin 9
  ContinuousServo1. adjuntar (9);  
  
  Arrancar el servo continuo en posición neutral
  Esta posición suele situarse en torno a los 90º.
  Puede cambiar este valor ligeramente hasta que el servo deje de girar.
  No es necesario iniciar la pausa. Sólo quería hablar de esto.
  ContinuousServo1. write (94);

  Espera un segundo por el infierno.
  retardo (1000);

}

bucle vacío () {

   Cualquier número que escriba en el servo por encima del valor de la posición neutra el servo en sentido horario.
   Cuanto más alto sea el número, más rápido gira teoréticamente.
   
   ContinuousServo1. write (110);
  
}

Para hacer que el motor gire en sentido contrario a las agujas del reloj, cargue este código:

/*
 
 Girar un servo continuo en sentido contrario a las agujas del reloj
  
*/

Incluir la biblioteca Servo
Esto es necesario para enviar los comandos servo-específicos de Arduino
#Incluye <Servo. h>

Deje saber al Arduino que hay un servo continuo conectado.
Servo ContinuousServo1; 

nulo setup () {

  Dile al Arduino que el servo continuo está conectado al pin 9
  ContinuousServo1. adjuntar (9);  
  
  Arrancar el servo continuo en posición neutral
  Esta posición suele situarse en torno a los 90º.
  Puede cambiar este valor ligeramente hasta que el servo deje de girar.
  No es necesario iniciar la pausa. Sólo quería hablar de esto.
  ContinuousServo1. write (94);

  Espera un segundo por el infierno.
  retardo (1000);

}

bucle vacío () {

   Cualquier número que escriba en el servo por debajo del valor de la posición neutra el servo en sentido contrario a las agujas del reloj.
   Cuanto menor sea el número, más rápido gira teoréticamente.
   
   ContinuousServo1. write (70);
  
}



"Anterior Siguiente"
Hacer una pregunta

Dé a su pregunta un título lo más descriptivo posible para que otros puedan encontrarlo fácilmente. Máximo 70 caracteres.

?

Pregunta nº 1: Denos más detalles sobre su pregunta...

No se han encontrado resultados

    Solía ir a las clases de automatización en el centro de arte y tecnología de mi pueblo, y allí estábamos conectando servos directamente en arduinos +5v pin. Mis preguntas son; ¿es posible hacerlo con diferentes tipos de servos

    P. s. Estábamos usando los servos de TowerPro sg90
    Tenemos una buena política. Por favor, sea positivo y constructivo con sus compañeros estudiantes.

        En teoría, puedes hacerlo, pero muchos tipos de servos sacarán demasiado poder del Arduino y causarán que tu programa funcione mal de maneras extrañas. Es mejor practicar conectarlos a una fuente de alimentación externa.
        Tenemos una buena política. Por favor, sea positivo y constructivo con sus compañeros estudiantes.

    Me pregunto la diferencia entre el bucle "for" que tienes aquí y el bucle "for" en la página arduino info. Utilizas "ServoPosition += 1" para contar el interger, mientras que los tutoriales dicen "ServoPosition ++". ¿Existe alguna diferencia entre los dos, o el uso de ++ haría lo mismo?
    Tenemos una buena política. Por favor, sea positivo y constructivo con sus compañeros estudiantes.
    


Básicamente hacen lo mismo. A menudo hay muchas maneras de codificar lo mismo con Arduino.

        https://www.arduino.cc/en/Reference/Increment DIFUNDE LA PALABRA-

        https://www.arduino.cc/en/Reference/IncrementCompo... DIFUNDE LA PALABRA-
        Tenemos una buena política. Por favor, sea positivo y constructivo con sus compañeros estudiantes.

    No puedo descargar el ejemplo de servo código - sólo veo cajas grises con una línea de profundidad - no aparece ningún enlace cuando los sobrevuelo...
    Tenemos una buena política. Por favor, sea positivo y constructivo con sus compañeros estudiantes.

        Todavía puedo verlos. Eso suena como un error de caché del navegador. Usted puede intentar borrar todas las cookies / datos almacenados en caché relacionados con nuestro sitio web desde su navegador y ver si esto persiste.
        Tenemos una buena política. Por favor, sea positivo y constructivo con sus compañeros estudiantes.

    ¿Qué pasó con el tutorial del robot de telepresencia?
    Tenemos una buena política. Por favor, sea positivo y constructivo con sus compañeros estudiantes.

        www.instructables.com/id/Telepresence-Robot-2/ DIFUNDE LA PALABRA-
        Tenemos una buena política. Por favor, sea positivo y constructivo con sus compañeros estudiantes.

    Estoy seguro de que escribí algo mal. Es curioso, cuando conecté el servo por primera vez, estaba girando antes de que escribiera y enviara el programa. Escribí lo siguiente según entendí sus instrucciones. Por favor, ayúdenme.

    #Incluye <Servo. h>

    Servo ContinuousServo1;

    nulo setup () {

    Ponga su código de configuración aquí, para ejecutarlo una vez:

    ContinuousServo1. adjunto (9);

    ContinuousServo1. write (94);

    }

    bucle vacío () {

    Pon tu código principal aquí, para que se ejecute repetidamente:

    ContinuousServo1. write (70);

    }

    estado de salida 1

    no hay función de correspondencia para la llamada a "Servo:: adjunto (int)".
    Tenemos una buena política. Por favor, sea positivo y constructivo con sus compañeros estudiantes.

        Debería serlo:

        ContinuousServo1. adjuntar (9);

        No:

        ContinuousServo1. adjunto (9);
        Tenemos una buena política. Por favor, sea positivo y constructivo con sus compañeros estudiantes.

    Primero tengo que decir que este es el curso más divertido que he hecho en línea. He tomado muchos cursos en Udemy, coursera, etc. etc. pero esto es mucho mejor.

    Sólo una pequeña nota de que el código arduino está en blanco cuando se ve en el móvil.
    Tenemos una buena política. Por favor, sea positivo y constructivo con sus compañeros estudiantes.

    Hoked para arriba cada cosa como usted dijo a, pero el servo no da vuelta, insteady es hacer un sonido del tecleo mientras que él intentaba mover i soldar i 9v totalmente nuevo en pararel para dar más amplificador? (no recuerdo el nombre) pero todavía no consigo nada.
    se mueve si doy un empujón para arrancar, y voy hasta 180, regresa y se detiene
    intentó deshacerse de los retrasos, pero nada

    torque 11kg?cm?6V?servo?
    Tenemos una buena política. Por favor, sea positivo y constructivo con sus compañeros estudiantes.

        En primer lugar, 9V es demasiada potencia para el servo. Espero que no lo hayas dañado. Nunca use más de 6V (4 x AA pilas).

        En segundo lugar, ¿qué servo ejemplo estás tratando de hacer funcionar? ¿Está utilizando un servo estándar o continuo?

        Tenemos una buena política. Por favor, sea positivo y constructivo con sus compañeros estudiantes.

        Oh, no sabía nada de eso,

        i usando un servo estándar con el código estándar, intenté usar barrido de libre pero aún así dosnt trabajo

        180 rotación
        Tenemos una buena política. Por favor, sea positivo y constructivo con sus compañeros estudiantes.

        Es difícil para mí depurarla con la información que me has dado hasta ahora. ¿Tendría tal vez un segundo servo que probar? Tal vez el primer servo está roto.

        ¿Puede girar el servo-trompeta a mano? ¿Alguno de los engranajes parece estar afilando?
        Tenemos una buena política. Por favor, sea positivo y constructivo con sus compañeros estudiantes.

    Para el primer servo programa, en lugar de girar sólo 180 grados, gira cuatro veces en el sentido de las agujas del reloj y cuatro veces y media en el sentido contrario a las agujas del reloj. ¿Por qué crees que esto está pasando?
    Tenemos una buena política. Por favor, sea positivo y constructivo con sus compañeros estudiantes.

        ¿Qué tipo de servo tienes? ¿Quizás esté usando un servo de rotación continua en lugar de un servo estándar?
        Tenemos una buena política. Por favor, sea positivo y constructivo con sus compañeros estudiantes.

        exactamente el problema.
        Tenemos una buena política. Por favor, sea positivo y constructivo con sus compañeros estudiantes.

    ¿POR QUÉ USAR UN SERVO NUEVO EN VEZ DE VOLVER A SOLDARLO?
    Tenemos una buena política. Por favor, sea positivo y constructivo con sus compañeros estudiantes.

        Puedes hacerlo si quieres. Algunas personas no quieren desarmar sus bots.
        Tenemos una buena política. Por favor, sea positivo y constructivo con sus compañeros estudiantes.

   Estoy viendo todos los proyectos desde que estoy planeando esto para un grupo de niños. El bot de un solo motor requiere que el servo sea desoldado. Ahora bien, en este proyecto, ¿podemos usar el mismo servo que tuvimos o podemos obtener un servo completamente nuevo? Puedo saltarme ese proyecto para que lo hagamos para no destruir el servo. Estoy un poco confundido.
    Tenemos una buena política. Por favor, sea positivo y constructivo con sus compañeros estudiantes.

        Deberías usar un servo nuevo.

        Estoy usando servos porque son de aproximadamente un tamaño y potencia estándar, y tienen agujeros de montaje tanto en el cuerpo del motor como en el eje de rotación.

        Mientras que usted puede conseguir un motorreductor equivalente para potencialmente un poco más barato, usted entonces tiene el problema de sujetar el motor a lo que usted está construyendo, y sujetando cosas firmemente al eje del motor. Los motoresreductores también son ampliamente divergentes en velocidad y potencia, lo que no es bueno para cuando la gente está tratando de obtenerlos.

        Aunque requiere un poco más de trabajo y cuesta un poco más, decidí que usar servos modificados era la forma de llevar a cabo los 3 primeros proyectos. Puedes reutilizar el mismo servo modificado para los 3 primeros proyectos si no te importa desmontar los robots después de terminarlos.

        Tenemos una buena política. Por favor, sea positivo y constructivo con sus compañeros estudiantes.

Más preguntas

No se han encontrado resultados

Más preguntas
