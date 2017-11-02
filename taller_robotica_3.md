En su estado actual, el movimiento robótico es creado por los motores. Empleando los motores de forma creativa, es posible una cantidad inimaginable de automatización robótica. Por lo tanto, es importante comenzar a aprender acerca de los motores si desea construir robots propios. Hay muchos tipos diferentes de motores en el mundo. No se trata de una guía exhaustiva, sino de un curso intensivo de utilización de motores. Mientras que esto es sólo una visión general inicial, seguiremos cubriendo los motores más a fondo a medida que progresamos en la clase y nuestras habilidades se vuelven más avanzadas.

Un motor eléctrico es una máquina que transforma la energía eléctrica en energía mecánica. Dicho de otra manera, cuando esta máquina funciona con electricidad, se mueve (normalmente rotando).

Si usted fuera a desmontar un motor de CC, parecería muy complicado, pero en realidad es un dispositivo bastante básico.

Cuando se aplica potencia al motor en sus terminales exteriores, éste se desplaza a través de los cepillos hasta el conmutador. Los cepillos obtuvieron su nombre porque literalmente se cepillan a través del conmutador mientras gira libremente entre ellos.

El conmutador está hecho de piezas separadas de material conductor adheridas alrededor del eje del motor. Cada pieza del conmutador está conectada a un cable diferente en el devanado del motor. A medida que el eje gira, y los cepillos rozan contra ellos, hacen y rompen el contacto eléctrico con cada uno de ellos y alimentan los diferentes devanados.

Los devanados son básicamente bobinas de inductores. Usted puede aprender más sobre esto en la lección de Inductores en mi Clase de Electrónica.

Cuando los devanados son impulsados, crean un campo magnético a través del rotor en torno al cual se enrolla. El campo creado en el rotor reacciona al campo magnético de los imanes que se fijan permanentemente en el estator (recinto metálico). Estas fuerzas magnéticas que compiten entre sí hacen que el rotor, que está unido al eje del motor, gire en alineación a medida que se repele / atraiga hacia los imanes fijos.

Si usted entiende cómo funcionan los imanes, sabrá que una vez que los campos están alineados, el rotor debe dejar de girar. Sin embargo, a medida que gira, la conexión eléctrica al devanado que está siendo energizado se rompe, y el conmutador alimenta el devanado siguiente, haciendo que éste gire una vez más en su lugar. A medida que este nuevo gira, la conexión se rompe de nuevo, y el siguiente devanado se activa continuando el ciclo. Esta secuencia continuará indefinidamente mientras el motor esté alimentado.

Puesto que el rotor está unido al eje, esto explica por qué el eje del motor gira cuando se aplica la electricidad. Por su parte, el eje se sostiene en su lugar mediante un cojinete en la parte delantera (y a veces en la parte trasera) del estator (caja).

Hay tres tipos comunes de motores que usted encontrará típicamente en la robótica. Esto no quiere decir que estos son los únicos tipos de motores que existen, pero son los motores con los que es más probable que usted trabaje.

Los motores de CC giran libremente cuando son alimentados por corriente continua. Estos motores giran libremente cuando se alimentan y no tienen un posicionamiento preciso. Son mejores como motores de accionamiento robóticos. Típicamente se puede identificar un motor de corriente continua porque parece un tubo redondo de metal con un eje en el centro y dos terminales en la parte posterior. Estos motores vienen en una amplia gama de diferentes tamaños y voltajes de funcionamiento.

Los motores paso a paso tienen dos o más bobinas separadas que necesitan ser alimentadas en una secuencia particular. Debido a esto, el eje se mueve en pequeños incrementos "escalonados" a medida que la potencia se mueve entre bobinas. Estos motores son buenos para un posicionamiento preciso y control de velocidad, particularmente cuando se necesita un motor que puede girar 360 grados. Usted puede identificar típicamente un motor de pasos porque tiene una caja como la forma y/o tiene 4 o más alambres saliendo de su lado. El tipo más común de motor paso a paso es un motor bipolar, que tiene dos bobinas y cuatro cables (dos para cada cable). Éstos son típicamente el tipo que usted encontrará.

Los servomotores son motores reductores de corriente continua especializados con un tablero de control incorporado que requiere una señal de un microcontrolador. La mayoría de los servos tienen una rotación limitada y son capaces de ser dirigidos para moverse a una posición realmente precisa. Sin embargo, hay servos de rotación continua que no se pueden mover a la posición exacta, pero se pueden programar en términos de velocidad. Usted puede identificar un servo motor porque es similar a una caja de cambios y tiene una cosa parecida a un engranaje unido a su eje.

Se acerca una lección completa del servo donde discutiremos este tipo de motor con más profundidad.

Hay algunos factores a considerar al seleccionar un motor.

Como regla general, cuanto más grande sea el motor que usted elija, más voltaje y corriente podrá soportar. Esto es importante porque existe una correlación entre tensión y velocidad, y otra entre corriente y par.

