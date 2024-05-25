#include <stdio.h>

int main(void){
	int month;
	
	printf("Input a number of month here :");
	scanf("%d", &month);
	
	switch(month){
		case 1:
			printf("Mutsuki");
			break;
		case 2:
			printf("Kisaragi");
			break;
		case 3:
			printf("Yayoi");
			break;
		case 4:
			printf("Uzuki");
			break;
		case 5:
			printf("Satsuki");
			break;
		case 6:
			printf("Minazuki");
			break;
		case 7:
			printf("Fumizuki");
			break;
		case 8:
			printf("Hazuki");
			break;
		case 9:
			printf("Nagatsuki");
			break;
		case 10:
			printf("Kannazuki");
			break;
		case 11:
			printf("Shimotsuki");
			break;
		case 12:
			printf("Shiwasu");
			break;
		default:
			printf("ERROR");
			break;
	}
	
	return 0;
}
