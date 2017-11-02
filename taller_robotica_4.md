instructables. com
Cerebros Robot
27-34 minutos
Introducción: Cerebro de robot

Para tomar decisiones, un robot utiliza una computadora o un microcontrolador. Para aquellos que no están familiarizados, un microcontrolador es básicamente un componente electrónico que puede hacer tres cosas. Puede interpretar entradas del mundo físico, procesar esta información y controlar dispositivos de salida en el mundo físico. En un sentido básico, un microcontrolador puede leer sensores, tomar decisiones y controlar luces, altavoces y motores.

Al ser capaz de percibir y responder al mundo, puede crear un bucle de retroalimentación entre la salida y la entrada. En otras palabras, puede crear robots y dispositivos que sean verdaderamente interactivos. Otra forma de pensar sobre esto es que los robots pueden prestar atención a lo que está sucediendo a su alrededor, tomar decisiones usando el Arduino, y luego responder de manera significativa. De esta manera, se comportan un poco como la mayoría de las criaturas sensibles.

El Arduino

El Arduino es un tipo de microcontrolador muy común. Lo que diferencia a Arduino de otros microcontroladores es que es fácil de usar, está bien documentado y tiene una vasta comunidad en línea de usuarios. Esto significa que no importa lo que puede salir mal, es probable que pueda encontrar una solución documentada en línea o alguien dispuesto a ayudarle. Esto es extremadamente beneficioso cuando se empieza.

Hay un número de diferentes tipos de Arduinos, pero para esta clase usaremos un Arduino Uno. Esta es actualmente la versión más ubicua de los microcontroladores Arduino. Para cuando esta lección termine, usted tendrá una breve comprensión de cómo usar la pizarra, pero de ninguna manera será un experto.

Mientras que el Arduino tiene muchas características, hay algunas que debes tener en cuenta. Existe un puerto USB que se utiliza para la programación. Hay un enchufe de corriente que se usa para alimentar el Arduino cuando no está conectado a su computadora. También hay dos filas de hembras a lo largo del borde de la tabla. Cada uno de estos pequeños orificios conecta con algo diferente en el tablero, y realiza una función diferente. Todos ellos deben ser etiquetados bastante bien para indicar lo que son.

Si te confundes, puedes encontrar una visión general mucho más profunda consultando la Clase Arduino.

Conéctalo.

Para encender la tarjeta, simplemente conéctela al ordenador con un cable USB-A a USB-B. Este es básicamente un cable USB estándar que algo así como una impresora de ordenador utilizaría.
Programación del Arduino

Para programar el Arduino utilizaremos el Arduino IDE (entorno de desarrollo integrado). La versión más actual del software puede ser descargada gratuitamente desde el sitio Arduino o utilizada directamente en Internet (pronto).
Nota sobre la programación

Lo más importante que hay que saber sobre programación es fingir hasta que se hace. Básicamente, no necesitas saber cómo programar para trabajar con código. Hay una tonelada de código de ejemplo ya existe. Sólo necesitas entender su estructura básica. Una vez que usted consiguió esto, es apenas una cuestión de encontrar y de ajustar el código que existe ya. Si usted se aferra a este enfoque, mantenga una mente abierta y un espíritu intrépido, eventualmente aprenderá a programar para que sea real.

Sin embargo, no es del todo una libertad para todos. Hay algunas cosas que necesitas entender. Por favor, ten paciencia conmigo mientras te dejo caer algunos conocimientos básicos de codificación. BAM!

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

//##############################
FUNCIONES ADICIONALES ####
//#################################################################instructables. com
Cerebros Robot
27-34 minutos
Introducción: Cerebro de robot

Para tomar decisiones, un robot utiliza una computadora o un microcontrolador. Para aquellos que no están familiarizados, un microcontrolador es básicamente un componente electrónico que puede hacer tres cosas. Puede interpretar entradas del mundo físico, procesar esta información y controlar dispositivos de salida en el mundo físico. En un sentido básico, un microcontrolador puede leer sensores, tomar decisiones y controlar luces, altavoces y motores.

Al ser capaz de percibir y responder al mundo, puede crear un bucle de retroalimentación entre la salida y la entrada. En otras palabras, puede crear robots y dispositivos que sean verdaderamente interactivos. Otra forma de pensar sobre esto es que los robots pueden prestar atención a lo que está sucediendo a su alrededor, tomar decisiones usando el Arduino, y luego responder de manera significativa. De esta manera, se comportan un poco como la mayoría de las criaturas sensibles.

El Arduino

