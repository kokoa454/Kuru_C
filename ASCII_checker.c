#include <stdio.h>
#include <ctype.h>

int main(void){
	char character;
	char response;
	
	printf("Welcome to ASCII code checker!\n");
	printf("note: only the first input character will be considered, even if you enter 2 or more characters.\n\n");
	
	do{
		printf("Enter a character whose ASCII code you'd like to know: ");
		
		character = getchar();
		while(getchar() != '\n');
		
		if(isascii(character) && isprint(character)){
			printf("ASCII code of the character you entered is %d.\n", character);
		} else {
			printf("ERROR: Non-ASCII or Non-printable character entered!\n");
			continue;
		}
		
		do{
		
			printf("Do you want to check another character? (y/n): ");
			
			response = getchar();
			
			while(getchar() != '\n');
		} while(response != 'y' && response != 'n');
		
	} while(response == 'y');
	
	printf("Good bye!\n");
	
	return 0;
}
