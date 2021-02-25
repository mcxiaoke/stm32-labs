#include <Arduino.h>
// https://www.e-tinkers.com/2020/01/getting-started-with-stm32-and-things-you-need-to-be-aware-of/
// Programming STM32 via UART:
// RXD-A9, TXD-A10, GND-GND,V3.3-V3.3
// Press Reset Button before uploading firmware
void setup() {
  Serial.begin(9600);
  while (!Serial) {
    delay(1);
  }
  Serial.println("STM32F103C8T6");
  // PC13 = Builtin LED
  pinMode(PB11, OUTPUT);
}

void loop() {
  digitalWrite(PB11, HIGH);
  delay(500);
  digitalWrite(PB11, LOW);
  delay(500);
}