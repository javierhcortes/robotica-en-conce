---
title: "Introducción a la robótica"
date: 2018-04-15 13:00:00 -0300
permalink: /posts/RO101-modulo2/
description : Se abordan temas generales de la robótica
---
# __Introducción a la Robótica__

![Banner](/../assets/images/240x120.jpg)

Bienvenido al taller **Robótica para principiantes**, donde aprenderemos como fabricar nuestro primer robot. No es necesario tener experiencia previa o ser un genio para comenzar, solo necesitamos motivación y algunos materiales!

Es fácil asombrarse por la robótica, porque incorpora amplia gama de habilidades, en múltiples disciplinas, pero lo importante es no intimidarse y trabajar en equipo!

En menos de un mes aprenderemos lo básico para empezar a construir robots por nuestra propia cuenta.

 # __¿Qué es un robot?__

Antes de comenzar a construir un robot, detengamos nos a pensar que es un robot.

Existen muchas escuelas de robótica y también muchos pensamientos sobre lo que constituye un robot. Por el bien del consenso, a continuación presentamos la definición que usaremos en este taller.

    Robot: un dispositivo electromecánico que es capaz de reaccionar
    de algún modo a su entorno y tomar decisiones o acciones autónomas
    para lograr una tarea específica.

Esto significa que una tostadora, una lámpara o un automóvil no se considerarían robots ya que no tienen forma de percibir su entorno. Por otro lado, una aspiradora que puede navegar por una habitación o un panel solar que busca el sol, puede considerarse como un sistema robótico.



# __Tipos de Robots__

1) **Robots terrestres con ruedas, orugas y patas**

![1](/../assets/images/tipos-robots/robot-ruedas.jpg)

Los robots terrestres, especialmente los de ruedas, son los robots móviles más populares entre los principiantes, ya que por lo general requieren la menor inversión a la vez que proporcionan una exposición significativa a la robótica. Por otro lado, el tipo más complejo de robots es el humanoide (semejante a un humano), ya que requiere muchos grados de libertad y sincronización del movimiento de muchos motores, y utiliza muchos sensores.

Ventajas
  * Por lo general, de bajo costo en comparación con otros métodos
  * Diseño y construcción sencillos
  * Abundancia de opciones
  * Excelente opción para principiantes

Desventajas

  * Puede perder tracción (deslizamiento)
  * Pequeña área de contacto (sólo un pequeño rectángulo o línea debajo  cada rueda está en contacto con el suelo)

2) **Robots Aéreos**

![2](/../assets/images/tipos-robots/robot-aereo.jpg)


 Los UAV (vehículo autónomo no tripulado por sus siglas en ingles) son muy atractivos y está totalmente dentro de la capacidad de muchos entusiastas de los robots. Sin embargo, las ventajas de construir este tipo de robots, especialmente si usted es un principiante, todavía no han superado los riesgos. Al considerar un vehículo aéreo, la mayoría de los aficionados todavía utilizan vehículos aéreos comerciales (drones) controlados por control remoto.

 Ventajas
  * Los aviones tele-dirigidos existen desde hace décadas (por lo que existe una gran comunidad, al menos para los mecánicos).
  * Excelente para la vigilancia

Desventajas
  * Toda la inversión puede perderse en un solo accidente.
  * La Comunidad robótica es limitada para proporcionar ayuda para el control autónomo. (creciente en los últimos años)

3) **Barcos acuáticos, submarinos y robots nadadores**

![3](/../assets/images/tipos-robots/robot-submarino.jpg)


Un número cada vez mayor de aficionados, instituciones y empresas están desarrollando vehículos submarinos no tripulados. Todavía hay muchos obstáculos que superar para hacer que los robots subacuáticos sean atractivos para la comunidad robótica en general, aunque en los últimos años varias empresas han comercializado "robots" de limpieza de piscinas. Los vehículos submarinos pueden utilizar lastre (aire comprimido y compartimentos inundados), propulsores, cola y aletas o incluso aletas para sumergirse. Otros robots acuáticos como los limpia fondos son productos comerciales útiles.

Ventajas
  * La mayor parte de nuestro planeta es agua, por lo que hay mucho que explorar y descubrir
  * El diseño está casi garantizado como único
  * Puede ser utilizado y/o probado en una piscina

