#include "stm32f10x.h"
//配置时钟、输出方向、输出低电平寄存器
#define GPIOB_CRL    *( unsigned int * )(0x40010C00)
#define GPIOB_ODR    *( unsigned int * )(0x40010C00+0x0C)
#define RCC_GPIOB    *( unsigned int * )(0x40021000+0x18)


int main()
{
	GPIOB_ODR = 0;
	RCC_GPIOB |=  ( (1) << 3 );
	GPIOB_CRL |=  ( (1) << (4*0) );	
	while(1);
	return 1;
}

void SystemInit(void)
{
}

