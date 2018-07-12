/*
 *  nuttx_shell.ino - Nutt Shell sample application
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
 *  NuttShell is a small, scalable, bash-like shell for NuttX.
 *  It is accessed via the main board serial port with defult 115200 8N1 configuration.
 *  A subset of the commands listed in http://www.nuttx.org/doku.php?id=documentation:nuttshell are implemented. 
 *  Useful functions include access to the file system for the flash memory chip on the Spresense Main PCB.
 *  This example code is in the public domain.
 */
 
#include <sched.h>
#include "nshlib.h"

#define STACKSIZE 8192
#define PRIORITY  100

static int nsh_main(int argc, char *argv[])
{
  return nsh_consolemain(0, NULL);
}

void setup() {
  task_create("nsh", PRIORITY, STACKSIZE, nsh_main, NULL);
}

void loop() {
  exit(0);
}