Desventajas

  * El robot puede perderse de muchas maneras (hundiéndose, goteando, enredado...)
  * A la mayoría de los componentes electrónicos no les gusta el agua (también hay que tener en cuenta que el agua cae sobre los componentes electrónicos cuando se accede al robot después de una inmersión).
  * Superar profundidades de 10 metros o más puede requerir una investigación e inversión significativas.
  * Comunidad robótica muy limitada para proporcionar ayuda
  * Opciones limitadas de comunicación inalámbrica


4) **Brazos robóticos estacionarios y manipuladores**

![4](/../assets/images/tipos-robots/robot-brazo.jpg)


Aunque no entran en la categoría de robótica móvil, el campo de la robótica comenzó esencialmente con brazos roboticos con efectores (dispositivos que se adhieren al extremo de un brazo, como pinzas, electroimanes, etc.). Los brazos y las pinzas son la mejor manera de que un robot interactúe con el entorno que está explorando. Los brazos robóticos simples pueden tener un solo movimiento, mientras que los brazos más complejos pueden tener una docena o más de grados de libertad únicos.

Ventajas
  * Posibilidades de diseño desde muy simple hasta muy complejo
  * Fácil de hacer un brazo robot de 3 o 4 grados de libertad (dos articulaciones y base giratoria)

Desventajas

  * Estacionario a menos que esté montado en una plataforma móvil
  * El costo de construcción es proporcional a la capacidad de articulación

# __Partes de un Robots__

Para que un robot sea capaz de cumplir una tarea asignada, necesita en teoría tres tipos de elementos para poder lograrla

  * Sensores
  * actuadores
  * micro-controladores o procesadores

1) **Sensores**

Los sensores son elementos encargados de observar el mundo alrededor del robot. La información que nos entrega, sera de manera directa o indirecta la única forma de determinar si estamos llevando a cabo la tarea asignada.

![sensores](/../assets/images/tipos-robots/sensores-general.jpg)

Existe gran variedad de sensores para robotica en el mercado, siendo algunos muy fáciles de adquirir. Para comparar los sensores de un mismo tipo entre si, recurriremos a los conceptos de precisión y exactitud.

![sensores-info](/../assets/images/tipos-robots/sensores-info.png)

- *Precisión :* se refiere a la dispersión del conjunto de valores obtenidos de mediciones repetidas de una magnitud

- *Exactitud :* se refiere a cuán cerca del valor real se encuentra el valor medido.

Dependiendo de el tipo de sensor y la magnitud que deseamos medir, habrán otros conceptos como la sensibilidad, el rango, la atenuación, entre otros.

2) **Actuadores**

Los actuadores o efectores, son los elementos que nos permiten ejecutar una tarea. Dentro de los mas comunes podemos asociar a los motores, las herramientas (tipo garra o rotatorias), los sistemas de desligue de información (paneles, parlantes) entre otros.

3) **micro-controladores o procesadores**

Estos elementos son los encargados de orquestar a los sensores y actuadores para lograr la tarea definida. son el cerebro del robot y definen la capacidad de computo para resolver una tarea.

![micros](/../assets/images/tipos-robots/placas.jpeg)

Existen en gran variedad, cada una adaptándose a las necesidades de computo, de cantidad de entradas/salidas y factores de forma.

# __Tipos de control__

Se refiera a la capacidad de determinar si una variable se puede manipular, ya sea para

 - Controlar una variable
 - Controlar una secuencia de eventos
 - Controlar si ocurre o no un evento

 En general se utilizan dos tipos de controles en robótica, denominados de lazo abierto y lazo cerrado.

 ![control](/../assets/images/tipos-robots/control-mejor.jpg)

 Si bien el sistema de control a lazo cerrado permite disminuir el error de una variable controlada, este no es requisito en todos los sistemas robotizados.
 Por ejemplo una impresora 3D trabaja a lazo abierto, pero todos los drones (incluso los de juguete) tienen sistemas de control a lazo cerrado para reconocer el error en su velocidad y posición

# __Partes del Kit__

A continuacion revisaremos el kit, los clasificaremos de acuerdo a su tipo y detallaremos algunas de sus características mas importantes

- Arduino nano
- Mini-Protoboard
- Servomotor sg90
- 2 x Motor DC con caja reductora y ruedas
- Puente H de dos canales
- Sensor Tactil - Infrarojo - Ultrasónicos - Final de carril
- Anillo LED RGB direccionable
- Portapilas y pilas
