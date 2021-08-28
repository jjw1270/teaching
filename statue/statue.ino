const int bt_state = 8;
const int bt_reset = 9;

const int led_sword = 4;
const int led_eye_1 = 2;
const int led_eye_2 = 3;
const int led_yellow = 5;
const int led_heart = 6;

int state = 0;
int heart = 0;

void setup() {
  pinMode(bt_state, INPUT_PULLUP);
  pinMode(bt_reset, INPUT_PULLUP);

  pinMode(led_sword, OUTPUT);
  pinMode(led_eye_1, OUTPUT);
  pinMode(led_eye_2, OUTPUT);
  pinMode(led_yellow, OUTPUT);
  pinMode(led_heart, OUTPUT);



}

void loop() {
  if (digitalRead(bt_state) == HIGH) {
    if(state == 0){
      state = 1;
    }
    else if (state == 1){
      state = 2;
    }else if (state == 2){
      state = 3;
    }
    delay(300);
  }
  if (state == 0){
    digitalWrite(led_sword, HIGH);
    digitalWrite(led_eye_1, HIGH);
    digitalWrite(led_eye_2, HIGH);
    digitalWrite(led_yellow, HIGH);
    digitalWrite(led_heart, LOW);    
  }else if(state == 1){
      digitalWrite(led_sword, LOW);
      analogWrite(led_heart, 50);
  }else if (state == 2){
      digitalWrite(led_eye_1, LOW);
      digitalWrite(led_eye_2, LOW);
      analogWrite(led_heart, 150);
  }else if (state == 3){
      digitalWrite(led_yellow, LOW);
      analogWrite(led_heart, 225);
      delay(2000);
      analogWrite(led_heart, 0);
      delay(500);
  }
}
