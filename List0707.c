#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

typedef char String[1024];


int main(void){
    srand((unsigned)time(0UL));
    enum{FIRE,WATER,WIND,EARTH};
    const char GEM_CHARS[] = {'S','*','@','#'};
    int gems[10];

    // 宝石10個の内容を画面に表示
    for(int i = 0; i < 10; i++){
        printf("%c",GEM_CHARS[gems[i]]);
    }
    return 0;
}