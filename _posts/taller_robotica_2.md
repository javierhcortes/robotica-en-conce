La electrónica da miedo, pero no es tan mala. No es necesario ser electricista para empezar a aprender electrónica. Todo lo que necesita hacer es seguir este sencillo tutorial para comenzar.

Aquí se presenta una visión general simplificada de la electrónica necesaria para la robótica práctica. Apenas estaremos arañando la superficie de la ciencia y la tecnología detrás de la electrónica. Para un conocimiento más profundo, usted puede tomar la clase de Electrónica.

¿Qué es la electrónica?

La electrónica es la ciencia y la tecnología que regula el flujo de electricidad. En pocas palabras, te permite mover los electrones. Si bien esto puede parecer una especie de actividad inútil, la regulación de los electrones ha permitido algunas de las innovaciones más importantes del siglo pasado, como computadoras, televisores, y -por supuesto- cohetes.

Tensión, corriente y vatios

Antes de que podamos regular la electricidad, tomemos un momento muy breve y hablemos de lo que es la electricidad.

La electricidad es básicamente una forma de energía resultante de partículas cargadas. Puede existir como una carga estática o dinámica como una corriente.

Nos ocuparemos exclusivamente de ello como una corriente. Una "corriente continua" de hecho. Puede que hayas oído hablar de la electricidad DC. En caso de que aún no lo haya deducido, la abreviatura DC significa Corriente Directa. Esto significa que la electricidad fluye en una sola dirección.

Hay dos maneras de medir la Corriente Directa que usted debe conocer inmediatamente.

Tensión

símbolo: V
La tensión se mide en voltios. Si usted pensara en la electricidad como un río, los voltios serían la altura del agua que se eleva por encima del lecho del río.


Corriente
Símbolo: A
La corriente se mide en amperios. Si los voltios son la profundidad del agua, entonces la corriente es la fuerza con la que el agua se está moviendo.

Así como es posible tener un río realmente profundo moviéndose con poca fuerza, también es posible tener un río poco profundo moviéndose con mucha fuerza. La tensión y la corriente deben ser consideradas en relación entre sí para tener una comprensión de su potencia combinada.

Potencia
Simbolo [W]
La relación entre tensión y corriente se mide en Watss (símbolo: W). Esta es una expresión del poder general que se ejerce. Probablemente usted ya ha escuchado este término antes, y debería ser consciente de ello.

resistencia
~~Explicar resistencia~~


Baterías

Las baterías son contenedores especiales que almacenan la electricidad de CC a una tensión determinada.

Los tipos más comunes de baterías que encontrará son las baterías estándar cilíndricas de pila seca. Se trata principalmente de pilas AAA, AA, C y D.

Lo que es importante saber acerca de estas baterías, es que aunque son de diferentes tamaños, todas tienen un valor nominal de 1.5V (recuerde - V es la abreviatura de voltios).

Lo que cambia a medida que aumentan de tamaño es la cantidad de potencia que son capaces de producir. Una batería D puede suministrar energía durante mucho más tiempo que una batería AAA. En otras palabras, una batería más grande puede proporcionar más amperios durante más tiempo que una batería más pequeña.

Las baterías se miden en Amperios Horas o Ah. Esta es básicamente la medida de cuántos amperios se pueden extraer de la batería en una hora. Por ejemplo, una batería de 20Ah le permitirá consumir 1 amperio durante 20 horas. Sin embargo, si su robot necesita 5 amperios, puede hacer funcionar ese robot durante unas 4 horas con la misma batería (20Ah / 5A = 4 horas).

Puede que ya te hayas dado cuenta de que 1.5V no es mucho. Tal vez se pregunte por qué no usamos una batería de 9V en su lugar. Una batería de 9V produce más energía que una batería de 1,5V.

Esto, de hecho, no es cierto en absoluto. Las baterías de 9V no son realmente grandes en producir energía en absoluto. Una buena manera de pensar en una batería de 9V es imaginar 6 baterías realmente pequeñas de 1.5V aplastadas juntas dentro. De hecho, si tomas un 9V aparte, eso es esencialmente lo que encontrarás dentro. Ahora, compáralo con el tamaño de 6 pilas AA, por ejemplo. En comparación, las baterías de 9V son más bien pequeñas!

