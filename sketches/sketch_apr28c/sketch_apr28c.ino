   #include <Servo.h>

   Servo myServo;
   int delayTime = 1000; 

   void setup()
   {
    myServo.attach(2);
   }

   void loop()
   {
    myServo.write(90); 
    delay(delayTime); 

    myServo.write(180); 
    delay(delayTime);

    myServo.write(90);
    delay(delayTime);
    myServo.write(0);
    delay(delayTime);
   }