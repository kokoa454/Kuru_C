#include <stdio.h>

int main(void){
	int data[10];
	int count = sizeof(data) / sizeof(data[0]);
	
	for(int i; i <= count; i++){
		printf("Input the number for an array[%d]: ", i);
		scanf("%d", &data[i]);
	}
	
	for(int j = count; j >= 0; j--){
		printf("%d\n", data[j]);
	}
	
	return 0;
}