Las baterías de 9V son bonitas porque son pequeñas y pueden producir un voltaje relativamente alto cuando se necesita, pero no ofrecen mucha corriente y se agotan rápidamente al hacer cosas como alimentar motores. Por lo tanto, no son buenos para la robótica. Por eso utilizaremos una serie de baterías de 1,5V.



Serie y paralelo

Bueno, entonces, puede que te preguntes cómo puedes alimentar cualquier cosa si las baterías son sólo 1.5V? La respuesta es bastante simple. Los conectamos en serie.

Esto significa que los conectamos de frente a atrás en una fila. Por lo tanto, el extremo positivo (más) de una batería se conecta a la toma de tierra (menos) de la batería siguiente, y así sucesivamente. A continuación, podemos calcular el nuevo voltaje simplemente añadiendo 1,5 V para cada batería de la serie. Por lo tanto, si usted tiene tres baterías de 1.5V en serie, lo calcularíamos así:

1.5V + 1.5V + 1.5V = 4.5V

Eso es prácticamente todo lo que hay.

Como se ilustra arriba, en lugar de colocar baterías en serie, también podemos cablearlas una al lado de la otra. Esto se llama paralelo. Cuando se conectan en paralelo fuentes de alimentación idénticas, la tensión se mantiene igual, pero la cantidad de corriente disponible aumenta. Esto es útil cuando no tiene suficiente corriente para alimentar su circuito.

Por ejemplo, digamos que usted tenía una batería de 9V que se agotaba demasiado rápido o simplemente no era capaz de proporcionar suficiente energía para hacer funcionar su dispositivo. Podrías resolver esto poniendo 6 pilas AA en serie. Sin embargo, por el bien de la discusión, digamos que su proyecto no tiene suficiente espacio para hacer esto. También puede conectar dos baterías de 9V en paralelo. Haciendo esto, usted está esencialmente duplicando la corriente disponible.

Tenga en cuenta que esto sólo funcionará si las baterías tienen exactamente el mismo voltaje y debe evitarse si es posible. Sin el circuito de protección adecuado, la fluctuación en el voltaje entre las baterías los forzará a tratar de cargarse unos a otros, disminuyendo su vida útil.

Portabaterías

Hay dos cosas notables que decir sobre los soportes de la batería. En primer lugar, los soportes de la batería le permiten conectar fácilmente las baterías a su circuito.

En segundo lugar, conectan varias baterías en serie. Para poder contar el número de celdas que contiene y multiplicarlo por 1,5 para calcular el voltaje del soporte de la batería. Por ejemplo, un soporte de batería con 6 pilas proporciona 9V (1,5 x 6 = 9).


El multímetro

Un multímetro es una herramienta utilizada para una amplia gama de mediciones relacionadas con la electrónica. O podría decirse que podrían medir mediciones múltiples... multi-metro... dolorosamente obvio - ¿verdad?

Un multímetro típico medirá el voltaje, la corriente, la resistencia y la continuidad. Los multímetros más avanzados también medirán un sinnúmero de otras cosas que no son importantes para entrar en este curso.

~~Ya hemos discutido el voltaje (fotografiado a la izquierda) y la corriente (fotografiado a la derecha), y ya deberías tener una idea aproximada de lo que eso significa. Sin embargo, tomemos un momento para discutir lo que significa resistencia y continuidad.~~


Otra cosa que se puede medir con un multímetro es la continuidad (fotografiada a la izquierda). Esto es simplemente una prueba para determinar si la electricidad puede fluir libremente entre dos puntos. En otras palabras, cuando se tocan las dos sondas con algo, se comprueba si hay un camino continuo de conductividad. Esto puede permitirle comprobar si algo es conductivo o no. También es muy importante para las pruebas para asegurarse de que las conexiones de soldadura sean correctas, y que la electricidad pueda fluir libremente.

La otra cosa muy importante que podemos medir con un multímetro es la resistencia (foto a la derecha). La resistencia es la medida a la que un componente resiste el flujo de electricidad dentro de un circuito. En otras palabras, algo con resistencia hace más difícil que la electricidad fluya y convierte la energía eléctrica en otra cosa. Es extremadamente útil poder medir cuánta resistencia proporciona un componente.

