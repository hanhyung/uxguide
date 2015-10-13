// 초음파센서의 
#define TRIG 2
#define ECHO 3
// 삼색 LED의 R,G,B
#define RED 11
#define GREEN 10
#define BLUE 9

void setup(){
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT); 
  
   Serial.begin(9600);
}


void loop(){
// 다음은 초음파센서의 Trig에서 초음파를 발사하는 코드입니다.
    digitalWrite(TRIG, LOW); 
    delayMicroseconds(2);
    digitalWrite(TRIG, HIGH); 
    delayMicroseconds(10);
    digitalWrite(TRIG, LOW);
  // 58.2 / --> cm로 변경하기 위해서입니다.
  long distance = pulseIn(ECHO, HIGH)/58.2;
  // 삼색 LED의 R, G, B를 모두 0으로 설정해서 끕니다.
    analogWrite(RED, 0);
    analogWrite(GREEN, 0);
    analogWrite(BLUE, 0);
     Serial.println(distance);
    if(distance < 10){
    // 거리가 10cm 이내이면 빨간색으로 표시합니다.
        analogWrite(RED, 255);
    }else if(distance < 20){
    // 거리가 10 ~ 20 이내이면 초록색으로 표시합니다.
        analogWrite(GREEN, 255);
    }else if(distance < 30){
    // 거리가 20 ~ 30 이내이면 파란색으로 표시합니다.
        analogWrite(BLUE, 255); 
    }
    // 0.1초간 멈춥니다.
    delay(100);
}
