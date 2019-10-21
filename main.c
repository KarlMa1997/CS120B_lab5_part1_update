#include <avr/io.h>

int main(void)
{
   
   DDRA = 0x00; PORTA = 0xFF;
   DDRC = 0xFF; PORTC = 0x00;
   
   unsigned char fuelLevel = 0x00;
   unsigned char LED = 0x00;
   
   while(1)
   {
	   fuelLevel = PINA;
	   if((fuelLevel & 0x00) == 0x00)
	   {
		   LED = 0x40;
	   }
	   if((fuelLevel & 0x01) == 0x01)
	   {
		   LED = 0x60;
	   }
	   if((fuelLevel & 0x02) == 0x02)
	   {
		   LED = 0x60;
	   }
	   if((fuelLevel & 0x03) == 0x03)
	   {
		   LED = 0x70;
	   }
	   if((fuelLevel & 0x04) == 0x04)
	   {
		   LED = 0x70;
	   }
	   if((fuelLevel & 0x05) == 0x05)
	   {
		   LED = 0x38;
	   }
	   if((fuelLevel & 0x06) == 0x06)
	   {
		   LED = 0x38;
	   }
	   if((fuelLevel & 0x07) == 0x07)
	   {
		   LED = 0x3C;
	   }
	   if((fuelLevel & 0x08) == 0x08)
	   {
		   LED = 0x3C;
	   }
	   if((fuelLevel & 0x09) == 0x09)
	   {
		   LED = 0x3C;
	   }
	   if((fuelLevel & 0x0A) == 0x0A)
	   {
		   LED = 0x3E;
	   }
	   if((fuelLevel & 0x0B) == 0x0B)
	   {
		   LED = 0x3E;
	   }
	   if((fuelLevel & 0x0C) == 0x0C)
	   {
		   LED = 0x3E;
	   }
	   if((fuelLevel & 0x0D) == 0x0D)
	   {
		   LED = 0x3F;
	   }
	   if((fuelLevel & 0x0E) == 0x0E)
	   {
		   LED = 0x3F;
	   }
	   if((fuelLevel & 0x0F) == 0x0F)
	   {
		   LED = 0x3F;
	   }
	   PORTC = LED;
	   LED = 0x00;
	   fuelLevel = 0x00;
   }
}
