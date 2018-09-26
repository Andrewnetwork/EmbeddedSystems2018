// Set the first 8 digital pins to be output pins
void setup() 
{
  DDRD = 0xFF;
}

int pinSpeed = 200;
byte counter = 0;

void loop() 
{

  PORTD = counter; 

  // Increment count variable. 
  counter++;

  // Wait 
  delay( pinSpeed );

}
