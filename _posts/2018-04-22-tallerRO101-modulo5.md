---
title: "Modulo practico de Electrónica"
date: 2018-04-22 13:00:00 -0300
permalink: /posts/RO101-modulo5/
description : Detalle de los ejercicios prácticos del modulo4
header:
  teaser: "assets/images/practica.JPG"

---
# Práctica Modulo Electrónica
![Banner](/../assets/images/practica.JPG)

En esta sección veremos al detalle los ejemplos del modulo practico de electrónica.
Mostraremos los ejemplos, el cableado con tu microcontrolador y el código que debes subir a tu placa.

## Documentación a descargar
Para tu comodidad, puedes bajar los códigos antes de comenzar.
[<i class="fas fa-download"></i> Descargar los codigos y su documentación aqui](/../assets/codigos/codigos.zip){: .btn .btn--success}


## Ejemplo 1 "Parpadeo"

Este ejemplo muestra la cosa más simple que puedes hacer con tu Arduino para ver la salida física, parpadea el LED de la placa.

1. Hardware Requerido
  * Cable USB
  * Placa Arduino nano

2. Circuito

Este ejemplo utiliza el LED incorporado que tiene la placa Arduino nano. Por lo tanto no es necesario armar un circuito.

3. Código

Abra su Arduino IDE y copie este código. lo analizaremos en detalle.

```c++
/*
  Parpadeo
  Enciende un LED durante un segundo, luego lo apaga durante un segundo, repetidamente.
  las barras // son un comentario
*/

// la función setup() se ejecuta una vez cuando se presiona
// reset o se enciende la tarjeta
void setup() {
  //Inicializar el pin digital "LED_BUILTIN" (led de la placa) como salida.
  pinMode(LED_BUILTIN, OUTPUT);
}

// la función de loop() se ejecuta una y otra vez para siempre
void loop() {
  digitalWrite(LED_BUILTIN, HIGH); // enciende el LED (HIGH es el nivel de tensión)
  delay(1000); // esperar un segundo
  digitalWrite(LED_BUILTIN, LOW); // apague el LED haciendo que la tensión sea BAJA
  delay(1000); // esperar un segundo
}
```
4. Analis del código

Lo primero que hay que hacer es inicializar el pin que tiene el led. en este caso su nombre es LED_BUILTIN. lo configuramos como salida.

    pinMode(LED_BUILTIN, OUTPUT);


En el loop (lazo) principal, se enciende el LED con la línea:

    digitalWrite(LED_BUILTIN, HIGH);

Esto suministra **5 voltios** al ánodo LED. Esto crea una diferencia de voltaje entre los pines del LED y lo enciende. Luego lo apagas con la línea:

    digitalWrite(LED_BUILTIN, LOW);

Esto hace que el pin LED_BUILTIN vuelva a **0 voltios** y apague el LED. Entre el encendido y el apagado, necesitamos que halla suficiente tiempo para observar el cambio, así que los comandos delay() le decimos a la placa que no haga nada durante 1000 milisegundos, o un segundo.

5. Compilación y carga de código

Por ultimo, dale click a el boton de compilar y de subir, para que el codigo se descargue en la placa
