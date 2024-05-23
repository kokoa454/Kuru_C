#include <stdio.h>

int main(void){
	int point = 0;
	
	do {
		
		if(point != 0){
			printf("Please input the number from 0 to 100.\n");
		}
		
		printf("Input points of a test here: ");
		scanf("%d", &point);
	} while(point < 0 || point >= 100);
	
	printf("The points of a test is %d", point);
	
	return 0;
}