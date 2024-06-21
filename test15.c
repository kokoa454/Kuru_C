#include <stdio.h>

void comp(int arraySub[], int *min, int *max);
int closeOrNot(void);
int checkMoreOrNot(void);


int main(void){
  int array[10];
  int i = 0;
  int min = 100, max = 0;

  do {
    printf("No.%d: ", i + 1);

    if (scanf("%d", &array[i]) != 1) {
      printf("Invalid input. Enter a number again!: ");
      while (getchar() != '\n');
      continue;
    }

    if (array[i] > 100 || array[i] < -2) {
       printf("Invalid input. Enter a number between -2 and 100!\n");
       continue;
    }

    i++;

    if (i >= 11) {
      printf("ERROR: More than 10 numbers entered!\n");
      while (getchar() != '\n');
      closeOrNot();
      break;
    }
  } while(array[i - 1] != -1);

  comp(array, &min, &max); //minとmaxのアドレスがcomp関数に渡される

  printf("Minimum value in the array is %d\nMaximum value in the array is %d\n", min, max);
  while (getchar() != '\n');
  checkMoreOrNot();
  return 0;
}


void comp(int arraySub[], int *pMin, int *pMax){ //ポインタ変数を宣言
  int i = 0;

  while (arraySub[i] != -1) {
    if (arraySub[i] > *pMax) {
      *pMax = arraySub[i];
    }

    if (arraySub[i] < *pMin) {
      *pMin = arraySub[i];
    }

    i++;
  }
  return;
}


int closeOrNot(void) {
  char response;

  do {
    printf("Do you want to re-enter numbers again? (y/n): ");

    scanf(" %c", &response);

    if (response == 'y') {
      main();
      return 0;
    } else if (response == 'n'){
      printf("Good bye!\n");
      return 0;
    }else {
      printf("Invalid input. Please enter 'y' or 'n'.\n");
    }
  } while(response != 'y' && response != 'n');
}


int checkMoreOrNot(void){
  char response;

  do {
    printf("Do you want to check another numbers? (y/n): ");

    scanf(" %c", &response);

    if (response == 'y') {
      main();
      return 0;
    } else if (response == 'n'){
      printf("Good bye!\n");
      return 0;
    } else {
      printf("Invalid input. Please enter 'y' or 'n'.\n");
    }
  } while(response != 'y' && response != 'n');
}
