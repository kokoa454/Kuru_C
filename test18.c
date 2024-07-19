#include <stdio.h>

int calc(int);

enum {
    PRINT_NO,
    PRINT_SUMMER,
    PRINT_WINTER,
};

int main(void){
	int year, hold;
	
	printf("Intput the year here: ");
	scanf("%d", &year);
	
	hold = calc(year);
	
	switch(hold){
	case 0:
		printf("The Olympic games won't be held in %d.", year);
		break;
	case 1:
		printf("The Summer Olympic games will be held in %d.", year);
		break;
	case 2:
		printf("The Winter Olympic games will be held in %d.", year);
	}
	
	return 0;
}

int calc(int year){
	if(year % 4 == 0){
		return PRINT_SUMMER;
	} else if(year % 2 == 0 && year % 4 != 0){
		return PRINT_WINTER;
	} else {
		return PRINT_NO;
	}
}