---
title: "Instalación de drivers Arduino Nano"
date: 2018-04-20 13:00:00 -0300
permalink: /posts/drivers/
description : detalle para instalar drivers en Windows y Mac para el chip CH340C
header:
  teaser: "assets/images/practica.JPG"
---

Empleando los motores de forma creativa, es posible una cantidad inimaginable de automatización robótica. Por lo tanto, es importante comenzar a aprender acerca de los motores si desea construir robots propios. Hay muchos tipos diferentes de motores en el mundo.

Un motor eléctrico es una máquina que transforma la energía eléctrica en energía mecánica. Dicho de otra manera, cuando esta máquina funciona con electricidad, se mueve (normalmente rotando).


Hay tres tipos comunes de motores que usted encontrará típicamente en la robótica. Esto no quiere decir que estos son los únicos tipos de motores que existen, pero son los motores con los que es más probable que usted trabaje.

##motor dc
Los motores de CC giran libremente cuando son alimentados por corriente continua. Estos motores giran libremente cuando se alimentan y no tienen un posicionamiento preciso. Son mejores como motores de accionamiento robóticos. Típicamente se puede identificar un motor de corriente continua porque parece un tubo redondo de metal con un eje en el centro y dos terminales en la parte posterior. Estos motores vienen en una amplia gama de diferentes tamaños y voltajes de funcionamiento.

Para alimentar un motor de CC, todo lo que necesita hacer es conectar un voltaje positivo (dentro de su potencia nominal) a un terminal en el motor, y conectar a tierra al otro terminal.

Para invertir la dirección del motor de CC, simplemente invierta los cables conectados a cada terminal. La razón por la que el motor gira hacia atrás cuando se hace esto es que los polos magnéticos creados dentro de los devanados se invierten cuando se acciona en sentido contrario. Esto fuerza al rotor a girar en sentido contrario para alinearse con los imanes fijos dentro del estator (caja del motor).

#motor paso a apaso
Los motores paso a paso tienen dos o más bobinas separadas que necesitan ser alimentadas en una secuencia particular. Debido a esto, el eje se mueve en pequeños incrementos "escalonados" a medida que la potencia se mueve entre bobinas. Estos motores son buenos para un posicionamiento preciso y control de velocidad, particularmente cuando se necesita un motor que puede girar 360 grados. Usted puede identificar típicamente un motor de pasos porque tiene una caja como la forma y/o tiene 4 o más alambres saliendo de su lado. El tipo más común de motor paso a paso es un motor bipolar, que tiene dos bobinas y cuatro cables (dos para cada cable).

#servomotores
Los servomotores son motores reductores de corriente continua especializados con un tablero de control incorporado que requiere una señal de un microcontrolador. La mayoría de los servos tienen una rotación limitada y son capaces de ser dirigidos para moverse a una posición realmente precisa. Sin embargo, hay servos de rotación continua que no se pueden mover a la posición exacta, pero se pueden programar en términos de velocidad. Usted puede identificar un servo motor porque es similar a una caja de cambios y tiene una cosa parecida a un engranaje unido a su eje.

Un servo es básicamente un tipo especial de motorreductor. Lo que hace que un servo sea diferente de un motorreductor normal es que tiene una placa controladora incorporada y (normalmente) un potenciómetro de retroalimentación (como una perilla de volumen estéreo) para un posicionamiento preciso. Es muy fácil controlar un servo motor utilizando un microcontrolador como un Arduino. Normalmente no se necesita ningún otro circuito de control. Los servos son básicamente un motor muy fácil y fiable para trabajar con ellos.

Dado que un potenciómetro sólo se puede girar hasta ahora, estos motores no pueden girar más allá de su ángulo máximo. Además, si usted mira de cerca a la rueda dentada más grande en el lado derecho de la caja de engranajes, notará una pequeña lengüeta plástica que sobresale de la superficie. Se trata de un tope físico que impide que el servo se extienda más allá de su ángulo de rotación máximo. Los servos estándar están físicamente restringidos para hacer una rotación completa de dos maneras.

