/*
 *  CyclicTimer.ino - Cyclic Timer sample application
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

unsigned int cycle = 100 * 1000; // 100 msec
int timerInt = 0; // Timer Interrupt Flag

void setup() {
  // Set cyclic timer
  attachTimerInterrupt(isr, cycle);
}

unsigned int isr(void) {
  // Timer Interrupt is occurred
  timerInt = 1;

  // If the constant value of cycle is always returned,
  // it can behave as the cyclic timer.
  return cycle;
}

void loop() {
  static int num = 0;

  if (timerInt) {
    timerInt = 0;

    // Blink LED
    digitalWrite(LED0, (num & 1) ? HIGH : LOW);
    digitalWrite(LED1, (num & 2) ? HIGH : LOW);
    digitalWrite(LED2, (num & 4) ? HIGH : LOW);
    digitalWrite(LED3, (num & 8) ? HIGH : LOW);

    num++;
  }
}
