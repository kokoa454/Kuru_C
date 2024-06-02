#include <stdio.h>

int main(void){
	double r;
	double s;
	char response;
	
	printf("Welcome to Circle Area Checker!\n");
	printf("note: only POSITIVE value can be entered.\n\n");
	
	do{
		printf("Enter the radius: ");
		scanf("%lf", &r);
		while(getchar() != '\n');
		
		if(r > 0){
			s = r * r * 3.14;
			
			printf("A circle with a radius of %f has an area of %f.\n", r, s);
		} else {
			printf("ERROR: NEGATIVE value has been entered!\n");
			continue;
		}
		
		do{
		
			printf("Do you want to check another circle area? (y/n): ");
			
			response = getchar();
			
			while(getchar() != '\n');
			
		} while(response != 'y' && response != 'n');
		
	} while(response == 'y');
	
	printf("Good bye!\n");
	
	return 0;
}