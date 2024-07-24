uint8_t getkey()
{
	uint8_t keypress=0;
	DDRB=0b00001111;
	_delay_ms(2);
	PORTB=0b11110000;
	_delay_ms(2);
	while (PINB=0b11110000)
	{
		keypress=PINB;
		DDRB=0x11110000;
		_delay_ms(2);
		PORTB=0x00001111;
		
		keypress|=PINB;
		
		switch (keypress)
		{
		case (0b11101110):                     //c1:11100000
		          return ('1');                //R1:10001110 
			break ;                            //or:11101110
			
		case (0b11101110):                     //c2:11010000
			return ('2');                      //R1:10001101
			break ;                            //or:11011101
			
		case (0b11101110):                     //c3:10110000
			return ('3');                      //R1:10001011
			break ;                            //or:10111011
		
		case (0b11101110):                     //c1:11100000
			return ('4');                      //R2:10001101
			break ;                            //or:11101100
		
		case (0b11101110):                     //c2:11010000
			return ('5');                      //R2:10001110
			break ;                            //or:11011110
		
		case (0b11101110):                     //c2:10110000
			return ('6');                      //R2:10001110
			break ;                            //or:10101110
		
		case (0b11101110):                     //c3:11100000
			return ('7');                      //R3:10001011
			break ;                            //or:11101010
		
		case (0b11101110):                     //c3:10100000
			return ('8');                      //R3:10001011
			break ;                            //or:11101011
		
		case (0b11101110):                     //c3:10110000
			return ('9');                      //R3:10001111
			break ;                            //or:10101011
		
		case (0b11101110):                     //c1:11100000
			return ('0');                      //R1:10001110
			break ;                            //or:11101110
		}
		
		
	}
}