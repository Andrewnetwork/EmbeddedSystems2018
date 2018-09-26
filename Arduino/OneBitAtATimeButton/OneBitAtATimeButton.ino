// Set the first 8 digital pins to be output pins
void setup() 
{
  for( int i = 0; i < 8; i++ )
  {
    pinMode( i, OUTPUT );
  }

  pinMode( 12, INPUT );
  pinMode( 11, INPUT );

}

// Set the LEDs on and off, one at a time.
byte pinToSet = 0;
int pinSpeed = 200;

void loop() 
{
  digitalWrite( pinToSet, HIGH );
  delay( pinSpeed );
  digitalWrite( pinToSet, LOW );
  delay( pinSpeed );
  pinToSet++;
  pinToSet %= 8;
  
  if( digitalRead( 12 ) == HIGH ){
    pinSpeed += 20; 
  }
  
  if( digitalRead( 11 ) == HIGH && pinSpeed > 0){
    pinSpeed -= 20; 
  }
}
