#include "main.h"

void Delay_Timer(uint32_t time) {
	for(; time > 0; time--){
	}
}

int main(void){
	RCC->APB2ENR |= (1<<2); //0x4; //PortA 버스 탑승권 허용
	GPIOA->CRL &= ~(1<<22); //~0x400000;
	GPIOA->CRL |= (1<<20);//0x44144444; //PortA PA5 출력 설정

	while(1){
		GPIOA->BSRR |= (1<<5); //0x20; // LED ON
		Delay_Timer(500000);
		GPIOA->BSRR |= (1<<21); //~0x20; // LED OFF
		Delay_Timer(500000);
	}
}