En pocas palabras, cuanto más voltaje se aplica a un motor, más rápido gira.

Sin embargo, como toda la electrónica, los motores tienen un rango de voltaje óptimo y nunca deben exceder su voltaje máximo. Esto significa que los motores de corriente continua también tienen una velocidad máxima (a su tensión de funcionamiento máxima).

Para aquellos que no están familiarizados, el par es la cantidad de fuerza de rotación que un motor puede aplicar. Al igual que la velocidad, los motores también tienen una cantidad máxima de par de torsión que pueden producir antes de que se detengan (o dejen de girar). A medida que el motor se encuentra con una resistencia cada vez mayor y se acerca más y más al estancamiento, la cantidad de corriente que consume aumenta. La cantidad absoluta de corriente que un motor puede captar cuando encuentra tanta resistencia que deja de girar se llama corriente de pérdida.

La corriente de pérdida es importante porque indica la potencia potencial del motor. Cuanto más alto es este número, más potencia potencial tiene el motor. Aunque, cuando el motor de su robot gira libremente y no encuentra mucha resistencia, no consume tanta corriente.

A diferencia de la alimentación de tensión del motor, que se puede variar ajustando la tensión dentro de su rango de funcionamiento, las opciones para ajustar el par motor no son tan fáciles. Usted puede simplemente conseguir un motor más grande y más fuerte para resolver este problema, o usted puede utilizar una caja de cambios.

Una caja de cambios es una colección de marchas dispuestas de tal manera que traduce la velocidad y el par de un motor al aumento o a la disminución (dependiendo de la disposición). El eje del motor se conectará a un extremo de la caja de cambios, y a medida que el motor gira, la rotación se traslada a una velocidad diferente en el eje de salida de la caja de cambios.

Por regla general, cuanto más rápido gira el motor, menos par de torsión proporciona. Los reductores más lentos proporcionan más par que los más rápidos, y viceversa.

Es raro que usted tendría que construir su propia caja de cambios. Muchos motores vienen montados con una caja de cambios ya montada en un gran número de configuraciones diferentes. Los motores de engranajes son una gran manera de obtener mucha energía en un paquete pequeño, o ralentizar un motor de corriente continua hacia abajo sin depender de un controlador de motor para hacer todo el trabajo.

Por lo general, se puede identificar un motorreductor porque parece un motor normal, pero con un cilindro más grande en el extremo. Además, el eje a menudo está descentrado.

Al acoplar el eje del motor a diferentes sistemas mecánicos, se pueden lograr diferentes tipos de movimiento. Estos conjuntos pueden combinarse en última instancia para crear conjuntos electromecánicos avanzados que resuelven diferentes tareas. Aunque no es del todo robótico, el mecanismo de reproducción de cinta de arriba lo ilustra.

Los siguientes son las principales formas de movimiento que usted logrará a partir de un mecanismo estándar.

El movimiento rotativo es el más fácil de lograr porque el eje del motor ya está girando. Típicamente, los sistemas rotativos implican aumentar o disminuir la velocidad de rotación del motor. Como ya se ha mencionado, esto también cambia el par de torsión del sistema en relación con el mismo. El tipo de mecanismo rotatorio que usted encontrará típicamente implica engranajes o poleas.

El movimiento lineal traduce el movimiento rotacional en movimiento a través de un plano plano plano. Ejemplos clásicos de esto incluyen cintas transportadoras y orugas de tanques. Este sistema utiliza dos o más engranajes o poleas rotativas (una de ellas conectada al eje impulsor y una de giro libre) para tirar de un riel plano alrededor de ellos. Cuanto más lejos esté la distancia entre estos engranajes, más larga será la pista. A medida que la pista se mueve alrededor de los engranajes, se mueve en dirección a través de un plano plano plano.

El movimiento recíproco es un movimiento que se mueve hacia adelante y hacia atrás de manera lineal. Este tipo de movimiento se utiliza a menudo para mover un pistón o en una cerradura de puerta automatizada. Hay muchas maneras diferentes de lograr mecánicamente el movimiento recíproco. Los enfoques comunes incluyen el uso de un yugo (como se muestra en la foto), una leva o enlaces.

El movimiento oscilante involucra cualquier parte que se mueve hacia adelante y hacia atrás a lo largo de un arco. El ejemplo más clásico de esta moción es un metrónomo. Como la mayoría de los otros movimientos, el movimiento oscilante puede ser creado usando una gama de diferentes mecanismos, incluyendo enlaces. Lo más típico es que sólo requiere una parte uno un pivote fijo siendo empujado hacia adelante y hacia atrás por alguna otra parte.

Para lograr los diferentes tipos de movimiento, es necesario utilizar piezas mecánicas. Hay más mecanismos en este mundo de los que yo podría repasar, pero aquí hay algunos comunes que pueden encontrarse en la robótica.

