#include <Keyboard.h>
#include <KeyboardLayout.h>
#include <Keyboard_da_DK.h>
#include <Keyboard_de_DE.h>
#include <Keyboard_es_ES.h>
#include <Keyboard_fr_FR.h>
#include <Keyboard_it_IT.h>
#include <Keyboard_sv_SE.h>

#define root 11
#define openParentheses 10
#define closedParentheses 9
#define superScript 8
#define minus 12
#define plus 6 
#define subScript 3
#define divide 4
#define multiply 5
void setup() {
  // put your setup code here, to run once:
  pinMode(root, INPUT_PULLUP);
  pinMode(openParentheses, INPUT_PULLUP);
  pinMode(closedParentheses, INPUT_PULLUP);
  pinMode(superScript, INPUT_PULLUP);
  pinMode(minus, INPUT_PULLUP);
  pinMode(plus, INPUT_PULLUP);
  pinMode(subScript, INPUT_PULLUP);
  pinMode(divide, INPUT_PULLUP);
  pinMode(multiply, INPUT_PULLUP);
  Keyboard.begin();
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(root) == LOW){
    Keyboard.press(KEY_RIGHT_ALT);
    Keyboard.press(KEY_KP_2);
    Keyboard.press(KEY_KP_5);
    Keyboard.press(KEY_KP_1);
    Keyboard.releaseAll();
    delay(200);



  }
  if (digitalRead(openParentheses) == LOW){
    Keyboard.write(40);
    delay(200);
  }
    
  if (digitalRead(closedParentheses) == LOW){
    Keyboard.press(')');
    Keyboard.releaseAll();
    delay(200);
     
  }
  if (digitalRead(superScript) == LOW){
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press('6');
    Keyboard.releaseAll();
    delay(200);
  }
  if (digitalRead(minus) == LOW){
    Keyboard.write(45);
    delay(200);
    
  }
  if (digitalRead(plus) == LOW){
    Keyboard.write(43);
    delay(200);
  }
  if (digitalRead(subScript) == LOW){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('6');
    Keyboard.releaseAll();
    delay(200);
    
  }
  if (digitalRead(divide) == LOW){
    Keyboard.write(47);
    delay(200);
    
  }
  if (digitalRead(multiply) == LOW){
    Keyboard.write(42);
    delay(200);

  }

  
}