Aunque obviamente no se puede utilizar este tipo de servo para conducir el robot, es muy útil para un gran número de aplicaciones. Digamos que estás construyendo un brazo robot, por ejemplo. Puede utilizar un servo para controlar cada articulación. De este modo, puede decirle a cada articulación que se mueva a una posición muy precisa, lo que le permite realizar tareas muy complejas. También puede utilizarlos para hacer cosas como construir arañas robot con múltiples patas andantes, presionar sobre otras cosas como una boquilla rociadora o hacer muñecas espeluznantes animatrónicas.


#reglas

Como regla general, cuanto más grande sea el motor que usted elija, más voltaje y corriente podrá soportar. Esto es importante porque existe una correlación entre tensión y velocidad, y otra entre corriente y par.

En pocas palabras, cuanto más voltaje se aplica a un motor, más rápido gira.

Sin embargo, como toda la electrónica, los motores tienen un rango de voltaje óptimo y nunca deben exceder su voltaje máximo. Esto significa que los motores de corriente continua también tienen una velocidad máxima (a su tensión de funcionamiento máxima).


Para aquellos que no están familiarizados, el par es la cantidad de fuerza de rotación que un motor puede aplicar. Al igual que la velocidad, los motores también tienen una cantidad máxima de par de torsión que pueden producir antes de que se detengan (o dejen de girar). A medida que el motor se encuentra con una resistencia cada vez mayor y se acerca más y más al estancamiento, la cantidad de corriente que consume aumenta


A diferencia de la alimentación de tensión del motor, que se puede variar ajustando la tensión dentro de su rango de funcionamiento, las opciones para ajustar el par motor no son tan fáciles. Usted puede simplemente conseguir un motor más grande y más fuerte para resolver este problema, o usted puede utilizar una caja de cambios.

Una caja de cambios es una colección de marchas dispuestas de tal manera que traduce la velocidad y el par de un motor al aumento o a la disminución (dependiendo de la disposición). El eje del motor se conectará a un extremo de la caja de cambios, y a medida que el motor gira, la rotación se traslada a una velocidad diferente en el eje de salida de la caja de cambios.

Por regla general, cuanto más rápido gira el motor, menos par de torsión proporciona. Los reductores más lentos proporcionan más par que los más rápidos, y viceversa.

## Mecanica
Al acoplar el eje del motor a diferentes sistemas mecánicos, se pueden lograr diferentes tipos de movimiento. Estos conjuntos pueden combinarse en última instancia para crear conjuntos electromecánicos avanzados que resuelven diferentes tareas. Aunque no es del todo robótico, el mecanismo de reproducción de cinta de arriba lo ilustra.

Los siguientes son las principales formas de movimiento que usted logrará a partir de un mecanismo estándar.


l movimiento lineal traduce el movimiento rotacional en movimiento a través de un plano plano plano. Ejemplos clásicos de esto incluyen cintas transportadoras y orugas de tanques. Este sistema utiliza dos o más engranajes o poleas rotativas (una de ellas conectada al eje impulsor y una de giro libre) para tirar de un riel plano alrededor de ellos. Cuanto más lejos esté la distancia entre estos engranajes, más larga será la pista. A medida que la pista se mueve alrededor de los engranajes, se mueve en dirección a través de un plano plano plano.

El movimiento recíproco es un movimiento que se mueve hacia adelante y hacia atrás de manera lineal. Este tipo de movimiento se utiliza a menudo para mover un pistón o en una cerradura de puerta automatizada. Hay muchas maneras diferentes de lograr mecánicamente el movimiento recíproco. Los enfoques comunes incluyen el uso de un yugo (como se muestra en la foto), una leva o enlaces.

El movimiento oscilante involucra cualquier parte que se mueve hacia adelante y hacia atrás a lo largo de un arco. El ejemplo más clásico de esta moción es un metrónomo. Como la mayoría de los otros movimientos, el movimiento oscilante puede ser creado usando una gama de diferentes mecanismos, incluyendo enlaces. Lo más típico es que sólo requiere una parte uno un pivote fijo siendo empujado hacia adelante y hacia atrás por alguna otra parte.

Para lograr los diferentes tipos de movimiento, es necesario utilizar piezas mecánicas. Hay más mecanismos en este mundo de los que yo podría repasar, pero aquí hay algunos comunes que pueden encontrarse en la robótica.
