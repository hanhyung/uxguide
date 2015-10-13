#define PLUS 11 // 버튼 연결 핀 번호를 매크로 상수
#define MINUS 12

int digit = 0; // 현재 숫자를 기록하는 변수

byte digits[10][7] =
{ 
    { 0,0,0,0,0,0,1 }, // 0
    { 1,0,0,1,1,1,1 }, // 1
    { 0,0,1,0,0,1,0 }, // 2
    { 0,0,0,0,1,1,0 }, // 3
    { 1,0,0,1,1,0,0 }, // 4
    { 0,1,0,0,1,0,0 }, // 5
    { 0,1,0,0,0,0,0 }, // 6
    { 0,0,0,1,1,1,1 }, // 7
    { 0,0,0,0,0,0,0 }, // 8
    { 0,0,0,1,1,0,0 } // 9
};

void setup(){
  //Serial.begin(19200);
  pinMode(PLUS, INPUT); // 버튼 핀들을 입력 모드로 설정합니다. 
  pinMode(MINUS, INPUT);
   // 2~9번 핀들을 모두 출력 모드로 설정합니다. 
   for(int i=2;i<10;i++){
      pinMode(i, OUTPUT);
    }
    digitalWrite(9, HIGH); // DP, 바로 점에 해당하는 부분을 켜줍니다. 
}
void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(PLUS)==HIGH){
    ++digit;
    if(digit>9){
      digit=0;
    }
  }
  if(digitalRead(MINUS)==HIGH){
    --digit;
    if(digit<0){
      digit=9;
    }    
  }
  displayDigit(digit);
  delay(100);
}

void displayDigit(int num){
    int pin=2;
    for(int i=0;i<7;i++){
      digitalWrite(pin+i, digits[num][i]);
    }
}

