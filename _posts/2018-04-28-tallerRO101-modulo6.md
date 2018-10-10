---
title: "Mecánica y motores"
date: 2018-04-28 13:00:00 -0300
permalink: /posts/RO101-modulo6/
description : detalle del modulo mecánica y motores
header:
  teaser: "assets/images/motors/motores-pre.jpg"
---

# Motores
Es importante comenzar a aprender acerca de los distintos tipos de motores si deseamos construir robots. Si empleamos los motores de forma creativa, es posible crear una gran cantidad de sistemas autónomos.

Veamos algunos conceptos para familiarizarnos con los motores

* **Motor Eléctrico**
> Es una máquina que transforma la energía eléctrica en energía mecánica. Dicho de otra manera, cuando esta máquina funciona con electricidad, se mueve, normalmente rotando.

* **Velocidad**
> es la cantidad de distancia que recorre un objeto en una unidad de tiempo. se mide en revoluciones por minuto

* **Torque**
> es la fuerza que produce rotación.

Hay tres tipos comunes de motores que usted encontrará típicamente en la robótica. Esto no quiere decir que estos son los únicos tipos de motores que existen, pero son los mas utilizados y faciles de adquirir.

## Motores de corriente continua (CC)

Los motores de CC giran libremente cuando son alimentados por corriente continua y no tienen un posicionamiento preciso. Típicamente se puede identificar un motor de corriente continua porque parece un tubo redondo de metal con un eje en el centro y dos terminales en la parte posterior.

{:refdef: style="text-align: center;"}
![velocidad](/assets/images/motors/dcmotor.jpg){: height="40%"  width="40%"}
{: refdef}

Para alimentar un motor de corriente continua, debe conectar un voltaje positivo (dentro de sus valores operacionales) a un terminal en el motor, y conectar a tierra el otro terminal.
{: .notice}

Si deseas invertir la dirección del motor, solo debes invierta los cables conectados a cada terminal.

## Motores de paso a a paso

Los motores paso a paso tienen dos o más bobinas separadas que necesitan ser alimentadas en una secuencia particular. Debido a esto, el eje se mueve en pequeños incrementos "escalonados" a medida que la potencia se mueve entre bobinas.

{:refdef: style="text-align: center;"}
![velocidad](/assets/images/motors/stepper-dentro.jpg){: height="40%"  width="40%"}
{: refdef}

Estos motores son buenos para un posicionamiento preciso y control de velocidad, particularmente cuando se necesita un motor que puede girar 360 grados. Se puede identificar típicamente un motor de paso a paso porque tiene forma de caja y/o tiene 4 o más alambres saliendo del costado. El tipo más común de motor paso a paso es un motor bipolar, que tiene dos bobinas y cuatro cables.

## Servomotores

Un servomotor es básicamente un tipo especial de motorreductor, tiene una placa controladora incorporada y un potenciómetro de retroalimentación para un posicionamiento preciso. Es muy fácil controlar un servomotor usando un microcontrolador como un Arduino. Típicamente no se necesita ningún otro circuito de control. Los servos son básicamente motores muy fáciles y confiables para trabajar

{:refdef: style="text-align: center;"}
![velocidad](/assets/images/motors/servomotor.jpg){: height="60%"  width="60%"}
{: refdef}

Dado que un potenciómetro sólo se puede girar hasta cierto angulo, estos motores no pueden girar más allá de su ángulo máximo. También poseen topes físicos en sus engranes para evitar que el servo se extienda más allá de su ángulo de rotación máximo.

Si estas diseñando un brazo robot, puedes utilizar un servo para controlar cada articulación. De este modo, cada articulación se moverá a una posición muy precisa lo que permite realizar tareas más complejas.
{: .notice}


### Consideraciones generales

Como regla general, cuanto más grande sea el motor que usted elija, más voltaje y corriente podrá soportar. Esto es importante porque existe una relación entre voltaje y velocidad, y otra entre corriente y torque.

{:refdef: style="text-align: center;"}
![velocidad](/assets/images/motors/motor-voltaje.gif){: height="80%"  width="80%"}
{: refdef}

Cuanto más voltaje se aplica a un motor, más rápido gira.
{: style="color:gray; font-size: 100%; text-align: center;"}

Sin embargo, como toda la electrónica, los motores tienen un rango de voltaje óptimo y nunca deben exceder su voltaje máximo. Esto significa que los motores de corriente continua también tienen una velocidad máxima (a su voltaje de funcionamiento máximo).


Estos conceptos llevados a las ecuaciones lo podemos expresar de la siguiente manera.

![ecuaciones-torque-velocidad](/assets/images/grafico_motores.png)


> La relación Torque Velocidad es inversamente proporcional

> La relación Torque Corriente es directamente proporcional

Por regla general, cuanto más rápido gira el motor, menos torque proporciona. 
Y a mayor corriente suministrada, mas torque es capaz de ejercer.

# Mecánica

Al acoplar el eje del motor a diferentes sistemas mecánicos, se pueden lograr diferentes tipos de movimiento. Estos conjuntos pueden combinarse en última instancia para crear conjuntos electromecánicos avanzados que resuelven diferentes tareas.

Los siguientes son las principales formas de movimiento encontradas en robótica

* **El movimiento rotatorio :**

{:refdef: style="text-align: center;"}
![mov](/assets/images/motors/rotatorio.gif){: height="80%"  width="80%"}
{: refdef}

Es el más fácil de lograr porque el eje del motor ya está girando. Típicamente, los sistemas rotatorios implican el aumento o la disminución de la velocidad de rotación del motor. Como ya se ha mencionado, esto también cambia el torque del sistema en relación.

* **El movimiento lineal :**

{:refdef: style="text-align: center;"}
![mov](/assets/images/motors/movlineal.gif){: height="80%"  width="80%"}
{: refdef}


El movimiento lineal traduce el movimiento rotacional en movimiento a través de un plano. Ejemplos clásicos de ello son las cintas transportadoras. Este sistema utiliza dos o más ruedas dentadas o poleas rotativas (una conectada al eje impulsor, y una girando libremente) para tirar de una pista plana alrededor de ellas. A medida que el riel es jalado alrededor de los engranajes, se mueve en cierta dirección

* **El movimiento reciproco :**

{:refdef: style="text-align: center;"}
![mov](/assets/images/motors/movreciproco.gif){: height="80%"  width="80%"}
{: refdef}

Es un movimiento que se mueve hacia adelante y hacia atrás de manera lineal. Este tipo de movimiento se utiliza a menudo para mover un pistón o en una cerradura de puerta automatizada. Hay muchas maneras diferentes de lograr mecánicamente el movimiento recíproco. Los enfoques comunes incluyen el uso de un yugo (como se muestra en la foto)

* **El movimiento oscilante :**

{:refdef: style="text-align: center;"}
![mov](/assets/images/motors/movoscilatorio.gif){: height="80%"  width="80%"}
{: refdef}

Es un movimiento que involucra cualquier parte que se mueve hacia adelante y hacia atrás a lo largo de un arco. El ejemplo más clásico es un metrónomo. El mecanismo más típico es que sólo requiere una parte fija y un pivote empujado hacia adelante y hacia atrás por alguna otra parte.
