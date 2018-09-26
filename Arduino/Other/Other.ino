#define DATATYPE long
#define OPERATION i/j

#pragma GCC push_options 
#pragma GCC optimize ("O0")

void setup() {
  // put your setup code here, to run once:

  Serial.begin( 9600 );
  byte count = 101;

  volatile DATATYPE z;

  unsigned long t1 = micros();

  for( register byte i = 1; i < count; i++){
    for( register byte j=1; j < count; j++){
      z = OPERATION;
    }
  }

  unsigned long t2 = micros();
  unsigned long elapsedTime = t2 - t1;

  Serial.print("Elapsed time ");
  Serial.print(elapsedTime);
  Serial.print(" microseconds for ");
  Serial.print( (count - 1) * (count - 1 ) );
  Serial.print( " iterations");
  
}
#pragma GCC pop_options

void loop() {
  // put your main code here, to run repeatedly:

}