El Arduino es un tipo de microcontrolador muy común. Lo que diferencia a Arduino de otros microcontroladores es que es fácil de usar, está bien documentado y tiene una vasta comunidad en línea de usuarios. Esto significa que no importa lo que puede salir mal, es probable que pueda encontrar una solución documentada en línea o alguien dispuesto a ayudarle. Esto es extremadamente beneficioso cuando se empieza.

Hay un número de diferentes tipos de Arduinos, pero para esta clase usaremos un Arduino Uno. Esta es actualmente la versión más ubicua de los microcontroladores Arduino. Para cuando esta lección termine, usted tendrá una breve comprensión de cómo usar la pizarra, pero de ninguna manera será un experto.

Mientras que el Arduino tiene muchas características, hay algunas que debes tener en cuenta. Existe un puerto USB que se utiliza para la programación. Hay un enchufe de corriente que se usa para alimentar el Arduino cuando no está conectado a su computadora. También hay dos filas de hembras a lo largo del borde de la tabla. Cada uno de estos pequeños orificios conecta con algo diferente en el tablero, y realiza una función diferente. Todos ellos deben ser etiquetados bastante bien para indicar lo que son.

Si te confundes, puedes encontrar una visión general mucho más profunda consultando la Clase Arduino.

Conéctalo.


Para encender la tarjeta, simplemente conéctela al ordenador con un cable USB-A a USB-B. Este es básicamente un cable USB estándar que algo así como una impresora de ordenador utilizaría.
Programación del Arduino

Para programar el Arduino utilizaremos el Arduino IDE (entorno de desarrollo integrado). La versión más actual del software puede ser descargada gratuitamente desde el sitio Arduino o utilizada directamente en Internet (pronto).
Nota sobre la programación

Lo más importante que hay que saber sobre programación es fingir hasta que se hace. Básicamente, no necesitas saber cómo programar para trabajar con código. Hay una tonelada de código de ejemplo ya existe. Sólo necesitas entender su estructura básica. Una vez que usted consiguió esto, es apenas una cuestión de encontrar y de ajustar el código que existe ya. Si usted se aferra a este enfoque, mantenga una mente abierta y un espíritu intrépido, eventualmente aprenderá a programar para que sea real.

Sin embargo, no es del todo una libertad para todos. Hay algunas cosas que necesitas entender. Por favor, ten paciencia conmigo mientras te dejo caer algunos conocimientos básicos de codificación. BAM!

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
  El Arduino pasará por lo que sea que esté aquí indefina

Si usted escribe sus propias funciones personalizadas, éstas se colocarían aquí debajo del bucle principal.
Puede llamar estas funciones desde el lazo de configuración o desde el lazo principal.
Son útiles si necesita hacer un conjunto particular de cosas con frecuencia
En lugar de escribirlo una y otra vez, puedes simplemente llamar la función

anular su función personalizada (){
  
  Aquí es donde escribes tu función personalizada
  
  Puede ser una rutina particular como la configuración de motores
  para avanzar, retroceder, derecha o izquierda.
  
  O puede ser una rutina para revisar un sensor.

}

//####################
# ESO ES TODO #
//####################

No te preocupes. Todo esto es súper confuso al principio.
Esto tendrá más sentido a medida que lo hagas.

El compilador normalmente lee de izquierda a derecha de una línea a otra. Bueno, en su mayor parte. Hay algunas diferencias clave de la manera en que una persona normal es crucial para entender.

Una buena manera de pensar en un programa de ordenador es un poco como elegir su propia historia de aventura. El compilador lee la historia como cualquier otro, pero cuando el compilador lee una función, en lugar de leer la siguiente línea, salta a donde vive esa función y la lee línea por línea. Cuando se hace la lectura de la función, vuelve a la siguiente línea del código desde donde se dejó. Además, las funciones pueden tener otras funciones anidadas dentro de ellas. Por lo tanto, una función, puede llevar a otra función, a otra función más, antes de volver a la rutina principal.

Si eso en sí mismo no era confuso, el programa todo lee abajo de la página - a un punto! Y esto es importante recordar... Cuando el compilador llega al bucle principal (), lo que está contenido dentro de este bucle se repite una y otra vez hasta que el Arduino se queda sin energía. El bucle principal () es el lugar repetitivo sin fin donde debe vivir la carne del código. Cualquier cosa que estés tratando de lograr debe existir en el bucle principal ().

Todo esto es muy confuso y extraño para usted. Eso está bien. Aprender el lenguaje de programación Arduino es un poco como aprender cualquier idioma. Lleva tiempo acostumbrarse a ello, e incluso entonces toma mucho tiempo para ser verdaderamente fluido.

Para aprender más sobre programación, un buen punto de partida es Codecadamia.

Ejecutar un programa

Ejecutar un programa en el Arduino es muy sencillo.

