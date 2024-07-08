#include <stdio.h>

int main(void){
	FILE *file;
	
	file = fopen("test.csv", "w");
	fprintf(file, "Num, Name, The average points of test/n");
	fprintf(file, "1, Nobita Nobi, 0/n");
	fprintf(file, "2, Shizuoka Minamoto, 90/n");
	fprintf(file, "3, Takeshi Goda, 40/n");
	fprintf(file, "4, Suneo Honekawa, 7/n");
	fclose(file);
	
	return 0;
}