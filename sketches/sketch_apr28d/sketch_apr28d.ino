   #include <Servo.h>

   Servo frontServo;
   Servo rearServo;
   int centerPos = 90; 
   int frontRightUp = 72; 
   int frontLeftUp = 108; 
   int backRightForward = 75; 
   int backLeftForward = 105;
   int d1 = 125;
   int d2 = 65;
   int speed = 150;
  

 void moveForward() 
   {
                frontServo.write(frontRightUp);
                rearServo.write(backLeftForward);
                delay(d1);
                frontServo.write(centerPos);
                rearServo.write(centerPos);
                delay(d2);
                frontServo.write(frontLeftUp);
                rearServo.write(backRightForward);
                delay(d1);

                frontServo.write(centerPos);
                rearServo.write(centerPos);
                delay(d2);
               }

               void setup()
               {
                frontServo.attach(2);
                rearServo.attach(3);
               }

               void loop()
               {
                 moveForward(); 
                 delay(speed); //time between each step taken, speed of walk
               }