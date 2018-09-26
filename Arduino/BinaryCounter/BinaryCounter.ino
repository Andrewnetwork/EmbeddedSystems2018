// Set the first 8 digital pins to be output pins
void setup() 
{
  for( int i = 0; i < 8; i++ )
  {
    pinMode( i, OUTPUT );
  }

}

int pinSpeed = 200;
byte counter = 0;


void loop() 
{
  byte mask = 1;
  // Loop over 8 places and output a value for each pin. 
  for(int i=0; i < 8; i++){
    
    digitalWrite( i,  (counter & mask) > 0 );
    
    mask <<=1;
  } 

  // Increment count variable. 
  counter++;

  // Wait 
  delay( pinSpeed );

}
