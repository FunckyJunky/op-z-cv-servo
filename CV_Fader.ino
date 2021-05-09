#include <Servo.h>
Servo servo1; //servo name "servo1".
Servo servo2; //servo name "servo2".
const int cv1 = 34; //input pin conrol voltage.
const int cv2 = 35; //input pin conrol voltage.
      int a; //cv value
      int b; //cv value
void setup() {
  servo1.attach(13); //output pin contol servo1.
  servo2.attach(12); //output pin contol servo2.
  Serial.begin(9600);} //view in serial plotter. make sure its set to 9600.
void loop() {
  a = analogRead(cv1);
  a = map(a, 0, 2000, 0, 180); //calibration values hardware.
  servo1.write(a);
  b = analogRead(cv2);
  b = map(b, 0, 2000, 0, 180); //calibration values hardware.
  servo2.write(b);
  Serial.println(analogRead (34)); //monitor input.*
  Serial.println(analogRead (35));} //monitor input.*

  //useing serial plotter you can change calibration values for better performance. 
  //this example is calibrated for op-z

  //code by funkyjunky 
