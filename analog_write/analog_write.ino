/*
 *  analog_write.ino - Analog I/O sample application
 *  Copyright 2018 Sony Semiconductor Solutions Corporation
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */

void startAll(void) {
  analogWrite(PIN_D00, 10);  //  3.92
  analogWrite(PIN_D01, 20);  //  7.84
  analogWrite(PIN_D02, 30);  // 11.76
  //analogWrite(PIN_D03, 40);  // 15.69, pwm
  analogWrite(PIN_D04, 50);  // 19.61
  //analogWrite(PIN_D05, 60);  // 23.53, pwm
  //analogWrite(PIN_D06, 70);  // 27.45, pwm
  analogWrite(PIN_D07, 80);  // 31.38
  analogWrite(PIN_D08, 90);  // 35.28
  //analogWrite(PIN_D09, 100); // 39.20, pwm
  analogWrite(PIN_D10, 110); // 43.12
  analogWrite(PIN_D11, 120); // 47.06
  analogWrite(PIN_D12, 130); // 50.98
  analogWrite(PIN_D13, 140); // 54.90
  analogWrite(PIN_D14, 150); // 58.82
  analogWrite(PIN_D15, 160); // 62.75
  analogWrite(PIN_D16, 170); // 66.67
  analogWrite(PIN_D17, 180); // 70.59
  analogWrite(PIN_D18, 190); // 74.51
  analogWrite(PIN_D19, 200); // 78.43
  analogWrite(PIN_D20, 210); // 82.35
  analogWrite(PIN_D21, 220); // 86.27
}

void stopAll(void) {
  digitalWrite(PIN_D00, LOW);
  digitalWrite(PIN_D01, LOW);
  digitalWrite(PIN_D02, LOW);
  digitalWrite(PIN_D03, LOW);
  digitalWrite(PIN_D04, LOW);
  digitalWrite(PIN_D05, LOW);
  digitalWrite(PIN_D06, LOW);
  digitalWrite(PIN_D07, LOW);
  digitalWrite(PIN_D08, LOW);
  digitalWrite(PIN_D09, LOW);
  digitalWrite(PIN_D10, LOW);
  digitalWrite(PIN_D11, LOW);
  digitalWrite(PIN_D12, LOW);
  digitalWrite(PIN_D13, LOW);
  digitalWrite(PIN_D14, LOW);
  digitalWrite(PIN_D15, LOW);
  digitalWrite(PIN_D16, LOW);
  digitalWrite(PIN_D17, LOW);
  digitalWrite(PIN_D18, LOW);
  digitalWrite(PIN_D19, LOW);
  digitalWrite(PIN_D20, LOW);
  digitalWrite(PIN_D21, LOW);
}

void setup() {
  // put your setup code here, to run once:
  //startAll();
  analogWrite(PIN_D09, 100); // 39.20, pwm
  //stopAll();
}

void loop() {
  // put your main code here, to run repeatedly:
}
