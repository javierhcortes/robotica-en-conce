---
title: "Electricidad y electrónica"
date: 2018-04-21 13:00:00 -0300
permalink: /posts/RO101-test/
description : Se abordan temas generales de la electricidad y electrónica
---

![baterias](/../assets/images/baterias2.jpg){:height="50%" width="50%"}


## aqui testeando

<figure>
  <img src="{{ '/assets/images/mm-bundle-install.gif' | relative_url }}" alt="bundle install in Terminal window">
</figure>

[<i class="fas fa-download"></i> Download Minimal Mistakes Theme](https://github.com/mmistakes/minimal-mistakes/archive/master.zip){: .btn .btn--success}

<figure class="third">
	<img src="/../assets/images/pwm/PWM1.png" >
	<img src="/../assets/images/pwm/PWM2.png">
	<img src="/../assets/images/pwm/PWM3.png">
	<figcaption>Caption describing these three images.</figcaption>
</figure>

<figure class="third">
	<img src="/images/image-filename-1.jpg">
	<img src="/images/image-filename-2.jpg">
	<img src="/images/image-filename-3.jpg">
	<figcaption>Caption describing these three images.</figcaption>
</figure>


examples markdown

A variety of common markup showing how the theme styles them.

## Header two


### Header three

#### Header four

##### Header five

###### Header six

## Blockquotes

Single line blockquote:

> Stay hungry. Stay foolish.

Multi line blockquote with a cite reference:

> People think focus means saying yes to the thing you've got to focus on. But that's not what it means at all. It means saying no to the hundred other good ideas that there are. You have to pick carefully. I'm actually as proud of the things we haven't done as the things I have done. Innovation is saying no to 1,000 things.

<cite>Steve Jobs</cite> --- Apple Worldwide Developers' Conference, 1997
{: .small}

## Tables

| Employee         | Salary |                                                              |
| --------         | ------ | ------------------------------------------------------------ |
| [John Doe](#)    | $1     | Because that's all Steve Jobs needed for a salary.           |
| [Jane Doe](#)    | $100K  | For all the blogging she does.                               |
| [Fred Bloggs](#) | $100M  | Pictures are worth a thousand words, right? So Jane × 1,000. |
| [Jane Bloggs](#) | $100B  | With hair like that?! Enough said.                           |

| Header1 | Header2 | Header3 |
|:--------|:-------:|--------:|
| cell1   | cell2   | cell3   |
| cell4   | cell5   | cell6   |
|-----------------------------|
| cell1   | cell2   | cell3   |
| cell4   | cell5   | cell6   |
|=============================|
| Foot1   | Foot2   | Foot3   |

## Definition Lists

Definition List Title
:   Definition list division.

Startup
:   A startup company or startup is a company or temporary organization designed to search for a repeatable and scalable business model.

#dowork
:   Coined by Rob Dyrdek and his personal body guard Christopher "Big Black" Boykins, "Do Work" works as a self motivator, to motivating your friends.

Do It Live
:   I'll let Bill O'Reilly [explain](https://www.youtube.com/watch?v=O_HyZ5aW76c "We'll Do It Live") this one.

## Unordered Lists (Nested)

  * List item one
      * List item one
          * List item one
          * List item two
          * List item three
          * List item four
      * List item two
      * List item three
      * List item four
  * List item two
  * List item three
  * List item four

## Ordered List (Nested)

  1. List item one
      1. List item one
          1. List item one
          2. List item two
          3. List item three
          4. List item four
      2. List item two
      3. List item three
      4. List item four
  2. List item two
  3. List item three
  4. List item four

## Forms

<form>
  <fieldset>
    <legend>Personalia:</legend>
    Name: <input type="text" size="30"><br>
    Email: <input type="text" size="30"><br>
    Date of birth: <input type="text" size="10">
  </fieldset>
</form>

## Buttons

Make any link standout more when applying the `.btn` class.

```html
<a href="#" class="btn--success">Success Button</a>
```

[Default Button](#){: .btn}
[Primary Button](#){: .btn .btn--primary}
[Success Button](#){: .btn .btn--success}
[Warning Button](#){: .btn .btn--warning}
[Danger Button](#){: .btn .btn--danger}
[Info Button](#){: .btn .btn--info}
[Inverse Button](#){: .btn .btn--inverse}
[Light Outline Button](#){: .btn .btn--light-outline}

```markdown
[Default Button Text](#link){: .btn}
[Primary Button Text](#link){: .btn .btn--primary}
[Success Button Text](#link){: .btn .btn--success}
[Warning Button Text](#link){: .btn .btn--warning}
[Danger Button Text](#link){: .btn .btn--danger}
[Info Button Text](#link){: .btn .btn--info}
[Inverse Button](#link){: .btn .btn--inverse}
[Light Outline Button](#link){: .btn .btn--light-outline}
```

[X-Large Button](#){: .btn .btn--primary .btn--x-large}
[Large Button](#){: .btn .btn--primary .btn--large}
[Default Button](#){: .btn .btn--primary }
[Small Button](#){: .btn .btn--primary .btn--small}

```markdown
[X-Large Button](#link){: .btn .btn--primary .btn--x-large}
[Large Button](#link){: .btn .btn--primary .btn--large}
[Default Button](#link){: .btn .btn--primary }
[Small Button](#link){: .btn .btn--primary .btn--small}
```

## Notices

**Watch out!** This paragraph of text has been [emphasized](#) with the `{: .notice}` class.
{: .notice}

**Watch out!** This paragraph of text has been [emphasized](#) with the `{: .notice--primary}` class.
{: .notice--primary}

**Watch out!** This paragraph of text has been [emphasized](#) with the `{: .notice--info}` class.
{: .notice--info}

**Watch out!** This paragraph of text has been [emphasized](#) with the `{: .notice--warning}` class.
{: .notice--warning}

**Watch out!** This paragraph of text has been [emphasized](#) with the `{: .notice--success}` class.
{: .notice--success}

**Watch out!** This paragraph of text has been [emphasized](#) with the `{: .notice--danger}` class.

## HTML Tags

### Address Tag

<address>
  1 Infinite Loop<br /> Cupertino, CA 95014<br /> United States
</address>

### Anchor Tag (aka. Link)

This is an example of a [link](http://apple.com "Apple").

### Abbreviation Tag

The abbreviation CSS stands for "Cascading Style Sheets".
[CSS]: Cascading Style Sheets

### Cite Tag

"Code is poetry." ---<cite>Automattic</cite>

### Code Tag

You will learn later on in these tests that `word-wrap: break-word;` will be your best friend.

### Strike Tag

This tag will let you <strike>strikeout text</strike>.

### Emphasize Tag

The emphasize tag should _italicize_ text.

### Insert Tag

This tag should denote <ins>inserted</ins> text.

### Keyboard Tag

This scarcely known tag emulates <kbd>keyboard text</kbd>, which is usually styled like the `<code>` tag.

### Preformatted Tag

This tag styles large blocks of code.

<pre>
.post-title {
	margin: 0 0 5px;
	font-weight: bold;
	font-size: 38px;
	line-height: 1.2;
	and here's a line of some really, really, really, really long text, just to see how the PRE tag handles it and to find out how it overflows;
}
</pre>

### Quote Tag

<q>Developers, developers, developers&#8230;</q> &#8211;Steve Ballmer

### Strong Tag

This tag shows **bold text**.

### Subscript Tag

Getting our science styling on with H<sub>2</sub>O, which should push the "2" down.

### Superscript Tag

Still sticking with science and Albert Einstein's E = MC<sup>2</sup>, which should lift the 2 up.

### Variable Tag


----


  ----------------


  Una vez que domine los LEDs parpadeantes y fundidos, puede transferir este conocimiento al control de un motor. Sin embargo, no se puede conectar un motor directamente al pin Arduino por dos razones. Primero, el pin Arduino sólo es capaz de proporcionar un poquito de corriente, y un motor es un cerrojo de corriente (especialmente cuando arranca y se detiene). Además, cuando un motor se detiene, produce una corriente de polaridad opuesta a la que está funcionando. Se sabe que esta corriente daña los pines de Arduino y evita que funcionen. Por lo tanto, construir un circuito de amortiguación es útil.

 Para hacer girar el motor hacia atrás, necesitará un puente en H.

  Un H-bridge es un circuito que permite invertir la dirección del motor.

  Esencialmente, un H-bridge consta de cuatro interruptores o transistores. En el ejemplo anterior, hay un interruptor entre cada polo del motor y la tierra. También hay otro juego de interruptores entre cada polo del motor y la potencia.

  Cuando estos interruptores se dibujan en un diagrama, parecen una especie de "H". Así es como el circuito obtiene el nombre de H-bridge.

  Cuando el conjunto de interruptores etiquetados con "A" está cerrado, la potencia fluye a través del motor de tal manera que gira en sentido horario.

  Cuando el otro ajuste "B" está cerrado, la potencia fluye en sentido contrario y el motor gira en sentido contrario a las agujas del reloj.

  Lo importante que hay que tener en cuenta cuando se trata de puentes H es que ambos conjuntos no se pueden cerrar al mismo tiempo, o la alimentación y la tierra se conectarán directamente, y usted tendrá un cortocircuito.

  Además, si mezcla y combina los interruptores como el cierre A1 y B2, también creará un cortocircuito. Es importante que los interruptores "A" se cierren o los interruptores "B". Nunca ambas cosas o alguna combinación de ellas.


  Si usted se ha adelantado y ha construido este circuito, puede usar el siguiente código para verlo en acción:

´´´c++
  void setup () {
    Ajustar los pines digitales como salidas
    pinMode (5, OUTPUT);
    pinMode (6, OUTPUT);  
  }

  void loop () {
    Girar en el sentido de las agujas del reloj
    digitalWrite (5, LOW);   
    digitalWrite (6, HIGH);
    retraso (2000);

    Giro en sentido antihorario
    digitalWrite (5, HIGH);    
    digitalWrite (6, LOW);
    retraso (2000);              
  }
´´´

  Si desea probar el control de la velocidad en ambas direcciones, pruebe con este código PWM-ing the base pins of the transistor:

´´´c++
  void setup () {
    Ajustar los pines digitales como salidas
    pinMode (5, OUTPUT);
    pinMode (6, OUTPUT);  
  }

  void loop () {
    Girar lentamente en el sentido de las agujas del reloj
    digitalWrite (5, LOW);   
    analogWrite (6,80);
    delay (2000);

    Gira más rápido en sentido contrario a las agujas del reloj
    analogWrite (5,180);    
    digitalWrite (6, LOW);
    delay (2000);
  }
´´´
---


Seguramente el código anterior no significa nada para ti si no has programado nunca antes. Sin embargo, quiero que te fijes en el punto y coma final. El compilador interpreta que a partir de ese punto y coma todo lo que escriba será una sentencia nueva, sin nada que ver con la anterior.

En este punto ya podemos hacer una prueba para ver como actúa el compilador. Abre un nuevo programa en el IDE de Arduino y copia el siguiente código. No hace falta ni que conectes la placa a tu ordenador.
//Sin punto y coma
int variable1 = 0

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}

Por último en el editor nos sale una franja roja indicando la línea donde está el error y donde se hace referencia en la consola. Ahora cambia el código y pon el punto y coma al final de la línea 2 y verás como compila.

Como ves no estás sólo. El compilador es muy exigente pero también nos ayuda a corregir los errores.


## Modulo 7 - Mecánica practico día 3
  * puente H con motores, atrás y adelante al presionar botones (cargado en micro-controlador)
  * servomotor moviendo una base donde estén los sensores

# Día 4

## Modulo 8 - Software
 * Lógica de programación
    * variables, operadores, iteración
 * Algoritmos, diagrama de bloque

## Modulo 9 - Practica de Software día 4
  * Armado de chasis con ruedas y Sensores
  * Cargado de varios programas de control ( evasor de obstáculos - Giro constante)
https://www.arduino.cc/reference/en/  

https://playground.arduino.cc/Main/InterfacingWithHardware#microBox

https://github.com/microcodesv/Acordeon-arduino/blob/master/Acordeon%20Arduino.pdf
