#include <stdio.h>

int main(void){
    int min, max, sum;
    
    printf("最小値と最大値を , で区切って入力してください。：");
    scanf("%d, %d", &min, &max);
    
    sum = (max + min) * (max - min + 1) / 2;
    
    printf("%dから%dの合計は%dです。\n", min, max, sum);
    
    return 0;
}