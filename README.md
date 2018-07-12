# spresense-sketches

This folder contains example sketches for use with the Spresense Arduino wrapper.  Other examples for the libraries can accessed from the Arduino IDE menu File -> examples -> examples for SPRESENSE.


* [led](led)
  Will blink the four LEDs on the Main board using the Spresense functions `ledOn()` and `ledOff()`

*  [led_sequence](led\led_sequence)
  Will blink the four LEDs on the Main board using `digitalwrite()`.

* [nuttx_shell](nuttx_shell)
  Provides access to the [Nuttx Shell](http://www.nuttx.org/doku.php?id=documentation:nuttshell). A subset of the commands are implemented, `help` will list them. Useful test functions include access to the file system for the flash memory chip on the Spresense Main PCB. Make sure the Arduino serial monitor is set for `Both NL & CR`.

* [interrupt](interrupt)
  Provides examples for the interrupt functions including interrupt from pin and timer.

* [analog_write](analog_write)
  Demonstrates `analogWrite()`

* [analog_read](analog_read)
  Demonstrates `analogRead()`

* [time](time)
  Demonstrates the `delayMicroseconds()`.

* [tone](tone)
  Demonstrates tone output from a digital pin.  Spresense also supports beep generation to the headphone. See the Audio library for details.
