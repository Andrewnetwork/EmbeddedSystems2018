// Set the first 8 digital pins to be output pins
void setup() 
{
  for( int i = 0; i < 8; i++ )
  {
    pinMode( i, OUTPUT );
  }

}

// Set the LEDs on and off, one at a time.
byte pinToSet = 0;
void loop() 
{
  digitalWrite( pinToSet, HIGH );
  delay( 200 );
  digitalWrite( pinToSet, LOW );
  delay( 200 );
  pinToSet++;
  pinToSet %= 8;
}
