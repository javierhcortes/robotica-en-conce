
instructables. com
Sensores
15-19 minutos
Introducción: Sensores

Lo que distingue a los robots de las máquinas básicas es su capacidad para percibir y responder a fenómenos del mundo físico. Para ello, utilizan sensores. Un sensor funciona convirtiendo la salida física del mundo en una señal que puede ser entendida por un microcontrolador. Puesto que todos los sensores miden de alguna manera las propiedades en el mundo físico, y los robots son capaces de tomar acciones para afectar al mundo físico, se crea un circuito de retroalimentación. Es la capacidad de un robot para desempeñar un papel activo e' intencionado' en su entorno lo que los diferencia de la mayoría de las demás máquinas.

Aunque no hay una regla fija sobre el tipo de sensor que debe tener un robot, podemos repasar algunos que los robots usan comúnmente.

Uno de los más populares es el telémetro ultrasónico. Este sensor envía un "ping" ultrasónico altamente direccional y cuenta el tiempo que tarda el sonido en rebotar del objeto y regresar al sensor. Este sensor es bueno para detectar la presencia de objetos que están entre 1" y 120" (12') de distancia. Es bueno para sentir obstáculos que no se mueven, pero no es bueno para sentir el movimiento.

Para percibir si la gente en un espacio se está moviendo, usted querría utilizar un sensor de movimiento IR. Este sensor tiene un ángulo de visión predefinido que difiere entre los modelos, lo que básicamente significa que tiene un campo delante del sensor que puede detectar movimiento en el interior. Este campo tiende a aumentar de ancho cuanto más lejos del sensor que se va. No te dice hasta dónde está la gente, pero es muy bueno para identificar si la gente está presente y se mueve.

Sin embargo, hay un sensor IR que es bueno para detectar la distancia. Este sensor funciona de la misma manera que el sensor PING, pero en lugar de medir el sonido que se refleja hacia atrás, mide la luz IR. Estos sensores varían ampliamente en los rangos de distancia que miden, por lo que es importante revisar la hoja de datos del sensor para asegurarse de que es el rango que está buscando antes de comprar uno. Tienden a ser muy precisos en sus mediciones, pero también suelen ser ligeramente más caros que los sensores ultrasónicos.

Si desea que su robot mida la cantidad de luz visible en un espacio, puede utilizar una fotocélula. Aparte de medir la luz, una fotocélula y algunos LEDs pueden ser transformados en un sensor de color crudo. Esto se debe a que algunos colores reflejan la luz mejor que otros. Por lo tanto, este sensor se puede utilizar para identificar y seguir una línea negra dibujada en el suelo. Para ver un ejemplo de cómo construir un sensor de este tipo, échale un vistazo a mi robot de telepresencia. La desventaja de utilizar un sensor para este propósito es que se ve afectado por la luz ambiental.

También puede utilizar el robot para medir el sonido. Este sensor es en gran medida sólo un micrófono preamplificado. Este sensor es el más fácil de conectar con él si sólo está midiendo el volumen del sonido. Escuchar comandos o frecuencias es muy difícil para el Arduino porque normalmente requiere demasiada potencia de procesamiento para hacer algo demasiado avanzado. Aunque, es posible que los codificadores más avanzados logren. Normalmente, si desea realizar un procesamiento de audio avanzado, debería utilizar un escudo o módulo para escuchar frecuencias o comandos de voz. Un ejemplo de esto, una vez más, se puede encontrar en mi robot de telepresencia.

Un interruptor de colisión del robot es típicamente sólo un interruptor de palanca con algún tipo de brazo extensor unido a la palanca. Esto crea una gran ventaja mecánica, y le da al interruptor un disparador de pelo. Alertará al arduino casi inmediatamente al ser tocado. También se realizan versiones comerciales para su uso como interruptores de seguridad mecánicos. Estos son buenos para robots realmente grandes, como el interruptor de parachoques de goma utilizado en mi bastidor robótico.

Una vez que usted ha seleccionado un sensor, no hay una sola manera estándar para que los sensores comuniquen información a un microcontrolador. Cada sensor necesita ser conectado de una manera apropiada a él. Afortunadamente, la mayoría de los sensores están enviando datos de una manera predecible como una resistencia, voltaje analógico, voltaje digital o señal de datos.

Un sensor analógico produce una señal constante y aproximadamente proporcional a lo que se está midiendo. Dicho de otra manera, emite una señal de voltaje ininterrumpido, o produce una cantidad variable de resistencia en el circuito. Como regla general, estos sensores tienden a no ser tan exactos como los digitales, pero tienden a ser más baratos y robustos. Para muchas aplicaciones robóticas de no precisión, un sensor analógico es más que adecuado.

Muchos sensores analógicos son resistivos, lo que significa que tienen una cantidad fluctuante de resistencia basada en lo que miden. Ejemplos de estos sensores son una fotocélula, FSR (resistencia sensible a la fuerza) o un sensor de doblado. Estos sensores pueden ser leídos por una entrada analógica de microcontroladores usando un divisor de voltaje. Estos sensores tienden a ser pasivos, lo que significa que funcionarán y producirán una lectura incluso sin tensión de entrada. Dicho de otro modo, se puede leer su resistencia con un multímetro incluso si no forma parte de un circuito eléctrico.


Para probar este sensor en acción, conecte una resistencia de 10K en serie con una fotocélula. Conecte su unión a la clavija A0 del Arduino. Conecte el resto de la clavija de la resistencia a tierra, y el resto de la clavija de la fotocélula a la alimentación de 5V. Una vez que el cableado esté completo, abra el software Arduino y cargue Archivo > Ejemplos > 01. Conceptos básicos > AnalogReadSerial. Finalmente, para verlo en acción, abra el Serial Monitor.

Algunos sensores analógicos como sensores de temperatura, fototransistores y telémetro IR están basados en voltaje y producirán una señal entre 0V y 5V. Esto puede ser leído directamente por un pin analógico de Arduino. Estos sensores suelen estar activos, lo que significa que sin un voltaje de entrada no se encenderán ni harán nada. Típicamente se interconectan usando el Arduino de la misma manera que los sensores resistivos. Sin embargo, es importante tener en cuenta que están produciendo una corriente, en lugar de cambiar la resistencia para aquellos casos raros en los que la interfase con ellos se desvía.

Un sensor digital tiene una salida de voltaje discreta, lo que significa que la señal está encendida o apagada. Si se coloca en términos electrónicos, significa que la señal es alta o baja, o bien 1 ó 0. La señal digital puede ser tan simple como el encendido y apagado, o puede ser activada y desactivada lo suficientemente rápido para comunicarse usando un protocolo de datos binario (1 o 0).

El Arduino, a su vez, es capaz de interpretar estos pulsos y comprender lo que se está comunicando. Es un poco como si alguien se estuviera comunicando con el Arduino en código morse pulsando un interruptor conectado a un pin de entrada. Excepto, en este caso, que está sucediendo muy - muy - muy - muy - rápido.

Podría decirse que el sensor digital más básico es un interruptor. Proporciona una señal que se activa o desactiva dependiendo de si se pulsa o no. En circunstancias normales, esto implica el aporte humano. Sin embargo, puede utilizar interruptores como interruptores de colisión en robots de tal manera que cuando el robot choca contra algo, advierte a su cerebro del microcontrolador que deje de conducir en esa dirección. Este tipo de sensor se consideraría pasivo y es raro en lo que respecta a los sensores digitales.

Un sensor digital más típico que produce una salida básica alta o baja es un sensor de movimiento IR. Es capaz de sentir el movimiento al captar ondas de calor humanas. Este tipo de sensor sólo le indica si hay movimiento humano o no.

Para probarlo, conecte el pin de 5V a 5V en el Arduino, conecte el pin DIG al pin digital 2 en el Arduino como se muestra en la figura. A continuación, abra el software Arduino y cargue Archivo > Ejemplos > 01. Conceptos básicos > DigitalReadSerial. Finalmente, apunte el sensor lejos de usted (para evitar activarlo constantemente) y abra el monitor serial.

Por último, hay sensores avanzados como sensores de telémetro ultrasónico y acelerómetros que se comunican con el Arduino utilizando un protocolo personalizado complejo o una señal de datos binarios (como la serie). Estos sensores son módulos especializados (más sobre eso en la próxima lección) que tienen su propio IC o microcontrolador preconfigurado para proporcionar lecturas precisas de sensores a otro dispositivo.

A menudo estos sensores requerirán leer su hoja de datos para entender cómo interactuar con ellos. Por ejemplo, el sensor PING, que es un sensor ultrasónico de marca omnipresente producido por Parallax, tiene un pin que se utiliza como entrada y salida. Necesita ser enviado un pulso de 5V desde el microcontrolador, y luego el mismo pin necesita ser configurado como una entrada digital y monitoreado para la señal de retorno. Sin embargo, si no te lo hubiera dicho y no hubieras leído la documentación, tendrías muchos problemas para resolver esto.


Si usted tiene un sensor PING, conéctelo al tablero de control y conecte sus clavijas al Arduino de la siguiente manera:

Ping 5V a Arduino 5V

Ping Ground a suelo Arduino
Señal Ping a Arduino pin digital 4

Una vez conectados los cables, cargue el siguiente código y abra el Serial Monitor:





const int pingPin = 4;

nulo setup () {
  
  Inicio de serie (9600);
}

bucle vacío () {
  
  
  larga duración, pulgadas, cm;

  
  
  pinMode (pingPin, OUTPUT);
  digitalWrite (pingPin, LOW);
  delayMicrosegundos (2);
  digitalWrite (pingPin, HIGH);
  delayMicrosegundos de retardo (5);
  digitalWrite (pingPin, LOW);

  
  
  
  pinMode (pingPin, INPUT);
  duración = pulseIn (pingPin, HIGH);

  
  pulgadas = microsegundosPulgadasPulgadas (duración);
  cm = microsegundosaCentímetros (duración);

  Serial. print (pulgadas);
  Serial. print ("in,");
  Serial. print (cm);
  Serial. print ("cm");
  Serial. println ();

  retardo (100);
}

microsegundos largosToInches (microsegundos largos) {)
  
  
  
  
  
  vuelta microsegundos / 74 / 2;
}

