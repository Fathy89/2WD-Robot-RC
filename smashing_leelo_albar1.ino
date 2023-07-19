char reading; 
int en1  =9 ; 
int en2  = 10 ; 
int In1 =  3; 
int In2 =  4; 
int In3 =  5; 
int In4 =  6; 

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); 
for (int i =3; i<7 ; i++)
pinMode(i,OUTPUT); 
pinMode(9,INPUT); 
pinMode(10,INPUT); 
}

void loop() {
  
  // put your main code here, to run repeatedly:
if(Serial.available()>=1);{
reading = Serial.read(); 
  switch (reading){
case 'f' :
analogWrite(en1,170);
analogWrite(en2,170);
digitalWrite(In1,1);
digitalWrite(In2,0);
digitalWrite(In3,1);
digitalWrite(In4,0);
Serial.println(" the motor is moving forward "); 
break ; 
case 'b': 

analogWrite(en1,170);
analogWrite(en2,170);
digitalWrite(In1,0);
digitalWrite(In2,1);
digitalWrite(In3,0);
digitalWrite(In4,1);
Serial.println(" the motor is moving back "); 
break ; 
case 'r': 

analogWrite(en1,170);
analogWrite(en2,170);
digitalWrite(In1,0);
digitalWrite(In2,0);
digitalWrite(In3,1);
digitalWrite(In4,0);
Serial.println(" the motor is moving right"); 
break ; 

case 'l': 

analogWrite(en1,170);
analogWrite(en2,170);
digitalWrite(In1,1);
digitalWrite(In2,0);
digitalWrite(In3,0);
digitalWrite(In4,0);
Serial.println(" the motor is moving left "); 
break ; 
case 's':
analogWrite(en1,170);
analogWrite(en2,170);
digitalWrite(In1,0);
digitalWrite(In2,0);
digitalWrite(In3,0);
digitalWrite(In4,0);
Serial.println(" the motor is not moving  "); 
break ; 
   
               
  }
}


}
