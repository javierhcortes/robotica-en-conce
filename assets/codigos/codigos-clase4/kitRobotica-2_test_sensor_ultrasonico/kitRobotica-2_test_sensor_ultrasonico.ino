/*
Sensor ultrasonido HC-SR04
Crated by Dejan Nedelkovski,

Para instrucciones del armado del kit revise
 http://roboticaenconce.cl/posts/RO101-armado-kit/

 Para comprobar el funcionamiento, mantenga conectando el kitRobotica,
 luego presione Ctrl+Shift+M para abrir el monitor grafico serial
*/

/// Bloque inicialización. Aqui escribimos variables de alcance global.

// definicion pines de funcionamiento
const int trigPin = 2;
const int echoPin = 3;

// definicion variables de alcance global
long duration;
int distance;

/// Bloque de configuración. se ejecuta una sola vez
void setup() {
  pinMode(trigPin, OUTPUT); // Setea el pin de Trigger como salida
  pinMode(echoPin, INPUT); // Setea el pin de Echo como Entrada
  Serial.begin(9600); // Configura la comunicacion serial
}

// ciclo que se ejecuta permanentemente
void loop() {
  // limpia el pin de trigger
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  // setea el pin de triger como alto, por 10 micro segundos
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  //lee el pin de echo. devuelve la onda de sonido que viajo en microsegundos
  duration = pulseIn(echoPin, HIGH);
  
  //calcula la distnacia
  distance= duration*0.034/2;
  
  //imprime la distancia en el monitor serial
  Serial.print("Distance: ");
  Serial.println(distance);
}
