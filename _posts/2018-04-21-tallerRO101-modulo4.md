---
title: "Electricidad y electrónica"
date: 2018-04-21 13:00:00 -0300
permalink: /posts/RO101-modulo4/
description : Se abordan temas generales de la electricidad y electrónica
header:
  teaser: "assets/images/logo-electricidad.jpg"
---

# __Introducción a la Electricidad y Electrónica__

  ![logo](/../assets/images/logo-electricidad.jpg)

# Electricidad y Electrónica

Aquí presentaremos algunos conceptos teóricos que muestran conceptos recurrentes, en electricidad y electrónica necesaria para la robótica práctica. Apenas estaremos arañando la superficie de la ciencia y la tecnología detrás de estos conceptos.

**Definición de ELECTRICIDAD**
> La electricidad es el conjunto de fenómenos físicos asociados con la presencia y el movimiento de la carga eléctrica.

**Definición de ELECTRÓNICA**
> Ciencia y tecnología que regula el flujo de electricidad.

En pocas palabras, son ciencias que estudian y controlar el movimiento de los electrones. La regulación de los electrones ha permitido algunas de las innovaciones más importantes del siglo pasado, como computadoras, televisores.

## Voltaje, Corriente y Potencia

Para poder comunicarnos en el lenguaje técnico, mostraremos algunas de las magnitudes mas utilizadas

* **Voltaje:**

> Es una magnitud física que cuantifica la diferencia de potencial eléctrico entre dos puntos. El voltaje o tensión se mide en voltios.

Si pensáramos en la electricidad como un río, los voltios serían la altura del agua que se eleva por encima (o debajo) del lecho del río.

* **Corriente:**

> Es una magnitud física que cuantifica el flujo de carga eléctrica que pasa a través de un conductor. La corriente se mide en amperios.

Si pensáramos en la electricidad como un río y los voltios representan la altura del agua, entonces la corriente es el flujo o caudal del rio.

* **Resistencia:**

> Es una magnitud que mide la oposición al flujo de electrones al moverse a través de un conductor. La resistencia se mide en ohmios.

Si pensáramos en la electricidad como un río y la altura representa el voltaje y el caudal la corriente; la resistencia serán las piedras del rio que impiden el avance del agua.


{:refdef: style="text-align: center;"}
![ley de ohm](/../assets/images/vir.jpg){: height="80%"  width="80%"}
{: refdef}
Símil energía eléctrica y mecánica
Voltaje => Fuerza. Corriente => Desplazamiento. Resistencia => Roce
{: style="color:gray; font-size: 80%; text-align: center;"}


* **Baterías**

Las baterías son contenedores especiales que almacenan energía. Los tipos más comunes de baterías que encontraras son las baterías estándar cilíndricas de pila seca.

{:refdef: style="text-align: center;"}
  ![baterias](/../assets/images/baterias2.jpg){:height="50%" width="50%"}
{: refdef}

Se trata principalmente de pilas AAA, AA, C y D.
{: style="color:gray; font-size: 80%; text-align: center;"}

Lo que cambia entra las baterías son el voltaje que entregan y la energía que pueden almacenar. La manera de comparar baterías, es a través de su _capacidad_ que se miden en Amperios Horas [Ah]. Esta es básicamente la medida de cuántos amperios se pueden extraer de la batería en una hora. Por ejemplo, una batería de **20[Ah]** le permitirá consumir **4 amperes** durante **5 horas**.

La diferencia entre una batería de **9[V]** y un grupo de baterías de **1.5[V]** es que las baterías no ofrecen mucha corriente y se agotan rápidamente al hacer cosas como alimentar motores. Por lo tanto, no son buenos para algunos aspectos de la robótica. Por esto utilizaremos baterías de **9[V]** esta para alimentar al micro-controlador y las pilas de **1.5[V]** para alimentar a los motores DC.

|           | Voltaje  | Corriente  | Resistencia | Capacidad  |
|-----------|:--------:|:----------:|:-----------:|:----------:|
|**Unidad** | Volt     | Ampere     | Ohm         | AmpereHora |
|**Símbolo**|  [V]     |    [A]     |  [Ω]        |    [Ah]    |

## Conexiones Serie y Paralelo

