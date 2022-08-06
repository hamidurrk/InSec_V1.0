   #include <Servo.h>

   Servo frontServo;
   Servo rearServo;
   int centerTurnPos = 81; 
   int frontTurnRightUp = 63; 
   int frontTurnLeftUp = 117; 
   int backTurnRightForward = 66; 
   int backTurnLeftForward = 96;

   void moveTurnLeft() 
   {
    frontServo.write(frontTurnRightUp);
    rearServo.write(backTurnLeftForward);
    delay(125);
    frontServo.write(centerTurnPos);
    rearServo.write(centerTurnPos);
    delay(65);
    frontServo.write(frontTurnLeftUp);
    rearServo.write(backTurnRightForward);
    delay(125);
    frontServo.write(centerTurnPos);
    rearServo.write(centerTurnPos);
    delay(65);
   }

   void setup()
   {
    frontServo.attach(2);
    rearServo.attach(3);
   }

   void loop()
   {
    moveTurnLeft(); 
    delay(150); //time between each step taken, speed of walk
   }