Para empezar, necesita especificar el tipo de tarjeta que está usando. Eso es fácil, selecciona la opción "Arduino/Genuino Uno".

También se indica el puerto donde se encuentra el Arduino. Eso es un poco más difícil, pero no demasiado difícil. Sólo tienes que seleccionar la opción que aparece como "/dev/cu. usbmodem[números aleatorios]".

Abra el ejemplo de pestañeo en el Ejemplo 01. Menú Básico. A continuación, busque el botón de carga (esto parece una flecha que apunta a la derecha) y oprima. Si todo está configurado correctamente, el LED de la placa Arduino debe parpadear constantemente.


Intente cambiar el valor numérico dentro de las funciones de retardo y vuelva a cargar el código. Note que cambia la velocidad a la que parpadea.

Ahora que esto se ha caído, intentemos parpadear un LED externo no soldado directamente a la placa Arduino.

Todo Acerca de las Paneras

Cuando necesites crear un prototipo de un circuito que se conecte al Arduino, debes usar un tablero de control.

Los tableros de empanadillas están pensados para hacer conexiones rápidas y no permanentes entre los componentes electrónicos. Están recubiertos de pequeños orificios que se conectan en filas. El tablero está dividido en cuatro secciones. Hay dos secciones interiores llenas de filas horizontales cortas, y dos exteriores con filas verticales más largas.

Las secciones interiores son típicamente usadas para conectar componentes, y las secciones exteriores son típicamente usadas como líneas de bus de potencia. En otras palabras, puede conectar una batería a una de las líneas exteriores y luego alimentar los componentes de la sección interior conectando un cable a esta sección.


En el gráfico de arriba se puede tener una idea visual de cómo las filas en los tableros de anuncios están conectadas eléctricamente. Las dos secciones interiores tienen filas horizontales cortas repetidas en la placa. Las dos secciones exteriores tienen dos largas filas verticales. Éstos están marcados en rojo y azul y significan una fila para la energía (rojo) y una fila para el suelo (azul). No todas las pizarras están marcadas con líneas como ésta, pero todas están dispuestas de la misma manera.

Para más información sobre la tabla de panadería, consulta este tutorial.

Una rápida nota sobre los LEDs

Aunque la gente piensa de LEDs como bombillas pequeñas, son realmente absolutamente diferentes. Los LEDs son un tipo de componente electrónico llamado diodo. De hecho, LED es una abreviatura de diodo emisor de luz.

Hay mucho que decir sobre su estado único como un diodo, pero para nuestros propósitos lo único que usted necesita saber es que los diodos sólo permiten que la electricidad fluya en una dirección. Son lo que usted llamaría' polarizados'. Hay una pata que siempre debe estar conectada a la red eléctrica y otra que debe estar conectada a tierra. Si los conectas al revés, la energía no fluirá.

La pata que está conectada a la alimentación se llama ánodo. La pata que está conectada a tierra se llama cátodo. Hay tres maneras de distinguir el ánodo de un LED de su cátodo.

1) La pata conectada al ánodo es típicamente más larga que la que está conectada al cátodo.

2) El cuerpo del LED tiene típicamente un punto plano en el lado del cátodo.
3) Si mira dentro del LED, la pequeña broca metálica conectada al conductor del ánodo es mucho más pequeña que el cátodo.

Resistencias

Los resistores básicamente añaden resistencia a un circuito. Hay muchas razones para hacer esto, pero no tengo todo el día para explicarlo.

Básicamente, necesitamos una resistencia en el circuito que estamos a punto de construir porque un LED no ofrece ninguna resistencia. Si conectamos la alimentación a través de un LED sin ninguna resistencia, entonces es básicamente lo mismo que crear un cortocircuito conectando la fuente de alimentación a tierra. Añadimos una resistencia en serie al LED para consumir parte de la potencia y evitar un cortocircuito. Si quieres saber más, puedes aprender más sobre resistencias y resistencias en el tutorial de Electrónica Básica.

Lo único que necesitamos saber sobre las resistencias en esta coyuntura es que, aunque son aproximadamente iguales, todos tienen valores diferentes. Usted puede saber cuánta resistencia ofrece cada uno leyendo los códigos de resistencia marcados en ellos. Los códigos de resistencia se leen de izquierda a derecha hacia la banda de oro (o plata).

Para empezar, la manera más fácil de interpretar los códigos es usar una calculadora gráfica de resistencias en línea. Una vez que lo uses lo suficiente, empezarás a aprender a interpretarlos por tu cuenta sin la calculadora.

Breadboard un Circuito

Inserte un LED en un tablero de anuncios. Conecte una resistencia de 150 ohmios en serie con el cátodo del LED.

