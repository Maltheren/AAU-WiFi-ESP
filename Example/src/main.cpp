#include <Arduino.h>
#include <AAUWiFi.h>



// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:

  
  Serial.begin(115200);
  AAUWiFi.begin("MiavMiav@net.aau.dk", "SecretSecretSecret");



  int result = myFunction(2, 3);
}

void loop() {
  // put your main code here, to run repeatedly:
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}