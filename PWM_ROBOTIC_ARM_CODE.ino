//REQUIRED LIBRARIES FOR THE OPERATION

#include<Wire.h>
#include <Adafruit_PWMServoDriver.h>

//DEFINING THE SERVO MOTOR MIN ANGLE(0 DEG) AND MAX ANGLE(180 DEG)

/*NOTE :
        IN THIS OPERATION WE ARE CONSIDERING THE MINIMUM ANGLE AS 125 DEG AND MAXIMUM ANGLE AS 575 DEG 
        EACH ANGLE IS INCREMENTED BY 2.5 DEG */

#define SERVOMIN 125
#define SERVOMAX 575

//DEFINING THE SERVO MOTORS POSITION ACCORDING TO THE PULSE WIDTH MODULATION(PWM SERVO DRIVER)

#define servo1 0 
#define servo2 1
#define servo3 2
#define servo4 3


Adafruit_PWMServoDriver root = Adafruit_PWMServoDriver(0x40);
uint8_t servonum = 0;


void setup() {
  // put your setup code here, to run once:
  
  root.begin();
  //SETTING THE FREQUENCY OF THE PWM SERVO DRIVER
  
  root.setPWMFreq(60);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  //FORWARD ACTION OF SERVO1
  
  for(int position1 = 125 ; position1 <= 575 ; position1+=2.5){
    root.setPWM(servo1,0,position1);
    delay(20);
  }
  delay(1000);

  //FORWARD ACTION OF SERVO2
  
  for(int position2 = 125 ; position2<=200 ; position2+=2.5){
    root.setPWM(servo2, 0, position2);
    delay(20);
  }
  delay(1000);

  //FORWARD ACTION OF SERVO3
  
  for(int position3 = 350 ; position3>=275 ; position3-=2.5){
    root.setPWM(servo3, 0, position3);
    delay(20);
  }
  delay(1000);

  //FORWARD ACTION OF SERVO4
  
  for(int position4 = 237.5 ; position4>=175 ; position4-=2.5){
    root.setPWM(servo4, 0, position4);
    delay(20);
  }
  delay(1000);

  //BACKWARD ACTION OF SERVO4
  
  for(int position4 = 175 ; position4<=237.5 ; position4+=2.5){
    root.setPWM(servo4, 0, position4);
    delay(20);
  }
  delay(1000);

  //BACKWARD ACTION OF SERVO3
  
  for(int position3 = 275 ; position3<=350 ; position3+=2.5){
    root.setPWM(servo3, 0, position3);
    delay(20);
  }
  delay(1000);

  //BACKWARD ACTION OF SERVO2
  
  for(int position2 = 200 ; position2>=125 ; position2-=2.5){
    root.setPWM(servo2, 0, position2);
    delay(20);
  }
  delay(1000);

  //BACKWARD ACTION OF SERVO1
  
  for(int position1 = 575 ; position1>=125 ; position1-=2.5){
    root.setPWM(servo1, 0, position1);
    delay(20);
  }
  delay(1000);

  //FORWARD ACTION OF SERVO2
  
  for(int position2 = 125 ; position2<=200 ; position2+=2.5){
    root.setPWM(servo2, 0, position2);
    delay(20);
  }
  delay(1000);

  //FORWARD ACTION OF SERVO3
  
  for(int position3 = 350 ; position3>=275 ; position3-=2.5){
    root.setPWM(servo3, 0, position3);
    delay(20);
  }
  delay(1000);

  //FORWARD ACTION OF SERVO4
  
  for(int position4 = 237.5 ; position4>=175 ; position4-=2.5){
    root.setPWM(servo4, 0, position4);
    delay(20);
  }
  delay(1000);

  //BACKWARD ACTION OF SERVO4
  
  for(int position4 = 175 ; position4<=237.5 ; position4+=2.5){
    root.setPWM(servo4, 0, position4);
    delay(20);
  }
  delay(1000);

  //BACKWARD ACTION OF SERVO3
  
  for(int position3 = 275 ; position3<=350 ; position3+=2.5){
    root.setPWM(servo3, 0, position3);
    delay(20);
  }
  delay(1000);

  //BACKWARD ACTION OF SERVO2
  
  for(int position2 = 200 ; position2>=125 ; position2-=2.5){
    root.setPWM(servo2, 0, position2);
    delay(20);
  }
  delay(10000); 
}
