#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

typedef char String[1024];


int main(void){
    int const MONEY = 3000;
    int pocket = MONEY;

    printf("リンゴ ");

    while(pocket >= 120){
        printf("*");
        pocket = pocket - 120;
    }
    printf("　余りは%d円\n",pocket);

    pocket = MONEY;
    printf("ミカン  ");

    while (pocket >= 400){
        for(int i = 1; i <= 6; i++){
            printf("*");
        }
        pocket = pocket - 400;
    }
    printf("余りは%d円", pocket);
    return 0;
}