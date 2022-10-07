
#define RCC_BASE	0x40021000
#define PortA_BASE	0x40010800

#define RCC_APB2ENR 	        *(volatile unsigned int  *)	(RCC_BASE + 0x18)
#define GPIOA_CRH	 	*(volatile unsigned int *)	(PortA_BASE + 0x04)
#define GPIOA_ODR 		*(volatile unsigned int *)	(PortA_BASE + 0x0C)

#define pin13 

int main(void)
{
	RCC_APB2ENR |= 1<<2;
	GPIOA_CRH	&= 0xFF0FFFFF;
	GPIOA_CRH	|= 0x00200000;

	while(1)
	{int i;
GPIOA_ODR |=(1<<13);			//set bit 13
		for(i=0;i<5000;i++);
GPIOA_ODR &=!(1<<13);			//clear bit 13
		for(i=0;i<5000;i++);
	}

   return 0;
}