Para configurar el multímetro, enchufe la sonda negra en el puerto de tierra / común. Conecte la sonda roja en el borne de tensión. Ahora está todo arreglado.

Uso del multímetro

Para usar el multímetro, simplemente gire el dial a la propiedad eléctrica que desea medir.

A veces los medidores tienen rangos dentro de la propiedad que está midiendo. Por ejemplo, puede medir en el rango de milivoltios o en el rango de voltios. Gire el dial al rango en el que desea obtener resultados. Por ejemplo, si espera una medida de 5V, desea configurar el dial para seleccionar la opción más cercana a ese número.

Por el bien de los argumentos, digamos que estamos midiendo un paquete de baterías AA 3x. Toque la sonda roja con el terminal positivo (o cable rojo) de la cosa que está midiendo y la sonda negra con el terminal de tierra (o cable negro) de la cosa que pretende medir.

Debe devolver una lectura de voltaje positivo constante. Usted puede haber estado esperando un 4.5V perfecto y haber obtenido un número ligeramente por encima o por debajo de este. Esto es normal. Las baterías no están reguladas y la cantidad de carga que pueden proporcionar fluctúa. Particularmente, a medida que usted consume una batería, la cantidad de voltaje que ellos serán capaces de proporcionar caerá significativamente.


También puede medir la resistencia girando el dial para medir los ohmios (símbolo griego) en el medidor y colocando algo que proporcione resistencia -como una resistencia- entre las sondas. Al igual que el voltaje, las resistencias pueden fluctuar un poco. Por ejemplo, esta resistencia de 100K nos da una lectura de 99.7K, lo que no está tan mal en realidad. Puede fluctuar más.


Puede probar la continuidad girando el dial hacia el símbolo que parece un símbolo de avance rápido en un reproductor de casetes (éste es en realidad un símbolo de diodo). Toque un extremo del cable con la sonda negra y el otro extremo con la sonda roja. Cuando se toca la sonda roja, la lectura en el medidor debe pasar de 1 a 0. En la mayoría de los medidores, también emitirá un pitido para indicar que la electricidad puede fluir.

Por último, está la cuestión de la medición de la corriente. Si bien la corriente es un principio simple, es un poco difícil de medir y no vamos a ir sobre ella en esta clase. Llevará mucho tiempo repasarlo, y realmente no lo usarás con demasiada frecuencia como principiante.

Tensión y tierra

Si usted invierte las sondas del multímetro notará que el medidor le dará una lectura de voltaje negativo. La razón de esto es que la electricidad DC tiene un voltaje positivo y un voltaje de tierra.

Se puede determinar un voltaje restando el voltaje de la sonda roja (presumiblemente positivo) del voltaje de la sonda negra (presumiblemente tierra). Por lo tanto, si cuando se leen correctamente la potencia y el voltaje la fórmula es:

4.5 - 0 = 4.5

Sin embargo, cuando usted toca el cable rojo a tierra y el cable negro al voltaje positivo, su fórmula se convierte en realidad:

0 - 4.5 = -4.5

La razón de esto es que la electricidad DC tiene una polaridad donde un lado es siempre un voltaje positivo, y un lado no lo es. Cuando se mide la electricidad hacia atrás, se obtiene una lectura hacia atrás. Por lo tanto, si usted obtiene una lectura de voltaje negativo, está midiendo hacia atrás! Invierta sus sondas.

De todos modos...

La potencia fluye siempre entre la fuente de alimentación (tensión positiva) y la tierra.

Para que un circuito eléctrico opere, tiene que haber un camino entre el cual pueda fluir la electricidad. De hecho, dada la opción de caminos múltiples, la electricidad siempre recorrerá el camino de menor resistencia al suelo. Esto significa que la electricidad siempre tomará el camino más corto que ofrezca la menor cantidad de obstáculos. Cada componente electrónico que crea resistencia en un circuito es básicamente un obstáculo al flujo de electricidad.

Al escuchar esto, usted puede pensar que debe proporcionar electricidad con el camino más fácil a la tierra eliminando estos obstáculos y conectándola directamente. Sin embargo - y esto es importante para el estrés - NUNCA debe conectar su fuente de voltaje positivo directamente a tierra. Aparte del hecho de que eliminar todos los obstáculos derrota por completo el punto de la electrónica en primer lugar, esta es una idea muy mala.

