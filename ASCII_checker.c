#include <stdio.h>

int main(void){
	char character;
	char list[52];
	
	for(int i = 0; i < 26; i++){
		list[i] = 'A' + i;
	}
	
	for(int i = 0; i < 26; i++){
		list[26 + i] = 'a' + i;
	}
	
	printf("Enter a character whose ASCII code you'd like to know: ");
	while(scanf("%c", &character) != 1 || getchar() != '\n'){
		printf("Enter only one alphabetical character: ");
		while((getchar()) != '\n');
	}
	
	int flg = 0;
	
	for(int i = 0; i < 52; i++){
		if(character == list[i] && (character >= 'A' && character <= 'Z')){
			printf("ASCII code of the character you entered is %d.\n", i + 65);
			flg = 1;
			break;
		} else if(character == list[i] && (character >= 'a' && character <= 'z')){
			printf("ASCII code of the character you entered is %d.\n", i + 71);
			flg = 1;
			break;
		} 
	}
		
	if(!flg){
		printf("The character you entered is NOT included to alphabetical ASCII code.\n");
	}
	
	return 0;
}