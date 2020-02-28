

  /**********************************************************************************
**                                                                               **
**                              Array de 8 LEDs                                  **
**                                                                               **
**                                                                               **
**********************************************************************************/
//********** Includes *************************************************************
//********** Variables ************************************************************

    const int f1=2;
    const int f2=3;
    const int f3=4;
    const int f4=5;
    const int f5=6;
    const int f6=7;
    const int f7=8;
    const int f8=9;
    const int f9=10;
    const int p1=11;
    const int p2=12;
    const int p3=13;
    
    const int temps=100;

//********** Setup ****************************************************************
void setup()
  {  
    pinMode(f1,OUTPUT);
    pinMode(f2,OUTPUT);
    pinMode(f3,OUTPUT);
    pinMode(f4,OUTPUT);
    pinMode(f5,OUTPUT);
    pinMode(f6,OUTPUT);
    pinMode(f7,OUTPUT);
    pinMode(f8,OUTPUT);
    pinMode(f9,OUTPUT);
    pinMode(p1,OUTPUT);
    pinMode(p2,OUTPUT);
    pinMode(p3,OUTPUT);
  }
//********** Loop ****************************************************************
void loop()
 {
 
     digitalWrite(f1,HIGH);
     digitalWrite(f2,LOW);
     digitalWrite(f3,LOW);
     digitalWrite(f4,LOW);
     digitalWrite(f5,LOW);
     digitalWrite(f6,LOW);
     digitalWrite(f7,LOW);
     digitalWrite(f8,LOW);
     digitalWrite(f9,LOW);
     digitalWrite(p1,HIGH);
     
     delay(temps);
     
     digitalWrite(f1,LOW);
     digitalWrite(f2,HIGH);
     digitalWrite(p1,HIGH);
     
     delay(temps);
     
     digitalWrite(f2,LOW);
     digitalWrite(f3,HIGH);
     digitalWrite(p1,HIGH);
    
     delay(temps);
     
     digitalWrite(f3,LOW);
     digitalWrite(f4,HIGH);
     digitalWrite(p1,HIGH);
    
     delay(temps);
    
     digitalWrite(f4,LOW);
     digitalWrite(f5,HIGH);
     digitalWrite(p1,HIGH);
    
     delay(temps);
    
     digitalWrite(f5,LOW);
     digitalWrite(f6,HIGH);
     digitalWrite(p1,HIGH);
    
     delay(temps);
    
     digitalWrite(f6,LOW);
     digitalWrite(f7,HIGH);
     digitalWrite(p1,HIGH);
     
     delay(temps);
    
     digitalWrite(f7,LOW);
     digitalWrite(f8,HIGH);
     digitalWrite(p1,HIGH);
     
     delay(temps);
    
     digitalWrite(f8,LOW);
     digitalWrite(f9,HIGH);
     digitalWrite(p1,HIGH);
    
      delay(temps);
      
     digitalWrite(f1,HIGH);
     digitalWrite(f2,LOW);
     digitalWrite(f3,LOW);
     digitalWrite(f4,LOW);
     digitalWrite(f5,LOW);
     digitalWrite(f6,LOW);
     digitalWrite(f7,LOW);
     digitalWrite(f8,LOW);
     digitalWrite(f9,LOW);
     digitalWrite(p1,LOW);
     digitalWrite(p2,HIGH);
     
     delay(temps);
     
     digitalWrite(f1,LOW);
     digitalWrite(f2,HIGH);
     digitalWrite(p2,HIGH);
     
     delay(temps);
     
     digitalWrite(f2,LOW);
     digitalWrite(f3,HIGH);
     digitalWrite(p2,HIGH);
    
     delay(temps);
     
     digitalWrite(f3,LOW);
     digitalWrite(f4,HIGH);
     digitalWrite(p2,HIGH);
    
     delay(temps);
    
     digitalWrite(f4,LOW);
     digitalWrite(f5,HIGH);
     digitalWrite(p2,HIGH);
    
     delay(temps);
    
     digitalWrite(f5,LOW);
     digitalWrite(f6,HIGH);
     digitalWrite(p2,HIGH);
    
     delay(temps);
    
     digitalWrite(f6,LOW);
     digitalWrite(f7,HIGH);
     digitalWrite(p2,HIGH);
     
     delay(temps);
    
     digitalWrite(f7,LOW);
     digitalWrite(f8,HIGH);
     digitalWrite(p2,HIGH);
     
     delay(temps);
    
     digitalWrite(f8,LOW);
     digitalWrite(f9,HIGH);
     digitalWrite(p2,HIGH);
    
    delay(temps);
     
     digitalWrite(f1,HIGH);
     digitalWrite(f2,LOW);
     digitalWrite(f3,LOW);
     digitalWrite(f4,LOW);
     digitalWrite(f5,LOW);
     digitalWrite(f6,LOW);
     digitalWrite(f7,LOW);
     digitalWrite(f8,LOW);
     digitalWrite(f9,LOW);
      digitalWrite(p2,LOW);
     digitalWrite(p3,HIGH);
     
     delay(temps);
     
     digitalWrite(f1,LOW);
     digitalWrite(f2,HIGH);
     digitalWrite(p3,HIGH);
     
     delay(temps);
     
     digitalWrite(f2,LOW);
     digitalWrite(f3,HIGH);
     digitalWrite(p3,HIGH);
    
     delay(temps);
     
     digitalWrite(f3,LOW);
     digitalWrite(f4,HIGH);
     digitalWrite(p3,HIGH);
    
     delay(temps);
    
     digitalWrite(f4,LOW);
     digitalWrite(f5,HIGH);
     digitalWrite(p3,HIGH);
    
     delay(temps);
    
     digitalWrite(f5,LOW);
     digitalWrite(f6,HIGH);
     digitalWrite(p3,HIGH);
    
     delay(temps);
    
     digitalWrite(f6,LOW);
     digitalWrite(f7,HIGH);
     digitalWrite(p3,HIGH);
     
     delay(temps);
    
     digitalWrite(f7,LOW);
     digitalWrite(f8,HIGH);
     digitalWrite(p3,HIGH);
     
     delay(temps);
    
     digitalWrite(f8,LOW);
     digitalWrite(f9,HIGH);
     digitalWrite(p3,HIGH);
 
}


 
//********** Funcions *************************************************************
