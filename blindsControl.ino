int pot = 5;
int value = 0;
int i=0,d =0;
int motor = 8;
int motorReverse =9;
float turn = 0;
float turn_1=0.0;
int x=0;


void setup(){
  Serial.begin(9600);
  pinMode(motor,OUTPUT);
}

void loop(){
  int value = analogRead(pot);
  Serial.println(value);
  i=value;
  d = turn/2.12;
  if(i<=d+5 && i>d-5){
  Serial.println("you are genius, aasif");  
  }
else{
    turn = 2.12*i;  
    turn_1 = turn - (2.12*d);
    x=turn_1/abs(turn_1);
     
    switch(x){
      case(1):
    digitalWrite(motor,HIGH);
    digitalWrite(motorReverse, LOW);
    delay(640/turn_1);
    digitalWrite(motor,LOW);                                                                                                               
  
  case(-1):
    digitalWrite(motor,LOW);
    digitalWrite(motorReverse, HIGH);
    delay(640/abs(turn_1));
    digitalWrite(motorReverse,HIGH);                                                                                                              
  }
}
}

