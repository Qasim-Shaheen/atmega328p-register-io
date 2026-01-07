int main(void)
{
DDRD = 0b00110000;


while(1)
{
  
  if (PIND & 0b00000100){
    PORTD |= 0b00010000; 
  }else {PORTD &= 0b000000000;
    
  }
 
  if (PIND & 0b001000000){
   PORTD &= 0b111011111; 
  }else { PORTD |= 0b000100000;}
 
  
}
} 
