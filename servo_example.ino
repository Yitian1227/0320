#include <Servo.h>

Servo myservo;  // 創建伺服馬達物件

void setup() {
  myservo.attach(9);  // 將伺服馬達連接到數位腳位 9
}

void loop() {
  // 從 0 度轉到 180 度
  for (int pos = 0; pos <= 180; pos += 1) {
    myservo.write(pos);
    delay(15);  // 等待 15 毫秒讓伺服馬達轉到指定位置
  }
  
  // 從 180 度轉回 0 度
  for (int pos = 180; pos >= 0; pos -= 1) {
    myservo.write(pos);
    delay(15);  // 等待 15 毫秒讓伺服馬達轉到指定位置
  }
} 