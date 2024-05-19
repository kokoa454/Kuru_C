#include <stdio.h>

int main(void){
	int inputYear;
	
	printf("Input year here :");
	scanf("%d", &inputYear);
	
	if(inputYear % 4 == 0){
		printf("The Summer Olympic games will be held in %d.", inputYear);
	} else if(inputYear % 2 == 0 && inputYear % 4 != 0){
		printf("The Winter Olympic games will be held in %d.", inputYear);
	} else {
		printf("The Olympic games will not be held in %d.", inputYear);
	}
}