
#include <Servo.h>

Servo myservo1;  

Servo myservo2;  
int pos = 0;   
void setup() {

  delay(3000); 
  
  myservo1.attach(9);  
    myservo2.attach(10);  


//myservo1.write(0);  
//myservo2.write(90);  



    float Theta1 =90;
    float Theta2= 0;

    float Theta1_R = Theta1+6;
    float Theta1_L =180- Theta1+6;

    
    float Theta2_R = 90+Theta2+6;
    float Theta2_L = 90-Theta2+6;

    
myservo1.write(Theta1_R);  
myservo2.write(Theta2_R);  

/*
//if( digitalRead(2)==HIGH){
  
   // Fot Right Servo1  #####################################
  for (pos =0; pos <= Theta1_R; pos += 1) { 
    myservo1.write(pos);             
    delay(50);  }

delay(200);
    // Fot Right Servo2  #####################################
if (Theta2_R>=90){
 for (pos =90; pos <= Theta2_R; pos += 1) { 
    myservo2.write(pos);             
    delay(30);  }
}
else if (Theta2_R<90){
 for (pos =90; pos >= Theta2_R; pos -= 1) { 
    myservo2.write(pos);             
    delay(30);  }
}
    

    
  

 

  
  
  }

  else if (digitalRead(2)==LOW){

//For Lift Servo1 #################################
    
     for (pos =0; pos <= Theta1_L; pos += 1) { 
    myservo1.write(pos);             
    delay(50);  } 
    
    


     //For Lift Servo299 #################################
    
   
if (Theta2_L>=90){
 for (pos =90; pos <= Theta2_L; pos += 1) { 
    myservo2.write(pos);             
    delay(30);  }
}
else if (Theta2_L<90){
 for (pos =90; pos >= Theta2_L; pos -= 1) { 
    myservo2.write(pos);             
    delay(30);  }
}

    
  }
    
  */
}


void loop() {
  /*  for (pos =180 ; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(25);                       // waits 15ms for the servo to reach the position
  }
  for (pos =0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(25);                       // waits 15ms for the servo to reach the position
  }*/

}
