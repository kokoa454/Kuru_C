#include <stdio.h>
//#include <string.h>

int main(void){
	char name[100];
	char firstName[50];
	char lastName[50];
	
	printf("Input your FIRST NAME: ");
	scanf("%49s", firstName);
	printf("Input your LAST NAME: ");
	scanf("%49s", lastName);
	
	sprintf(name, "%s %s\n", firstName, lastName);
	
	/* method using strcpy and strcat
	strcpy(name, firstName);
	strcat(name, " ");
	strcat(name, lastName);
	*/
	
	printf("Your name is %s", name);
	
	return 0;
}