/*
 *  OneshotTimer.ino - Oneshot Timer sample application
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

int timerInt = 0; // Timer Interrupt Flag

void setup() {
  Serial.begin(115200);
  randomSeed(analogRead(A2));
}

unsigned int isr(void) {
  // Timer Interrupt is occurred
  timerInt = 1;

  Serial.print("<");

  // If 0 is returned, then it can stop the timer.
  // It can behave as the oneshot timer.
  return 0;
}

void loop() {
  unsigned int alarmMilliSeconds;

  alarmMilliSeconds = (unsigned int)random(1, 20000);
  Serial.print("Alarm: ");
  Serial.print(alarmMilliSeconds, DEC);
  Serial.print(" msec");

  // Set alarm timer
  attachTimerInterrupt(isr, alarmMilliSeconds * 1000);

  // Wait until a timer interrupt is occurred
  do {
    delay(1000);
    Serial.print(".");
  } while (timerInt == 0);

  Serial.println("expired!");
  timerInt = 0;
}
