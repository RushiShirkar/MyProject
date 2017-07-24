#define ir1 0
#define ir2 2
#define ir3 3
#define ir4 4
#define ir5 5
#define ir6 A0
#define ir7 A1
#define ir8 A2
#define ir9 A3
#define ir10 A4

int counter1=0;
int counter2=0;
int counter3=0;
int counter4=0;                                                                         
int i;

int fan1=18;
int fan2=19;
int fan3=20;
int fan4=21;

int light1=8;       
int light2=9;       
int light3=10;       
int light4=11;
       
void setup()
{
  Serial.begin(9600);
  pinMode(ir1, INPUT);
  pinMode(ir2, INPUT);
  pinMode(ir3, INPUT);
  pinMode(ir4, INPUT);
  pinMode(ir5, INPUT);
  pinMode(ir6, INPUT);
  pinMode(ir7, INPUT);
  pinMode(ir8, INPUT);
  pinMode(ir9, INPUT);
  pinMode(ir10, INPUT);
  pinMode(fan1,OUTPUT);
  pinMode(fan2,OUTPUT);
  pinMode(fan3,OUTPUT); 
  pinMode(fan4,OUTPUT);
  pinMode(light1,OUTPUT);
  pinMode(light2,OUTPUT);
  pinMode(light3,OUTPUT);
  pinMode(light4,OUTPUT);

  pinMode(22,OUTPUT);
  pinMode(23,OUTPUT);
  pinMode(24,OUTPUT);
  
  pinMode(26,OUTPUT);
  pinMode(27,OUTPUT);
  pinMode(28,OUTPUT);
  pinMode(29,OUTPUT);

  pinMode(32,OUTPUT);
  pinMode(33,OUTPUT);
  pinMode(34,OUTPUT);
  pinMode(35,OUTPUT);

  pinMode(40,OUTPUT);
  pinMode(41,OUTPUT);
  pinMode(42,OUTPUT);
  pinMode(43,OUTPUT);
}

