// Project bereitgestellt von Robbie Sandberg auf https://offsight.de/  

int ldrAnalogPin = 0;
int VibePin = 11;
int ldrReading;
int VibeForce;
 
void setup() {
Serial.begin(9600);
pinModeinMode(VibePin, OUTPUT);
VibeForce = 255;
analogWrite(VibePin, VibeForce);
delay(300);
VibeForce = 0;
}
 
void loop() {
ldrReading = analogRead(ldrAnalogPin);
VibeForce = map(ldrReading, 0, 1023, 0, 255);  analogWrite(VibePin, VibeForce);
delay(50);
}