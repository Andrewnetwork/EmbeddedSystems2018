// Define two global variables with small values. 
volatile byte a = 10;
volatile byte b = 20;

void setup() {
  // put your setup code here, to run once:
  Serial.begin( 9600 );

  // Our counter starts with 255, the largest number that fits in an unsigned byte. 
  volatile uint8_t counter = 255;

  // Get the start time. 
  unsigned long startTime = micros();

  // This is our assembly language loop. 
  asm(
    "lds r24, (a) \n" // Load the value of a into register r24
    "lds r26, (b) \n" // Load the value of b into register r26
    "1:           \n" // This is a target for the top of the loop
    "ldi r26, 0x01 \n" // <-- Our testing code goes here
    "dec %0       \n" // Decrement the loop counter 
    "brne 1b      \n" // If it is not zero, go to the top of the loop
    : : "r" (counter): "r24", "r26"
  ); 

  // Get the end time
  unsigned long endTime = micros();

  // Compute the elapsed time
  unsigned long elapsedTime = endTime - startTime;

  Serial.print( "Elapsed time: ");
  Serial.print( elapsedTime );
  Serial.println( " microseconds" );
}

void loop() {
  // put your main code here, to run repeatedly:

}
