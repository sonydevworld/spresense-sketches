/*
 *  analog_read.ino - Analog Read sample application
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

static const uint8_t pin_l = PIN_A0;
static const uint8_t pin_h = PIN_A4;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin_l, INPUT);
  pinMode(pin_h, INPUT);
  pinMode(PIN_PWM_0, OUTPUT);
  analogWrite(PIN_PWM_0, 200);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000);
  int ret_l = analogRead(pin_l);
  int ret_h = analogRead(pin_h);
  printf("low = %d, high = %d\n", ret_l, ret_h);
}
