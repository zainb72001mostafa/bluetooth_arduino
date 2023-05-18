//motors pins
#define n1 5
#define n2 4
#define n3 3
#define n4 2
//irSensor pins
//int irL =9;
//int irR =8;
char readBlt;
//int readR;
//int readL;

void setup() {
  pinMode(n1,OUTPUT);
  pinMode(n2,OUTPUT);
  pinMode(n3,OUTPUT);
  pinMode(n4,OUTPUT);
  //pinMode(irL, INPUT);
  //pinMode(irR, INPUT);
  Serial.begin(9600);
  

}
//directions
void forward(){
  digitalWrite(n1,1);
  digitalWrite(n2,0);
  digitalWrite(n4,1);
  digitalWrite(n3,0);
}

void backward(){
  digitalWrite(n1,0);
  digitalWrite(n2,1);
  digitalWrite(n4,0);
  digitalWrite(n3,1);
}
void left(){
  digitalWrite(n1,0);
  digitalWrite(n2,0);
  digitalWrite(n4,1);
  digitalWrite(n3,0);
}
void right(){
  digitalWrite(n1,1);
  digitalWrite(n2,0);
  digitalWrite(n4,0);
  digitalWrite(n3,0);
}
void stopp(){
  digitalWrite(n1,0);
  digitalWrite(n2,0);
  digitalWrite(n4,0);
  digitalWrite(n3,0);
}


void loop() {
  
  while(Serial.available()>0){
    readBlt=Serial.read();
    switch(readBlt){
      case 'F':
      Serial.print("Forward");
      //forward();
      break;
      case 'B':
      //backward();
      Serial.print("backward");
      break;
      case 'R':
      //right();
      Serial.print("right");
      break;
      case 'L':
      Serial.print("left");
      //left();
      break;
      Serial.print("Stop");
      case 'S':
      //stopp();
      break;
      
    }
  }

  
}