Una de las otras reglas fundamentales de la electrónica es que la potencia debe ser utilizada. Si conectas la energía y la tierra directamente juntas, habrá mucha energía que no tiene forma de gastarse. Su circuito tratará entonces de liberar esta energía inutilizada de maneras altamente antisociales. Básicamente, la energía se convertirá en calor. Sin embargo, al no tener nada en particular que calentar, ya sea su fuente de alimentación o el cable de alimentación comenzará a calentarse dramáticamente. Esto puede resultar en un suministro de energía dañado, cable fundido o un incendio.

Otro nombre de este fenómeno es un "cortocircuito". Es probable que ya hayas oído este término antes.

Básicamente, vigile cuidadosamente su alimentación eléctrica y las conexiones a tierra para evitar que crucen. No sueltes el "humo mágico".

Circuitos

Un circuito es básicamente un bucle conductivo cerrado en el que la electricidad puede fluir libremente. Básicamente, un circuito es un conjunto de cosas conectadas entre sí en serie o en paralelo que permite que la electricidad fluya entre la energía y la tierra. Esto puede ser tan simple como una fuente de batería y una bombilla, o tan complejo como la placa controladora para un servo motor. De hecho, echemos un vistazo más de cerca a la placa de circuitos del servomotor.

Retire los tornillos en la parte posterior de un servomotor de rotación continua y levante la tapa. Coloque los tornillos a un lado para después.

Dentro del servo se encuentra una placa de circuitos integrados por una serie de componentes eléctricos que han sido soldados para formar un circuito. Estas pequeñas piezas están dispuestas de tal manera que permiten a un microcontrolador comunicarse con el servo y controlar el motor. No te preocupes por cómo. En este momento, simplemente nos preocupa el hecho de que este arreglo de probabilidades y finales regule la electricidad de tal manera que pueda llevar a cabo tareas complejas.
El soldador

Para que todos los componentes de la placa de circuitos del servo se conectaran, era necesario soldarlos. La soldadura es un medio para fusionar dos objetos metálicos y crear una conexión eléctrica.

No es de extrañar que la herramienta utilizada para soldar se llame soldador.

Puede parecer intimidante, pero un soldador básico es en realidad un dispositivo bastante crudo. Consiste en gran parte en un tubo de metal hueco con un serpentín de calentamiento eléctrico en su interior. Hay una punta de metal puntiaguda en uno para derretir la soldadura, y un mango fuertemente aislado en el otro extremo para evitar que la mano se queme. No hay mucho más que eso. Los soldadores más elegantes tienen controles de temperatura de fantasía, que realmente no son muy importantes para lo que estamos haciendo.

La forma correcta de sujetar un soldador es como un lápiz. Todo lo que necesita hacer es sujetar el mango de goma aislante como si estuviera sujetando un instrumento de escritura. Esto le dará una buena cantidad de destreza para mover la punta alrededor.

Tenga en cuenta que el tubo de metal sin aislamiento se calienta tanto como el interior de un horno. Hagas lo que hagas, nunca agarres el soldador de la pieza metálica!

Una vez vi a alguien distraídamente agarrar el tubo de metal caliente. No era bonito! Tuvieron que ir a la sala de emergencias y hacerse un tratamiento de la mano para quemaduras extensas. No querría ir a la sala de emergencias y que le traten la mano por quemaduras extensas, ¡así que preste atención a lo que está haciendo!

En una nota al margen, prefiero soldar por un método diferente que yo llamo la "técnica del gorila", que es un poco como sostener una cuchara. Aunque esta técnica es cruda y parecida a la de los simios, es -en mi opinión- una forma muy eficaz de utilizarla. Simplemente haga un puño alrededor del mango aislado, como si estuviera sosteniendo una espada. A continuación, gire la muñeca lateralmente para comenzar a soldar.

Siéntase libre de probarlo y utilizar el método que sea más cómodo para usted. Sin embargo, si eliges soldar como un gorila, prepárate para que todos y su madre te digan que lo estás haciendo mal.

Preparación del hierro

Antes de empezar a soldar tu corazón, querrás "estañar la punta". Lo que esto básicamente implica es cubrir la parte superior con una capa uniforme de soldadura.