Conecte el extremo opuesto de la resistencia (el lado no conectado al LED) a tierra en el Arduino utilizando un cable de núcleo sólido negro.

Conecte el ánodo del LED a la clavija digital 7 en el Arduino utilizando un cable de núcleo sólido rojo.

Parpadea un LED externo

Puede parpadear un LED externo abriendo el código de ejemplo del parpadeo y cambiando este código y reemplazando todo el número 13 por el número 7 cada vez que aparezca. Haciendo esto, usted está simplemente cambiando el pin digital que está siendo pulsado de 13 a 7 para que coincida con el circuito que construyó en su placa de control.
Desvanecer un LED

Aparte de parpadear un LED, también podemos hacer un fundido. Para ello necesitamos utilizar un pin PWM. Los pines PWM son pines digitales especiales en el Arduino que permiten una salida análoga que simula una tensión de salida entre 0 y 5V. Todos están etiquetados con un ~ delante del número de pin.

PWM significa modulación de ancho de pulso. En pocas palabras, PWM está activando y desactivando un pin tan rápido que da la apariencia de atenuar el LED.

Un LED de atenuación que se ilumina a 1/4 de luminosidad significa que la señal que se le envía está desconectada mucho más de lo que está conectada. Por ejemplo, se apaga el 75% de las veces y se enciende el 25% del tiempo. Un LED más brillante a 3/4 de brillo está recibiendo una señal PWM que es lo opuesto. Así que estaría en el 75% del tiempo y un 25% de descuento. La cosa es, que está sucediendo tan rápido, que no ves que se está encendiendo y apagando, pero sólo experimentas el LED como si estuviera ligeramente oscuro.

De todos modos, si desea desvanecer el LED, en el menú de ejemplos seleccione:


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

"Anterior Siguiente"
Hacer una pregunta

Dé a su pregunta un título lo más descriptivo posible para que otros puedan encontrarlo fácilmente. Máximo 70 caracteres.

?

Pregunta nº 1: Denos más detalles sobre su pregunta...

No se han encontrado resultados

    la única opción en la selección de puertos que tengo es coms6 No tengo opción de dav.
    Tenemos una buena política. Por favor, sea positivo y constructivo con sus compañeros estudiantes.

        Eso suena más o menos bien si está usando un PC. Seleccione esa opción.

        Puede obtener más información al respecto aquí:

        https://www.instructables.com/lesson/Tools-and-Mat... DIFUNDE LA PALABRA-

        Tenemos una buena política. Por favor, sea positivo y constructivo con sus compañeros estudiantes.

    Seguí una lección en YouTube de Paul McWhorter y logré escribir lo siguiente

    int LEDPin=9;

    int waitTimeOn=50;

    int waitTimeOff=350;

    instalación anulada () {

    pinMode (LEDPin, OUTPUT);

    }

    bucle vacío () {

    digitalWrite (LEDPin, HIGH);

    retardo (standTimeOn);

    digitalWrite (LEDPin, LOW);

    retardo (timeOff);

    }

    Por supuesto que jugué con los tiempos de espera, pero nunca pude hacer que el LED se apagara y se apagara. ¿Qué hice mal? Gracias por su ayuda.
    Tenemos una buena política. Por favor, sea positivo y constructivo con sus compañeros estudiantes.

        Usted está ajustando el LED alto y bajo (encendido y apagado) con escritura digital. Es necesario utilizar analogWrite en el bucle y darle valores entre 0 y 255. Recomiendo ver el ejemplo de Fade en el software Arduino. También, puede que quieras ver la Clase Arduino:

        https://www.instructables.com/class/Arduino-Class/
        Tenemos una buena política. Por favor, sea positivo y constructivo con sus compañeros estudiantes.

    Pregunta nº 1: Denos más detalles sobre su pregunta...
    Tenemos una buena política. Por favor, sea positivo y constructivo con sus compañeros estudiantes.

        Hay cosas por ahí que te permitirán hacer eso, pero creo que es mejor que te quedes con el entorno de desarrollo nativo.
        Tenemos una buena política. Por favor, sea positivo y constructivo con sus compañeros estudiantes.

    ¿qué clase debería tomar en la academia de codec?
    Tenemos una buena política. Por favor, sea positivo y constructivo con sus compañeros estudiantes.

        No estoy familiarizado con la academia de códigos.

        Aquí hay una discusión que encontré sobre el tema:

        http://arduino.stackexchange.com/questions/10065/h... DIFUNDE LA PALABRA-
        Tenemos una buena política. Por favor, sea positivo y constructivo con sus compañeros estudiantes.

Más preguntas

No se han encontrado resultados

Más preguntas
