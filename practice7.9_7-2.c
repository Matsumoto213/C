#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

typedef char String[1024];


int main(void){
    enum {LEN = 5};
    int scores[5] = {88,61,90,75,93};
    int sum = scores[0];
    int max = scores[0];
    int min = scores[0];

    for (int i = 1; i < LEN; i++){
        sum = sum + scores[i];

        if (max < scores[i]){
            max = scores[i];
        };

        if (min > scores[i]){
            min = scores[i];
        };
    }
    printf("合計点：%d\n",sum);
    printf("最高点：%d\n",max);
    printf("最低点：%d\n",min);

    return 0;
}
