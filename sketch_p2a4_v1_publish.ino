//Even-Odd-Switch-Loop
//By: Tadeo Arellano Aldrick Victor
//Created MAR-27-2021
//Published MAR-27-2021
//Publsished for limited community usage (PPU/V) on https://github.com/aldrick-t/Even-Odd-Switch-Loop
//MAR 2021

int evenMode;
int oddMode;
int loopMode;

void setup(){
  pinMode(2,INPUT);
  pinMode(3,INPUT);

  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
}

void decimal0(){
  digitalWrite(12,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
  digitalWrite(9,LOW);
  digitalWrite(8,LOW);
  digitalWrite(7,LOW);
  digitalWrite(6,LOW);
}

void decimal1(){
  digitalWrite(12,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(7,LOW);
  digitalWrite(6,HIGH);
}
void decimal2(){
  digitalWrite(12,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(9,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(6,LOW);
}
void decimal3(){
  digitalWrite(12,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(8,LOW);
  digitalWrite(7,LOW);
  digitalWrite(6,LOW);
}
void decimal4(){
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(7,LOW);
  digitalWrite(6,HIGH);
}
void decimal5(){
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(8,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(6,LOW);
}
void decimal6(){
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
  digitalWrite(9,LOW);
  digitalWrite(8,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(6,LOW);
}
void decimal7(){
  digitalWrite(12,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(7,LOW);
  digitalWrite(6,LOW);
}
void decimal8(){
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
  digitalWrite(9,LOW);
  digitalWrite(8,LOW);
  digitalWrite(7,LOW);
  digitalWrite(6,LOW);
}
void decimal9(){
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(8,LOW);
  digitalWrite(7,LOW);
  digitalWrite(6,LOW);
}
void idle(){
  digitalWrite(12,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
}
void loopEven(){
  decimal0();
  delay(500);
  idle();
  delay(300);
  decimal2();
  delay(500);
  idle();
  delay(300);
  decimal4();
  delay(500);
  idle();
  delay(300);
  decimal6();
  delay(500);
  idle();
  delay(300);
  decimal8();
  delay(500);
  idle();
  delay(300);
}
void loopOdd(){
  decimal1();
  delay(500);
  idle();
  delay(300);
  decimal3();
  delay(500);
  idle();
  delay(300);
  decimal5();
  delay(500);
  idle();
  delay(300);
  decimal7();
  delay(500);
  idle();
  delay(300);
  decimal9();
  delay(500);
  idle();
  delay(300);
}

void loop(){
  evenMode = digitalRead(2);
  oddMode = digitalRead(3);

  if(evenMode==1){
    loopMode = 0; 
  }

  else if(oddMode==1){
    loopMode = 1;
  }

  else{
    loopMode = 3;
  }

  switch(loopMode){

    case 0:
      loopEven();
      break;

    case 1:
      loopOdd();
      break;

    default:
      idle();
  }
}