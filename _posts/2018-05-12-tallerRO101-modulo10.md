---
title: "Detalle armado Kit 'Robotica en conce v1'"
date: 2018-05-12 13:00:00 -0300
permalink: /posts/RO101-armado-kit/
description : detalle del como armar el robot con los materiales en el kit
header:
  teaser: "assets/images/robots-pelea.jpg"
---

# Detalle y piezas del kit Robot

En este modulo revisaremos como armar nuestro robot con las partes y pieza dentro del Kit.

La base
:   este es la base de nuestro chasis. Los componentes irán encima del acrílico.

{:refdef: style="text-align: center;"}
![1](/../assets/images/robotkit/1.jpg){: height="80%"  width="80%"}
{: refdef}

Soportes del motor
:   estas piezas de acrílico sujetaran los motores DC al chasis

{:refdef: style="text-align: center;"}
![2](/../assets/images/robotkit/2.jpg){: height="80%"  width="80%"}
{: refdef}

Motores DC
:   encargados de hacer girar las ruedas. Irán por debajo del chasis, sujetos con los soportes del motor.

{:refdef: style="text-align: center;"}
![3](/../assets/images/robotkit/3.jpg){: height="80%"  width="80%"}
{: refdef}

Tornillos largos
:   encargados de unir los motores DC a los soportes.

{:refdef: style="text-align: center;"}
![4](/../assets/images/robotkit/4.jpg){: height="80%"  width="80%"}
{: refdef}

Rueda loca y tornillos pequeños
:   unidos a la parte posterior de de la base. se atornilla por debajo.

{:refdef: style="text-align: center;"}
![6](/../assets/images/robotkit/6.jpg){: height="80%"  width="80%"}
{: refdef}

Protoborad
:   Necesaria para conectar los demás componentes
{:refdef: style="text-align: center;"}
![7](/../assets/images/robotkit/7.jpg){: height="80%"  width="80%"}
{: refdef}

Puente H
:   Elemento para controlar la dirección y velocidad de los motores DC
{:refdef: style="text-align: center;"}
![8](/../assets/images/robotkit/8.jpg){: height="80%"  width="80%"}
{: refdef}

Pack de pilas
:   Pilas para energizar los motores DC y los servomotores

{:refdef: style="text-align: center;"}
![9](/../assets/images/robotkit/9.jpg){: height="80%"  width="80%"}
{: refdef}

Bateria
:   Necesaria para alimentar el microcontrolador
{:refdef: style="text-align: center;"}
![10](/../assets/images/robotkit/10.jpg){: height="80%"  width="80%"}
{: refdef}


# Armando el Kit

1) Conecte los motores DC al chasis con los soportes. Procure que los tornilllos no salgan excesivamente del chasis, podría detener la rueda. La cruz del centro del chasis se utiliza para conectar un 'encoder', pero en este kit no esta contemplado su funcionamiento.

{:refdef: style="text-align: center;"}
![5](/../assets/images/robotkit/5.jpg){: height="80%"  width="80%"}
{: refdef}


2) Revise que estén los cables de los motores DC, si no, solde un par de cables de a los motores DC. Puede enrollar la terminación con cinta aislante, para prevenir cortes y mejorar la sujeción mecánica de los cables.

 {:refdef: style="text-align: center;"}
![11](/../assets/images/robotkit/11.jpg){: height="80%"  width="80%"}
{: refdef}

Estos cables pasaran a través del agujero posterior hacia la parte superior del chasis.
Puede conectar las ruedas ahora. ( Rueda loca y ruedas del motor DC)


3) conecte el punte H y este a la protoboard

{:refdef: style="text-align: center;"}
![12](/../assets/images/robotkit/12.jpg){: height="80%"  width="80%"}
{: refdef}

la secuencia de pines del puente H, **conectada a la proto**

{:refdef: style="text-align: center;"}
![13](/../assets/images/robotkit/13-new.jpg){: height="80%"  width="80%"}
{: refdef}

es esta referencia de orden.

| pin1 | pin2 | pin3 | pin4 | pin5 | pin6 |
|------|------|------|------|------|------|
| B-IA | B-IB | GND  | VCC  | A-IA | A-IB |

4) conecte el microcontrolador. deje suficiente espacio para conectar el puerto usb.

{:refdef: style="text-align: center;"}
![14](/../assets/images/robotkit/14.jpg){: height="80%"  width="80%"}
{: refdef}

5) Conecte los cables del punte H al microcontrolador. Siga el patrón del código
del ejemplo de punte H del modulo 'Software y Programación'

```c++

const int AIA = 9;  // (pwm) pin 9 connected to pin A-IA
const int AIB = 5;  // (pwm) pin 5 connected to pin A-IB
const int BIA = 10; // (pwm) pin 10 connected to pin B-IA  
const int BIB = 6;  // (pwm) pin 6 connected to pin B-IB
```

{:refdef: style="text-align: center;"}
![16](/../assets/images/robotkit/16.jpg){: height="80%"  width="80%"}
{: refdef}


6) conecte las pilas y baterías a su circuito

 - Conecte los cables de pilas AA al punte H

 {:refdef: style="text-align: center;"}
 ![17](/../assets/images/robotkit/17.jpg){: height="80%"  width="80%"}
 {: refdef}

 - Conecte la batería de 9[V] al microcontrolador.

 {:refdef: style="text-align: center;"}
 ![18](/../assets/images/robotkit/18.jpg){: height="80%"  width="80%"}
 {: refdef}

 Puede sujetar sus pilas a una cinta doble contacto.


6) Arme la base móvil. Puede elegir no montar el servomotor. solo tendrá el sensor de distancia para determinar la distancia con los obstáculos.

{:refdef: style="text-align: center;"}
![15](/../assets/images/robotkit/15.jpg){: height="80%"  width="80%"}
{: refdef}

Estos sensores van delante de la protoboard.

{:refdef: style="text-align: center;"}
![19](/../assets/images/robotkit/19.jpg){: height="80%"  width="80%"}
{: refdef}

7) Conecte los pines del sensor ultrasonico a los pines 7 y 8 de su microcontrolador.

{:refdef: style="text-align: center;"}
![20](/../assets/images/robotkit/20.jpg){: height="80%"  width="80%"}
{: refdef}

8) Si desea conectar el servomotor y el anillo led, ocupe el pin3 para el servomotor y el pin2 para el anillo led.
Recuerde que esto acortara mas rápido la capacidad de su baterías.

**Listo! Ya tiene todos los componentes para programar su robot. Compruebe por separado cada parte del sus componentes.**

**!Programe su robot a gusto!**