void loop()
{
  
  if(!digitalRead(ir1))
  {  
    counter1++;
    delay(1000);
    Serial.println(counter1);
    Serial.println(counter2);
    Serial.println(counter3);
    Serial.println(counter4);
    Serial.println("\n");
  }
  if(!digitalRead(ir2))
  {  
    counter1--;
    delay(1000);
    Serial.println(counter1);
    Serial.println(counter2);
    Serial.println(counter3);
    Serial.println(counter4);
    Serial.println("\n");
  }
  
  if(!digitalRead(ir3))
  {
    counter2++;
    counter1--;
    delay(1000);  
    Serial.println(counter1);
    Serial.println(counter2);
    Serial.println(counter3);
    Serial.println(counter4);
    Serial.println("\n");
  }
  if(!digitalRead(ir4))                                                           
  {
  counter2--;
  counter1++;
  delay(1000);
  Serial.println(counter1);
  Serial.println(counter2);
  Serial.println(counter3);
  Serial.println(counter4);
  Serial.println("\n");
  }

  if(!digitalRead(ir5))
  {
    counter3++;
    counter2--;
    delay(1000);
    Serial.println(counter1);
    Serial.println(counter2);
    Serial.println(counter3);
    Serial.println(counter4);
    Serial.println("\n");
  }

  if(analogRead(A0)>450)
  {
  counter2++;
  counter3--;
  delay(1000);
  Serial.println(counter1);
  Serial.println(counter2);
  Serial.println(counter3);
  Serial.println(counter4);
  Serial.println("\n");
  }

  //-*Serial.println(analogRead(A1));
  if(analogRead(A1)>450)
  {
  counter3--;
  counter4++;  
  delay(1000);
  Serial.println(counter1);
  Serial.println(counter2);
  Serial.println(counter3);
  Serial.println(counter4);
  Serial.println("\n");
  }

  if(analogRead(A2)>450)
  {
  counter3++;
  counter4--;  
  delay(1000);
  Serial.println(counter1);
    Serial.println(counter2);
    Serial.println(counter3);
    Serial.println(counter4);
    Serial.println("\n");
  }

  if(analogRead(A3)>450)
  {
  counter1++;
  counter4--;  
  delay(1000);
  Serial.println(counter1);
    Serial.println(counter2);
    Serial.println(counter3);
    Serial.println(counter4);
    Serial.println("\n");
  }

  if(analogRead(A4)>450)
  {
  counter4++;
  counter1--;
  delay(1000);
  Serial.println(counter1);
    Serial.println(counter2);
    Serial.println(counter3);
    Serial.println(counter4);  
    Serial.println("\n");
  }
  




//..................................light & fan..........................................
      //counnter1
      if(counter1>0)
      {
      digitalWrite(fan1,HIGH);
      digitalWrite(light1,HIGH);  
      }
      else
      {
      digitalWrite(fan1,LOW);
      digitalWrite(light1,LOW);  
      }

      //counnter2
      if(counter2>0)
      {
      digitalWrite(fan2,HIGH);
      digitalWrite(light2,HIGH);  
      }
      else
      {
      digitalWrite(fan2,LOW);
      digitalWrite(light2,LOW);  
      }

      //counnter3
      if(counter3>0)
      {
      digitalWrite(fan3,HIGH);
      digitalWrite(light3,HIGH);  
      }
      else
      {
      digitalWrite(fan3,LOW);
      digitalWrite(light3,LOW);  
      }

      //counnter4
      if(counter4>0)
      {
      digitalWrite(fan4,HIGH);
      digitalWrite(light4,HIGH);  
      }
      else
      {
      digitalWrite(fan4,LOW);
      digitalWrite(light4,LOW);  
      }



//...........................................................PC in counter 1....................................
     
          
      if(counter1==1)
      {
      digitalWrite(22,HIGH);  
      digitalWrite(23,LOW);
      digitalWrite(24,LOW);
      }
      if(counter1==2)
      {
      digitalWrite(22,HIGH);
      digitalWrite(23,HIGH); 
      digitalWrite(24,LOW);
      }
      if(counter1>=3)
      {
      digitalWrite(22,HIGH);
      digitalWrite(23,HIGH);
      digitalWrite(24,HIGH);
      }
      if(counter1==0)
      {
      digitalWrite(22,LOW);
      digitalWrite(23,LOW); 
      digitalWrite(24,LOW); 
      }
 
//...........................................................PC in counter 2....................................
      if(counter2==1)
      {
      digitalWrite(26,HIGH);  
      digitalWrite(27,LOW);
      digitalWrite(28,LOW);
      digitalWrite(29,LOW);
      }
      if(counter2==2)
      {
      digitalWrite(26,HIGH);  
      digitalWrite(27,HIGH);
      digitalWrite(28,LOW);
      digitalWrite(29,LOW);
      }
      if(counter2==3)
      {
      digitalWrite(26,HIGH);  
      digitalWrite(27,HIGH);
      digitalWrite(28,HIGH);
      digitalWrite(29,LOW);
      }
      if(counter2>=4)
      {
       digitalWrite(26,HIGH);  
      digitalWrite(27,HIGH);
      digitalWrite(28,HIGH);
      digitalWrite(29,HIGH);
      }
      if(counter2==0)
      {
      digitalWrite(26,LOW);  
      digitalWrite(27,LOW);
      digitalWrite(28,LOW);
      digitalWrite(29,LOW);
      }

//...........................................................PC in counter 3....................................
      if(counter3==1)
      {
      digitalWrite(32,HIGH);  
      digitalWrite(33,LOW);
      digitalWrite(34,LOW);
      digitalWrite(35,LOW);
      }
      if(counter3==2)
      {
      digitalWrite(32,HIGH);  
      digitalWrite(33,HIGH);
      digitalWrite(34,LOW);
      digitalWrite(35,LOW);
      }
      if(counter3==3)
      {
      digitalWrite(32,HIGH);  
      digitalWrite(33,HIGH);
      digitalWrite(34,HIGH);
      digitalWrite(35,LOW);
      }
      if(counter3>=4)
      {
      digitalWrite(32,HIGH);  
      digitalWrite(33,HIGH);
      digitalWrite(34,HIGH);
      digitalWrite(35,HIGH);
      }
      if(counter3==0)
      {
      digitalWrite(32,LOW);  
      digitalWrite(33,LOW);
      digitalWrite(34,LOW);
      digitalWrite(35,LOW);
      }
//...........................................................PC in counter 4....................................
      if(counter4==1)
      {
      digitalWrite(40,HIGH);  
      digitalWrite(41,LOW);
      digitalWrite(42,LOW);
      digitalWrite(43,LOW);
      }
      if(counter4==2)
      {
      digitalWrite(40,HIGH);  
      digitalWrite(41,HIGH);
      digitalWrite(42,LOW);
      digitalWrite(43,LOW);
      }
      if(counter4==3)
      {
      digitalWrite(40,HIGH);  
      digitalWrite(41,HIGH);
      digitalWrite(42,HIGH);
      digitalWrite(43,LOW);
      }
      if(counter4>=4)
      {
      digitalWrite(40,HIGH);  
      digitalWrite(41,HIGH);
      digitalWrite(42,HIGH);
      digitalWrite(43,HIGH);
      }
     
      if(counter4==0)
      {
      digitalWrite(40,LOW);  
      digitalWrite(41,LOW);
      digitalWrite(42,LOW);
      digitalWrite(43,LOW);
      }
}     