Puede que te preguntes ¿Cómo puedes alimentar cualquier cosa si las baterías son sólo **1.5[V]**? La respuesta es bastante simple. Los conectamos en serie.

Esto significa que los conectamos de frente a atrás en una fila. Por lo tanto, el extremo positivo (+) de una batería se conecta a la toma de tierra (-) de la batería siguiente, y así sucesivamente.

![baterias](/../assets/images/bateria-serie.jpg)
Dos pilas en serie
{: style="color:gray; font-size: 80%; text-align: center;"}

A continuación, podemos calcular el nuevo voltaje simplemente sumando **1.5 [V]** para cada batería de la serie.

Por lo tanto, si usted tiene tres baterías de 1.5V en serie, lo calcularíamos así:

    1.5V + 1.5V + 1.5V = 4.5V

En lugar de colocar baterías en serie, también podemos conectarlas una al lado de la otra. Esto se llama paralelo. Cuando se conectan en paralelo fuentes de alimentación idénticas, la tensión se mantiene igual, pero la cantidad de corriente disponible aumenta. Esto es útil cuando no tiene suficiente corriente para alimentar su circuito.

{:refdef: style="text-align: center;"}
![baterias](/../assets/images/bateria-paralelo.jpg){:height="70%" width="70%"}
{: refdef}

Dos pilas en paralelo
{: style="color:gray; font-size: 80%; text-align: center;"}

**Atención!** Tenga en cuenta que esto sólo funcionará si las baterías tienen exactamente el mismo voltaje y debe evitarse si es posible. **Sin el circuito de protección adecuado**, la fluctuación en el voltaje entre las baterías los forzará a tratar de cargarse unos a otros, disminuyendo su vida útil.
{: .notice--warning}
---
## **Actividad Práctica de medición de componentes.**

### Medición con Multi-tester
- Medir voltaje en la fuente de voltaje controlada
- Medir voltaje en pilas y baterías
- Medir resistencia de Motores KIT y motores de ensayo
- Medir resistencia de potenciómetro
---

## Ley de ohm

Una ley fundamental de la electricidad es la ley de ohm, la que nos dice que la corriente que circula por un conductor es proporcional al voltaje entre los extremos del mismo.

{:refdef: style="text-align: center;"}
  ![ley de ohm](/../assets/images/ohm.png)
{: refdef}

Sin duda una relación muy importante en robótica, sobretodo al dimensionar nuestros actuadores y la cantidad de corriente que necesitar utilizar.

## Tipo Señales (Análoga / Digital)

* **La señal analógica** es aquella que presenta una variación continua con el tiempo, es decir, que a una variación del tiempo le corresponderá una variación del valor de la señal (la señal es continua).

![analoga](/../assets/images/señal-analoga.png)

"Señal de Video Composite RCA"
{: style="color:gray; font-size: 80%; text-align: center;"}


Las señales analógicas predominan en nuestro entorno (variaciones de temperatura, presión, velocidad, distancia, sonido etc.) y son transformadas en señales eléctricas, mediante el adecuado transductor, para su tratamiento electrónico.

* **La señal digital** es aquella que presenta una variación discontinua con el tiempo y que sólo puede tomar ciertos valores discretos. Su forma característica es ampliamente conocida: la señal básica es una onda cuadrada (pulsos).

![digital](/../assets/images/señal-digital.png)
"Señal encendido y apagado"
{: style="color:gray; font-size: 80%; text-align: center;"}

Los parámetros mas importantes son:

  - Altura de pulso (nivel de voltaje)
  - Duración (tiempo que esta encendida/apagada)
  - Frecuencia de repetición (velocidad pulsos por segundo)


## Señales de entrada (Análoga/Digital) y salida (digital/PWM)

En los micro-controladores, tenemos dos tipos de direcciones en los que va la información. Entrada (IN/OUT) y Salida (Sensores/Actuadores).

De esta división vemos que el microcontrolador es capaz de obtener señales análogas como digitales desde sus sensores (input). Pero para la salida solo puede generar señales digitales y el denominado **Modulación por ancho de pulso** o **PWM** por sus siglas en ingles.

