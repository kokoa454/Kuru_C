#include <stdio.h>

void comp(int arraySub[], int *min, int *max);
int closeOrNot(void);


int main(void){
  while(1){
    int array[10];
    int i = 0;
    int min = 100, max = 0;

    do {
      printf("No.%d: ", i + 1);
      scanf("%d", &array[i]);
      i++;

      if (i > 9) {
        printf("ERROR: More than 10 numbers entered!\n");
        closeOrNot();
        break;
      }
    } while(array[i - 1] != -1);

    comp(array, &min, &max); //minとmaxのアドレスがcomp関数に渡される

    printf("Minimum value in the array is %d\nMaximum value in the array is %d\n", min, max);
    return 0;
  }
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

    response = getchar();
    while (getchar() != '\n');

    if (response == 'y') {
      return 1;
    } else if (response == 'n'){
      printf("Good bye!\n");
      return 0;
    }
  } while(response != 'y' && response != 'n');
}
