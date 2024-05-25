#include <stdio.h>

int main(void){
	int money, ten, thirty, fifty, eighty;
	
	printf("input an amout of money here : ");
	scanf("%d", &money);
	
	ten = money - money * 0.1;
	thirty = money - money * 0.3;
	fifty = money - money * 0.5;
	eighty = money - money * 0.8;
	
	printf( "The price of %d yen with 10%% discount is %d yen, 30%% is %d yen, 50%% is %d yen, 80%% is %d yen.", money, ten, thirty, fifty, eighty);
	
	return 0;
}
