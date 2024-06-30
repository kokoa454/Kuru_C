#include <stdio.h>

typedef struct{
	char name[64];
	int age;
	char sex[32];
} person;

void person_input(person *pdata, int count);
void person_print(person *pdata, int count);


int main(void){
	
	person data;
	
	for(int count = 1; count < 4; count++){
		printf("Enter the information of person %d\n", count);
		
		person_input(&data, count);
	}
	
	printf("\n\n\n");
	
	for(int count = 1; count < 4; count++){
		
		person_print(&data, count);
	}
	
	return 0;
}

void person_input(person *pdata, int count){
	printf("Name?: ");
	scanf("%63s", pdata->name);
	printf("Age?: ");
	scanf("%d", &pdata->age);
	printf("Sex?: ");
	scanf("%31s", pdata->sex);
	
	printf("\n");
	
	return;
}

void person_print(person *pdata, int count){
	printf("Name of person %d is %s\n", count, pdata->name);
	printf("Age of person %d is %d\n", count, pdata->age);
	printf("Sex of person %d is %s\n", count, pdata->sex);
	printf("\n");
	
	return;
}