Simplemente enchufe el soldador y espere unos minutos a que se caliente.

Derrita la soldadura uniformemente alrededor de la punta del soldador hasta que quede una bonita capa uniforme de plata.

Limpieza de la plancha

Después de estañar la punta, es necesario limpiar rápidamente la punta.

No te preocupes. Esto es fácil.

Arrastre la punta del soldador a través de una almohadilla de latón dos o tres veces hasta que luzca plateada y limpia.

Finalmente, coloque el soldador en su soporte o, si tiene uno más elegante, en su soporte.

Desoldado

De acuerdo. Así que estás rajado, rugiendo y listo para partir.

Sin embargo, vamos a hacer las cosas un poco al revés. Vamos a aprender a desoldar (quitar la soldadura de un circuito) antes de aprender a soldar.

Existen diferentes técnicas de desoldado. Usaremos trenzas desoldantes, e ignoraremos a todos los demás.

La trenza de desoldar es básicamente una tira de malla de cobre delgada y ajustada que se adhiere bien a la soldadura. Cuando la soldadura se funde, fluye básicamente de dondequiera que se encuentre, y queda atrapada en la malla.

Para utilizarlo, coloque la trenza de desoldar encima de cualquier terminal en una tarjeta de circuito que esté intentando desoldar. En nuestro caso, esperamos desoldar el motor. Por lo tanto, localice los terminales del motor en la tarjeta de circuito. Son fáciles de detectar porque son los terminales grandes a la izquierda y derecha del motor. En la mayoría de los casos, se puede ver visiblemente que están acoplados al motor.

Una vez que la trenza de desoldar esté en su lugar, coloque el soldador encima de ella y presione firmemente hacia abajo. La trenza de desoldar ahora debe ser insertada entre el soldador y el terminal que está tratando de desoldar.

Típicamente, en aproximadamente 10-20 segundos sentirá que la soldadura comienza a derretirse. Continúe sujetando el soldador allí durante unos 5 segundos más. Una vez que se sienta como si la soldadura hubiera dejado de derretirse, aleje rápidamente tanto el soldador como la trenza de desoldar. Tenga cuidado de no tocar la trenza desoldante con las manos, ya que es probable que esté muy caliente. Levántalo junto a su contenedor.

Si todo va bien, ahora debería ver un charco de soldadura en la trenza de desoldadura, y la soldadura removió la placa de circuito. Si no se ha retirado toda la soldadura de la placa de circuito impreso, repita el proceso con una sección nueva de la trenza de desoldado hasta que el terminal esté suelto.

Esto puede tomar algo de práctica para hacer lo correcto. Afortunadamente, hay un segundo terminal que desolidar antes de poder liberar la placa del motor. Desoldar el otro terminal del motor de la misma manera.

Una vez desoldados ambos terminales, retire suavemente la tarjeta de circuito impreso.

Además, tenga en cuenta que soldar va a parecer pan comido comparado con esto.

Todo sobre el Alambre

Antes de que lleguemos a la soldadura, tomemos un momento y discutamos el alambre. Puede que te preguntes qué hay que decir sobre el telegrama. Bueno, ¡mucho!

En la electrónica, el cable con el que trataremos está aislado. Esto significa que hay un núcleo metálico en el interior de un aislante de goma o plástico. Esto permite que la electricidad fluya, pero evita que los cables se corten si se tocan (porque están aislados).

Hay dos tipos de núcleos metálicos con los que trataremos.

El alambre de núcleo sólido tiene un solo trozo de metal dentro del aislamiento. Este cable es bueno para las tarjetas de circuitos electrónicos o para conectar componentes a un microcontrolador porque este tipo de cable se puede conectar fácilmente a los enchufes de la tarjeta. Este tipo de alambre mantiene su forma cuando se dobla, pero también es más propenso a romperse si se flexiona con demasiada frecuencia.

El alambre de núcleo trenzado tiene una trenza de finos filamentos metálicos en su interior. Este cable es mejor para conectar a componentes que se manejan mucho o se mueven mucho (como la conexión a motores en un brazo robótico). Este tipo de cable no se enchufa fácilmente en las tomas de un microcontrolador, lo que lo hace molesto para la creación de prototipos. Sin embargo, es muy flexible y puede doblarse mucho sin romperse.

