/*
    Programador..........: (c) Tiago Machado 
    Data.................: 20/01/2025 
    Observações..........: Motor Servo
*/
 
  //Includes
  #include <Servo.h>

  //Constantes
  const byte POT_PIN = A0, SERVO_PIN = 9;
  const int BAUD_RATE = 9600;

  //Objetos
  Servo myServo;

  //Variaveis
  int potenciometro, angulo;

  //Inicializações
  void setup() {
	  myServo.attach(SERVO_PIN);  

	  pinMode(POT_PIN, INPUT);
  
  	Serial.begin(BAUD_RATE);
}

  //Programa Principal
  void loop() {
  	potenciometro = analogRead(POT_PIN);
	
  	angulo = map(potenciometro, 0, 1023, 0, 179);                             
	  myServo.write(angulo);
	
    Serial.println("Pot:" + String(potenciometro) + "Angulo: " + String(angulo));
}
