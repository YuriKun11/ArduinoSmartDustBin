#include <Servo.h>

bool humanDetected = false; 

Servo servoMotor; // Declare Servo object
float checkdistance() {
  digitalWrite(12, LOW);
  delayMicroseconds(2);
  digitalWrite(12, HIGH);
  delayMicroseconds(10);
  digitalWrite(12, LOW);
  float distance = pulseIn(13, HIGH) / 58.00;
  delay(10);
  return distance;
}

void setup() {
  pinMode(12, OUTPUT);
  pinMode(13, INPUT);
  Serial.begin(9600);
  servoMotor.attach(10); // Naka attach ang servo ko sa pin 10
}

void loop() {
  float distance = checkdistance();
  
  if (distance <= 16.0 && !humanDetected) {
    Serial.println("Item Detected");
    humanDetected = true; // Set flag to true

    servoMotor.write(180); // 0 degrees para sa left then 180 sa right
    delay(5000); // Wait for 5 seconds
    servoMotor.write(90); // Return servo to center position (90 degrees)
    delay(500); // Delay for servo to reach the center position
    
  } else if (distance > 16.0 && humanDetected) {
    humanDetected = false; // Reset 
  }
  
  delay(100);
}
