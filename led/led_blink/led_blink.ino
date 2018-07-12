/*
 *  led_blink.ino - LED sample application
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
 *
 *  Spresense has 4 LEDs these are addressed as digital pins LED0, LED1, LED2 and LED3.
 *
 *  These LEDs are connected to digital outputs and dedicated IO so do not share IO with the connector pins.
 *  The Spresens Arduino warpper includes functions Led_On() and ledOff().
 *  These configure the pins as outputs and set the state HIGH or LOW appropriately.
 *
 *  This skecth turns the 4 LED on in sequecnce and then off in sequence.
 *
 *  Note: Spresense does not define LED_BUILTIN
 *  This example code is in the public domain.
 *
 */

// the setup function runs once when you press reset or power the board
void setup() {

}

// the loop function runs over and over again forever
void loop() {
    ledOn(LED0);
    delay(100);
    ledOn(LED1);
    delay(100);
    ledOn(LED2);
    delay(100);
    ledOn(LED3);
    delay(1000);

    ledOff(LED0);
    delay(100);
    ledOff(LED1);
    delay(100);
    ledOff(LED2);
    delay(100);
    ledOff(LED3);
    delay(1000);
}
