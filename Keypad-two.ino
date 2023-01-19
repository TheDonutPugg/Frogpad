#include <BleKeyboard.h>
BleKeyboard bleKeyboard("Keypad");
#define keyOne D0
#define keyTwo D1
#define keyThree D2
#define keyFour D3
#define keyFive D4
#define keySix D5
#define keySeven D6
#define keyEight D7
#define keyNine D8
int previousPosition = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  //Serial.println("Starting BLE work!");
  bleKeyboard.begin();

  pinMode(keyOne, INPUT_PULLUP);
  pinMode(keyTwo, INPUT_PULLUP);
  pinMode(keyThree, INPUT_PULLUP);
  pinMode(keyFour, INPUT_PULLUP);
  pinMode(keyFive, INPUT_PULLUP);
  pinMode(keySix, INPUT_PULLUP);
  pinMode(keySeven, INPUT_PULLUP);
  pinMode(keyEight, INPUT_PULLUP);
  pinMode(keyNine, INPUT_PULLUP);



}

void loop() {
  // put your main code here, to run repeatedly:
  if (bleKeyboard.isConnected()) {



    Serial.println("Sending 'Hello world'...");
    if (previousPosition == 0) {
      if (digitalRead(keyOne) == LOW){
        bleKeyboard.write(240);
        previousPosition == 1;
        delay(250);
      }
      else if (digitalRead(keyTwo) == LOW){
        bleKeyboard.write(241);
        previousPosition == 1;
        delay(250);
      }
      else if (digitalRead(keyThree) == LOW){
        bleKeyboard.write(242);
        previousPosition == 1;
        delay(250);
      }
      else if (digitalRead(keyFour) == LOW) {
        bleKeyboard.write(243);
        previousPosition == 1;
        delay(250);
      }
      else if (digitalRead(keyFive) == LOW) {
        bleKeyboard.write(244);
        previousPosition == 1;
        delay(250);
      }
      else if (digitalRead(keySix) == LOW) {
        bleKeyboard.write(244);
        previousPosition == 1;
        delay(250);
      }
      if (digitalRead(keySeven) == LOW) {
        bleKeyboard.write(244);
        previousPosition == 1;
        delay(250);
      }
      else if (digitalRead(keyEight) == LOW) {
        bleKeyboard.write(245);
        previousPosition == 1;
        delay(250);
      }
      else if (digitalRead(keyNine) == LOW) {
        bleKeyboard.write(2462);
        previousPosition == 1;
        delay(250);
      }
      else{
        previousPosition == 0;
      }
      
    }

  }
  


}
