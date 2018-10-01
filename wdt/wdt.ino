/*
 *  wdt.ino - Watch Dog Timer sample application
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

#include <sdk/config.h>

#include <sys/types.h>
#include <sys/ioctl.h>
#include <unistd.h>
#include <fcntl.h>

#include <nuttx/timers/watchdog.h>

#include <stdio.h>

int wdtFd;

void setup() {
  wdtFd = open("/dev/watchdog0", O_RDONLY);
  ioctl(wdtFd, WDIOC_SETTIMEOUT, 1000); // ex. 1000 msec
  ioctl(wdtFd, WDIOC_START, 0);
}

void loop() {
  static int delayTime = 100; // 100 msec

  ioctl(wdtFd, WDIOC_KEEPALIVE, 0); // WDT Keep Alive

  printf("delayTime=%d\n", delayTime);
  delay(delayTime); // busy loop

  delayTime += 100;
}