**PWM**
  > Es una técnica que logra producir el efecto de una señal analógica sobre una carga, a partir de la variación de la frecuencia y ciclo de trabajo de una señal digital.

El **ciclo de trabajo** describe la cantidad de tiempo que la señal está en un estado lógico alto, como un porcentaje del tiempo total que este toma para completar un ciclo completo. La frecuencia determina que tan rápido se completa un ciclo (por ejemplo: 1000 Hz corresponde a 1000 ciclos en un segundo), y por consiguiente que tan rápido se cambia entre los estados lógicos alto y bajo. Al cambiar una señal del estado alto a bajo a una tasa lo suficientemente rápida y con un cierto ciclo de trabajo, la salida parecerá comportarse como una señal analógica constante cuanto esta está siendo aplicada a algún dispositivo.

<figure class="third">
	<img src="/../assets/images/pwm/PWM1.png" >
	<img src="/../assets/images/pwm/PWM2.png">
	<img src="/../assets/images/pwm/PWM3.png">
	<figcaption> señal con distintos ancho de pulso. </figcaption>
</figure>

La señal PWM se utiliza como técnica para controlar circuitos analógicos. El periodo y el ciclo de trabajo (duty cycle) del tren de pulsos puede determinar la tensión entregada a dicho circuito. Si, por ejemplo, tenemos un voltaje de 5v y lo modulamos con un **ciclo de trabajo** del 10%, obtenemos 0.5V de señal analógica de salida.

{:refdef: style="text-align: center;"}
![duty](/../assets/images/duty-cycle.png)
{: refdef}

Las señales PWM son comúnmente usadas para el control de velocidad de motores DC o ajustar la intensidad de brillo de un LED, etc.
{: .notice--primary}

## Micro-controladores

Para tomar decisiones, un robot utiliza una computadora o un microcontrolador. Para aquellos que no están familiarizados, un microcontrolador es un componente electrónico que puede hacer tres cosas.
  - Puede interpretar entradas del mundo físico,
  - procesar esta información y
  - controlar dispositivos de salida en el mundo físico.

Al ser capaz de percibir y responder al mundo, puede crear un bucle de retro-alimentación entre la salida y la entrada. En otras palabras, puede crear robots y dispositivos que sean verdaderamente interactivos. Otra forma de pensar sobre esto es que los robots pueden prestar atención a lo que está sucediendo a su alrededor, tomar decisiones usando el microcontrolador y luego responder de manera significativa.


{:refdef: style="text-align: center;"}
![micro](/../assets/images/micro.png){:height="70%"
 width="70%"}
{: refdef}
"Diagrama general de partes dentro de un microcontrolador"
{: style="color:gray; font-size: 100%; text-align: center;"}


Algunos elementos generales de los microcontroladores **(no incluido dentro del alcance de este curso)**

Clock
:   Elemento encargado de contar el paso del tiempo. Determina la velocidad de computo.

Memoria y registros
:   Espacio de almacenamiento de valores digitales. El "disco duro" del microcontrolador

ALU
:   Unidad Aritmético Lógica. Elemento encargado de hacer cálculos matemáticos.

Programación en C
:   Código que se carga al microcontrolador y define su Lógica

GPIO
:  Pines de Entrada/Salida de propósito general.


Timers
:   Elementos encargados de contar para determinar elementos de tiempo.

ADC
:   Conversor análogo digital. Transforma las señales del transductor en señales digitales

Sistemas de comunicación
:   Conjunto de protocolos para transferir información a otros micro-controladores

Interrupciones
:   Elementos que proveen interacción con el código a través de una acción externa a este


### El Arduino

El Arduino es un tipo de microcontrolador muy común. Lo que diferencia a Arduino de otros microcontroladores es que es fácil de usar, está bien documentado y tiene una gran comunidad en línea de usuarios. Esto significa que no importa lo que puede salir mal, es probable que pueda encontrar una solución documentada o alguien dispuesto a ayudarle. Esto es extremadamente útil cuando se empieza.

---
Parte Práctica
 - Carga inicial del código
 - Compilación y "transferencia" del código en el microcontrolador

[<i class="fas fa-download"></i> Descargar los codigos y su documentación aqui](/../assets/codigos/codigos.zip){: .btn .btn--success}
---
