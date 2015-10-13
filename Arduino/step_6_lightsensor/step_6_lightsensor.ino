void setup() {
  // put your setup code here, to run once:
 // serial.begin(9600);
}
int curVal=0;
void loop(){

//조도센서의 값을 읽어서 LED의 밝기를 조절해줍니다. 

   //analogWrite(9, map(analogRead(A0),0,1023,0,255));
   curVal = map(analogRead(A0),0,1023,0,255) ;
  //under 200 off light
  if(curVal< 200) {
    digitalWrite(9, LOW);
  } else {
    analogWrite(9,curVal);
  }
  
 
}
