// Interrupt test code with serial debug
// bassed on https://www.allaboutcircuits.com/technical-articles/using-interrupts-on-arduino/
// Modified for Spresense
// A push button should be connected to pin 2 to GND. 
// A pull up resistor is not required for Spresense if you use the extension board as this has builtin pull ups on all digital pins.

const int buttonPin = 2;              // the number of the pushbutton pin
const int ledPin =  LED_BUILTIN;      // the LED pin

// variables will change:

// Variables used in interrupt service routines and other parts of the program should be volatile
// 2 is used to indicate there has not been an interrupt yet
// 1 is button released
// 0 is button pressed
volatile int buttonState = 2;         // variable for reading the pushbutton status 


void setup() {
  // Initialise serial for debug
  Serial.begin(115200);
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
  // Attach an interrupt to the ISR vector
  // Must be of the form attachInterrupt(pin, ISR, mode); for Spresense
  // attachInterrupt(digitalPinToInterrupt(pin), ISR, mode); (not supported for Spresense)
  // attachInterrupt(interrupt, ISR, mode);  (not supported for Spresense) 
  // This is differet to the recomendation in https://www.arduino.cc/reference/en/language/functions/external-interrupts/attachinterrupt/
  attachInterrupt(buttonPin, pin_ISR, CHANGE);
}

void loop() {
  // Loop for regular update with no state change
  // Report button state
  // Note this is reports the button state that has been read in the interrupt service routine
  // Interrupts are disabled around the serial print so the text is sent to the buffer complete
  // and does not have the risk of being corrupted by the sreial print in the ISR
  noInterrupts();
  Serial.print(" State ");
  Serial.println(buttonState);
  interrupts();
  // Short delay to limit rate of data to terminal moinitoring the serial port 
  // This helps you see the output
  delay(100);
}

void pin_ISR() {
  // Interrupt service routine for state change of the pin
  // Read button state
  buttonState = digitalRead(buttonPin);
  // Update LED to show button pin state
  // Note the LED is only updated here not in the main loop()
  digitalWrite(ledPin, buttonState);
  //Report button state for interrput
  Serial.print("Interrupt ");
  Serial.println(buttonState);
  // Short delay 
  // This is essential for stability in this sketch
  delayMicroseconds(200); // delay of 200 us 
  // This delay has to be longer than the hardware debounce time
}

