void PinMode(uint8_t pin,uint8_t volatile *ragistar	,bool Mode)
{
	
	if(Mode==OUTPUT)
	*ragistar|= (1<<pin);
	if(Mode==INPUT)
	*ragistar&=~(0<<pin);
}

void DigitalWrite(uint8_t pin ,uint8_t volatile *ragistar,bool mode)
{
	if(mode==HIGH)
	*ragistar|= (1<<pin);
	if(mode==LOW)
	*ragistar&=~(0<<pin);
}

uint8_t DigitalRead(uint8_t pin,uint8_t volatile *ragistar)
{
	return ((*ragistar)&(1<<pin));
}
