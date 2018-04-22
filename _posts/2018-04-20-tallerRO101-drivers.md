---
title: "Instalación de drivers Arduino Nano"
date: 2018-04-20 13:00:00 -0300
permalink: /posts/drivers/
description : detalle para instalar drivers en Windows y Mac para el chip CH340C
---

## Instalación de drivers Arduino nano - CHIP CH340

A continuacion se detallan los repositorios que continen los drivers para sus arduinos nano, que tienen el chip 340C


## Para usuarios de sistema operativo windows

1 ) Ir al siguiente enlace [Repositorio driver WINDOWS](https://github.com/HobbyComponents/CH340-Drivers)

2) Descargar el repositorio con el botón **"Clone or download"** y seleccionar **"Download as ZIP"**

3) Descomprimir el archivo descargado, acceder a la carpeta **"CH341SER"**, luego acceder a **"DRVSETUP64"** para sistemas operativos  de 64bits (en general esta será su opción).

4) Doble click al archivo "DRVSETUP64.exe" e instalar.

5) Al terminar la instalación, verificar que el driver esta instalado en **"Administrador de dispositivos"**

## Para usuario de sistema operativo mac

1 ) Ir al siguiente enlace [Repositorio driver mac](https://github.com/MPParsley/ch340g-ch34g-ch34x-mac-os-x-driver)

2) Descargar el repositorio con el botón **"Clone or download"** y seleccionar **"Download as ZIP"**

3) En el caso de tener un driver anterior, antes de instalar seguir las instrucciones de desintalacion del archivo **"README.md"** del mismo repositorio

4) Descomprimir el archivo descargado e instalar "CH34x_Install_V1.3.pkg"

## Comprobación del funcionamiento de la placa

1) Conectar el Arduino nano al puerto usb (no es necesario soladar los pines)

2) Comprobar que el led de la placa con el nombre "PWD" este encendido.
Esto indicara que el voltaje del puerto usb esta llegando a la placa.

3)Abrir el Arduino IDE (programa para cargar los codigos)

4)Elegir del menú superior FILE -> Examples -> 01.Basics -> Blink.
Se abrirá una nueva ventana con el código.

5) En esa nueva ventana, ir al menú superior, elegir Tools->Board->Arduino Nano

6) Seleccionar en Tools->Processor->ATmega328P

7) Seleccionar en Tools->Port-> COM, donde el puerto com será el puerto que tengan conectado.

 8) En la pantalla principal, hacer click en el icono de "check". Con esto empezara la compilación.

 9) Cuando termine la compilación, elegir la flecha hacia la derecha, que cargara sus códigos a la placa.

 10) Visualizar en su arduino el parpadeo del led cada 1 segundo
