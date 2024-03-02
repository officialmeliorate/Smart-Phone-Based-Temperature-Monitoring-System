#include"header.h"

int main()
{
	s32 adc_val;
	float Vout,temp;
	uart0_init(9600);
	adc_init();
	lcd_init();
	
	uart0_tx_string("Temperature Monitoring System\r\n");
	lcd_cmd(0x80);
	lcd_string("Temperature");
	lcd_cmd(0xC0);
	lcd_string("Monitor System");
	while(1)
	{
		lcd_cmd(0x01);
		
		adc_val=adc_read(1);
		Vout=(adc_val*3.3)/1023;
		temp=(Vout-0.5)/0.01;
		
		uart0_tx_string("adc val: ");
		uart0_tx_integer(adc_val);
		uart0_tx_string("\r\n");
		lcd_cmd(0x80);
		lcd_string("adc val: ");
		lcd_integer(adc_val);
		
		uart0_tx_string("Vout: ");
		uart0_tx_float(Vout);
		uart0_tx_string("\r\n");
		
		uart0_tx_string("temp: ");
		uart0_tx_float(temp);
		uart0_tx_string("\r\n");
		lcd_cmd(0xC0);
		lcd_string("temp: ");
		lcd_integer(temp);
		delay_ms(200);
	}
}
