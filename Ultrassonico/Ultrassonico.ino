int trigPin = 8;  // Pino Trigger do sensor
int echoPin = 9;  // Pino Echo do sensor

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  // Gera o pulso Trig
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Mapeia o pino Echo
  long duration = pulseIn(echoPin, HIGH);

  // Calcula a distância
  long distancia = (duration * 0.0344) / 2;  // Velocidade do som (m/s)

  // Exibe a distância no monitor serial
  Serial.print("Distancia: ");
  Serial.print(distancia);
  Serial.println(" cm");

  delay(100);
}