El mecanismo más simple que se puede acoplar es un peso descentrado en un eje giratorio. Esto hará que el motor vibre. Éstos se utilizan con mayor frecuencia en los vibrobots para crear movimientos complejos. Este tipo de movimiento es el camino más rápido para llegar a la gratificación, pero también es el más difícil de conducir. El robot tenderá a virar a la izquierda o a la derecha, dependiendo de la dirección en la que el motor esté girando, pero sus movimientos serán en gran medida arbitrarios.

Las poleas son un tipo de mecanismo de rotación que se puede utilizar para cambiar la velocidad, el par o, en algunos casos, la dirección del motor. Lo bueno de usar poleas es que están basadas en la fricción, así que si el eje de transmisión se atasca o se atasca, las correas se deslizarán y el motor continuará girando. Esto reduce la presión sobre el motor y el sistema electrónico del motor, ya que el motor tiene que trabajar más duro y absorber más corriente a medida que se acerca el momento de la parada. Sin embargo, lo malo de las poleas es que pueden deslizarse, por lo que no son tan precisas como otros mecanismos. Por lo tanto, son los más adecuados para sistemas de accionamiento en los que la precisión del motor no es tan importante y el eje de accionamiento tiene más probabilidades de encontrar resistencia y atascarse.

Otro tipo de mecanismo de rotación común son los engranajes. Los engranajes funcionan de la misma manera que las poleas. Sin embargo, a diferencia de las poleas, los engranajes también pueden venir en otras formas como una configuración de "rack", como en el robot 3D impreso arriba, y ser usados para crear movimiento lineal. Los engranajes tampoco se basan en la fricción para rotar los ejes, sino que tienen una serie de dientes entrelazados. Esto los hace más precisos, ya que los dientes de mallado aseguran una rotación uniforme y predecible de un eje a otro.

Los engranajes también requieren una alineación muy precisa gracias a los dientes emparejados y mallados. Si están demasiado alejados, los engranajes se desgastan más rápido, y si están demasiado cerca, los engranajes aplican demasiada presión y se agarran. Hablando de eso, a los sistemas de engranajes no les gusta estar parados. Esto se traduce en una gran fuerza para los dientes del engranaje, que generalmente son pequeños y quebradizos. Esto puede causar que se rompa un diente en el engranaje, lo que podría ocasionar imprecisión o falla de todo el sistema mecánico. Se puede decir que un sistema de engranajes está roto porque está completamente atascado o haciendo ruidos horribles.

Una forma sencilla de traducir el movimiento rotatorio al movimiento alternativo, lineal u oscilante es utilizar una leva. Una leva es sólo un brazo de palanca que gira descentrado del eje. El tipo más común de leva es la forma ovalada. Sin embargo, las levas pueden venir en un número de diferentes formas y tamaños, desde rectangulares hasta en forma de corazón. Las levas simplemente empujan las cosas y pueden servir para todo tipo de propósitos en sistemas mecánicos. En este caso, las dos levas elevan y empujan el robot hacia delante mientras los servos giran.

Los enlaces se pueden utilizar para crear movimientos oscilantes y oscilantes. Todo lo que un enganche resulta ser es simplemente una barra rígida con agujeros en ella para los pivotes. En un sistema de enganche, algunos de ellos están limitados a otros enganches, y otros están fijados a la superficie sobre la cual gira el motor. Al crear una combinación de pivotes libres y fijos, los enlaces son capaces de crear una multitud de movimientos complejos.

Otro método común para traducir el movimiento es usar pistas. Además de hacer que cualquier robot parezca un tanque, esta forma de conversión crea movimiento lineal. Una de las ventajas de un vehículo de orugas es que su método de locomoción tiene mucho más superficie que una rueda. Esto le permite tener más fricción con el suelo, lo que es esencial para trepar sobre superficies desiguales y obstáculos. El hecho de que las pistas tienen un poco de espacio a lo largo de su longitud, tampoco hace daño con esto, ya que son capaces de adaptarse a planos ligeramente desiguales.

Tomemos un momento para discutir algunas preocupaciones prácticas.

Para alimentar un motor de CC, todo lo que necesita hacer es conectar un voltaje positivo (dentro de su potencia nominal) a un terminal en el motor, y conectar a tierra al otro terminal.

Para invertir la dirección del motor de CC, simplemente invierta los cables conectados a cada terminal. La razón por la que el motor gira hacia atrás cuando se hace esto es que los polos magnéticos creados dentro de los devanados se invierten cuando se acciona en sentido contrario. Esto fuerza al rotor a girar en sentido contrario para alinearse con los imanes fijos dentro del estator (caja del motor).



En la próxima lección pasaremos a controlar los motores con un microcontrolador (como un Arduino). Sin embargo, como se puede ver en los enlaces de proyectos a continuación, hay muchas máquinas divertidas parecidas a robots que se pueden construir con sólo este conocimiento básico de los motores.

En la próxima lección pasaremos a controlar los motores con un microcontrolador (como un Arduino). Sin embargo, como se puede ver en los enlaces de proyectos a continuación, hay muchas máquinas divertidas parecidas a robots que se pueden construir con sólo este conocimiento básico de los motores.
