/*
 *  time.ino - Time sample application
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

volatile uint8_t g_dbg = 1;
unsigned long s_delay = 6; // 6us is the lowest limitation

void setup() {
  //while (g_dbg) {}
  // put your setup code here, to run once:
  pinMode(PIN_D08, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(PIN_D08, HIGH);
  delayMicroseconds(s_delay);
  digitalWrite(PIN_D08, LOW);
  delayMicroseconds(s_delay);
}