El espesor del alambre se mide en calibres. Cuanto más grueso es el medidor, más corriente puede soportar. En América, el indicador se mide en AWG.

Trataremos en gran medida con alambre en el rango de 20 AWG a 22 AWG.

Aunque todos los alambres funcionan esencialmente igual sin importar el color, existe un sistema de codificación de colores generalmente aceptado para los alambres cuando se trata de electrónica DC.

El rojo indica un cable de alimentación.

El negro indica un cable de tierra.

El verde (o cualquier color que no sea rojo o negro) indica una señal o cable de datos.

Mientras que probablemente estés pensando que hemos agotado todo lo que hay que decir sobre el cable, estarías equivocado. Sin embargo, todavía hay mucho más terreno que cubrir y probablemente deberíamos continuar esta discusión por cable otro día. Todavía nos queda mucho por hacer, como soldar cables a los terminales del motor dentro del servo.

Soldadura

Usando el servo motor que desoldamos antes, ahora soldemos nuevos cables al motor!

Para hacer esto, despoje un poco del aislamiento del extremo del cable rojo de 6", y cuélguelo alrededor del terminal del motor con un pequeño punto rojo al lado. El rojo indica que este es el terminal positivo del motor.

A continuación, use el soldador para calentar el terminal y el extremo del cable. Mientras hace esto, empuje la soldadura en la punta del soldador. Todo va bien, deberías tener una linda y brillante conexión de soldadura entre los dos. Esto puede tomar algo de práctica para hacer lo correcto.

Deja que la soldadura se enfríe y listo.

Repita este proceso con un cable negro de 6" y el terminal de tierra del motor.

Cuando haya terminado, use sus alicates de corte diagonal para cortar cualquier exceso de plomo que se adhiera a la conexión soldada. Cuanto menos material conductor haya expuesto, mejor. Esto también ayudará a poner la tapa de nuevo.

Tomar ambos alambres y atar un nudo de tal manera que el nudo se extienda más allá de la caja del servo una vez apretado. El nudo debe colocarse en el interior del servo ensamblaje cuando cierre la tapa. Esto evitará que los cables se arranquen y que las conexiones de soldadura se rompan si algo se engancha al cable y se tira.

Finalmente, cerrar el servo de nuevo con los tornillos.

Para una guía de soldadura más profunda, revise la colección de soldadura.

Pruebe su trabajo

Coja un cable de puente rojo y conecte un extremo al cable rojo en un soporte de batería AA 4X y el otro al cable rojo del motor.

Coja un cable de puente negro y conecte el cable negro del soporte de la batería al cable negro del motor.

Todo va bien, el motor debe girar en sentido horario.

Para invertir la dirección del motor, simplemente voltee las conexiones conectando el cable de puente rojo al cable negro del motor y el cable de puente negro al cable rojo del motor.

Los motores de CC cambian de dirección cuando se invierte la polaridad. En otras palabras, cuando se vuelca el poder y la tierra.

Soldar su primer circuito

Para juntarlo todo, ahora vamos a soldar el servomotor modificado con el paquete de baterías AA 4X.

Para comenzar, deslice un trozo de 1 pulgada de tubo de contracción en blanco sobre el cable negro del motor, y un trozo de 1 pulgada de tubo de contracción rojo sobre el cable rojo del motor.

Saque un poco de aislamiento de los extremos de cada uno de los cables del motor. Enrosque el metal expuesto del cable rojo del motor con el metal expuesto del cable rojo del paquete de baterías. También retuerza el cable negro del motor con el cable negro del paquete de baterías.

Una vez que los cables negros se hayan enfriado, suelde los cables rojos.

Deslice el tubo de retracción sobre las conexiones de soldadura expuestas y rápidamente bombee los peices con una pistola de calor. Esto encogerá el tubo de contracción en su lugar y aislará las conexiones de soldadura. Esto es muy importante para evitar que accidentalmente toquen y creen un cortocircuito.

Felicitaciones! Acaba de soldar su primer circuito.

Pruébelo colocando las baterías en el soporte de la batería. El motor debe girar. Si no es así, vuelva atrás y revise sus conexiones de soldadura.

Ahora que hemos logrado cablear y alimentar un motor, estamos listos para empezar a construir algunos bots.