microsegundos largosToCentímetros (microsegundos largos) {)
  
  
  
  retorno microsegundos / 29 / 2;
}

Los sensores que hemos tratado en esta lección no son de ninguna manera los únicos sensores que usted podría usar. Hay más sensores en este mundo que posiblemente pueda revisar. Otras cosas que tal vez desee sentir incluyen aceleración (acelerómetro), color, gases naturales, campos electromagnéticos (efecto Hall), orientación en el espacio (gyro), toque humano (capacitivo), intensidad de la señal inalámbrica, clima y presión atmosférica (por nombrar algunos). Lo más probable es que si hay algo ahí fuera que quieres sentir, hay una herramienta para hacerlo. Todo lo que necesitas hacer es rastrearlo y descubrirlo.


Para obtener un amplio índice de los sensores existentes, consulte la lista de sensores en Wikipedia.
"Anterior Siguiente"
Hacer una pregunta

Dé a su pregunta un título lo más descriptivo posible para que otros puedan encontrarlo fácilmente. Máximo 70 caracteres.

?

Pregunta nº 1: Denos más detalles sobre su pregunta...

No se han encontrado resultados

    ¿Las ondas producidas por este sensor se reflejarán cuando golpea la superficie del agua?
    Tenemos una buena política. Por favor, sea positivo y constructivo con sus compañeros estudiantes.

        No sé la respuesta a esta pregunta. ¿Intentas construir un robot flotante?
        Tenemos una buena política. Por favor, sea positivo y constructivo con sus compañeros estudiantes.

    ¿cuál crees que es el límite de edad para construir robots
    Tenemos una buena política. Por favor, sea positivo y constructivo con sus compañeros estudiantes.

        Pensaría que alguien podría empezar a los 8 ó 10 años de edad con la ayuda de los padres.
        Tenemos una buena política. Por favor, sea positivo y constructivo con sus compañeros estudiantes.

    ¿De dónde sacaste los cepillos? ¿De qué marca son? Estoy teniendo problemas para encontrar uno así..
    Tenemos una buena política. Por favor, sea positivo y constructivo con sus compañeros estudiantes.

        Los compré en Ikea. No estoy seguro de que todavía los hacen, pero usted debe ser capaz de encontrar similares en la mayoría de los supermercados, grandes almacenes de cajas, o tiendas de dólar. Son bastante comunes.
        Tenemos una buena política. Por favor, sea positivo y constructivo con sus compañeros estudiantes.

    Estoy confundido sobre el puente-H... Desafortunadamente acabo de soldar el puente-H como se menciona en el ejemplo. Pensé que ya es la soldadura para el Skitterbot. Así que el motor sólo va en la otra dirección cuando yo cambio el interruptor. y luego lo sueldas de otra manera, ¿verdad? No puedo verlo bien y supongo que mi inglés no es el mejor. Los cables rojos y negros del motor y la batería no están en la misma línea, ¿verdad?

    Gracias!
    Tenemos una buena política. Por favor, sea positivo y constructivo con sus compañeros estudiantes.

        Los dos pares de clavijas exteriores deben estar cableados entre sí en una X.

        El par interior de clavijas debe conectarse a las baterías.

        El motor debe conectarse a cualquiera de los dos pares de clavijas exteriores (por ejemplo, los dos puntos inferiores de la X).

        Tenemos una buena política. Por favor, sea positivo y constructivo con sus compañeros estudiantes.

    "Servo de rotación continua modificado para accionamiento directo*", por favor explique? ¿Qué es el accionamiento directo? ¿Qué es lo que tiene que pasar para convertirlo en un disco directo? Arriba dice referirse a los "pasos 13 al 17 de la lección de Habilidades Básicas en Electrónica para Robótica". No veo nada titulado el paso 13 etc. en esa lección, veo algunas cosas sobre desoldar y resolver, ¿es eso? ¿Cuál es ese logro? ¿Es éste un paso que es absolutamente necesario dar?


    Gracias!
    Tenemos una buena política. Por favor, sea positivo y constructivo con sus compañeros estudiantes.

        Sí. Retire la tarjeta controladora. La tarjeta controladora requiere un microcontrolador para su accionamiento. Al removerlo y conectarlo directamente al motor, el motor girará por sí solo cuando se alimenta. No se necesita lógica informática.
        Tenemos una buena política. Por favor, sea positivo y constructivo con sus compañeros estudiantes.
        
        
        

        Quitamos el servo para este proyecto porque no está usando un microcontrolador y queremos que los motores giren libremente. En los otros proyectos estamos utilizando un microcontrolador (Arduino) para comunicarnos con las tarjetas controladoras del motor.
        Tenemos una buena política. Por favor, sea positivo y constructivo con sus compañeros estudiantes.

        Gracias por su respuesta Randofo, todavía no está 100% claro, ¿por qué necesitamos quitar la placa controladora de este servo motor para este proyecto pero no para los otros proyectos? Los otros servos de los otros proyectos no parecen necesitar un microcontrolador, por favor explique?

        Además, ¿qué es el paso 13 al 17'? No veo nada titulado eso.

        Gracias!

        Tenemos una buena política. Por favor, sea positivo y constructivo con sus compañeros estudiantes.

Más preguntas

No se han encontrado resultados

Más preguntas
