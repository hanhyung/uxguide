#include "pitches.h" // pitches.h 탭의 코드를 포함한다는 뜻
//학교종이 땡땡땡의 음을 나타내는 배열
int melody[] = {
NOTE_G4,
NOTE_G4,
NOTE_A5,
NOTE_A5,
NOTE_G4,
NOTE_G4,
NOTE_E4,
NOTE_G4,
NOTE_G4,
NOTE_E4,
NOTE_E4,
NOTE_D4,
0,
NOTE_G4,
NOTE_G4,
NOTE_A5,
NOTE_A5,
NOTE_G4,
NOTE_G4,
NOTE_E4,
NOTE_G4,
NOTE_E4,
NOTE_D4,
NOTE_E4,
NOTE_C4,
0};
//음 길이를 
//음 길이를 나타내는 배열
int noteDurations[] = {
1,1,1,1,
1,1,2,
1,1,1,1,
3,1,
1,1,1,1,
1,1,2,
1,1,1,1,
3,1};

void setup() {
  // put your setup code here, to run once:
// 밑에 배열은 26번 반복합니다. for (int thisNote = 0; thisNote < 26; thisNote++) {
// thisNote를 가지고 noteDurations 배열에서
// 해당 위치의 값을 가지고 온 뒤 250을 곱합니다. // 250을 곱한 이유는 noteDurations 배열에서 1이 바로
// 4분에 1 박자를 뜻하기 때문입니다. int noteDuration = 250 * noteDurations[thisNote];
// 앞에서 구한 음 길이도 사용해서
// 피에조 스피커를 재생합니다. // 여기서도 마찬가지로 thisNote를 가지고 melody배열에서
// 해당되는 음의 주파수를 가져왔습니다. tone(8, melody[thisNote],noteDuration);
// 피에조 스피커에서 소리가나는 것을 유지하기 위해
// 음 길이에 1.3을 곱한 시간 만큼 멈춰줍니다.
int pauseBetweenNotes = noteDuration * 1.30;
delay(pauseBetweenNotes);
// 피에조 스피커의 소리를 끕니다. noTone(8);
}

}

void loop() {
  // put your main code here, to run repeatedly:

}
