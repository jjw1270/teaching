int bt=12;
int state=0;

void setup(){

  pinMode(13,OUTPUT);
  pinMode(bt,INPUT_PULLUP);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);




  
}

void loop(){
  int value=digitalRead(bt);
  if(value == HIGH){
    if(state==0){
      state=1;
    }
    else if(state==1){
      state=0;
    }
    delay(300);
  }
  if(state==0){
    digitalWrite(13,LOW);
    digitalWrite(11,LOW);
    digitalWrite(10,LOW);
    digitalWrite(9,LOW);
    digitalWrite(8,LOW);
  }else if(state==1){
    digitalWrite(13,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(10,HIGH);
     digitalWrite(9,HIGH);
     digitalWrite(8,HIGH);
  }
}
