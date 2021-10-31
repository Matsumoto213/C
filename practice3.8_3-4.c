#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

typedef char String[1024];


int main(void){
    String sum;
    printf("カレンダーから縦に並んだ数字を3つ選び、その合計を入力してください");
    scanf("%s", sum);

    int ans = atoi(sum) / 3;

    printf("選んだ数字は%dと%dと%dですね",ans - 7, ans, ans + 7);

    return 0;
}