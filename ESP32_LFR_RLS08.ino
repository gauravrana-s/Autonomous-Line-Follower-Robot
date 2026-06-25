/*
ESP32 Line Follower Robot
RLS08 + L298N
Pins:
ENA23 IN1 18 IN2 19
IN3 21 IN4 22 ENB5
Sensors:13,12,14,27,26,25,33,32
*/
const int ENA=23,IN1=18,IN2=19,IN3=21,IN4=22,ENB=5;
const int sensorPins[8]={13,12,14,27,26,25,33,32};
int weights[8]={-350,-250,-150,-50,50,150,250,350};
int baseSpeed=200,lastError=0;
float Kp=0.22,Kd=0.18;
void setup(){
Serial.begin(115200);
pinMode(ENA,OUTPUT);pinMode(ENB,OUTPUT);
pinMode(IN1,OUTPUT);pinMode(IN2,OUTPUT);
pinMode(IN3,OUTPUT);pinMode(IN4,OUTPUT);
for(int i=0;i<8;i++)pinMode(sensorPins[i],INPUT);
digitalWrite(IN1,HIGH);digitalWrite(IN2,LOW);
digitalWrite(IN3,HIGH);digitalWrite(IN4,LOW);
}
void loop(){
int sum=0,count=0;
for(int i=0;i<8;i++){
 if(digitalRead(sensorPins[i])==0){sum+=weights[i];count++;}
}
int error=(count==0)?lastError:sum/count;
int corr=(int)(Kp*error+Kd*(error-lastError));
lastError=error;
int left=constrain(baseSpeed-corr,0,255);
int right=constrain(baseSpeed+corr,0,255);
analogWrite(ENA,left);
analogWrite(ENB,right);
}
