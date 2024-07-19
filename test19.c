#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char name[64];
	int age;
	char sex[32];
} person;

void person_input(person *pdata, int count);
void person_print(person *pdata, int count);


int main(void){
	person data;
    int count, i;
    int* pData;

    printf("Enter the a number of people: ");
    scanf("%d", &count);
    pData = (int*)malloc(sizeof(int) * count);

    if(pData == NULL || count < 0){
        exit(0);
    }
	
    i = 1;

	while(i <= count){
		printf("Enter the information of person %d\n", i);
		
		person_input(&data, i);

        i++;
	}
	
	printf("\n\n\n");
	
	i = 1;
	
	while(i <= count){
		
		person_print(&data, i);

        i++;
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