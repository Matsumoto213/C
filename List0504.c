#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

typedef char String[1024];


int main(void){
    const int DAIKICHI = 1;
    const int CHUKICHI = 2;
    const int KICHI = 3;
    const int KYO = 4;

    printf("あなたの運勢を裏あいます\n");
    srand((unsigned)time(0UL));

    int fortune = rand() % 4 + 1;

    switch(fortune){
        case DAIKICHI:
            printf("大吉\n");
            break;

        case CHUKICHI:
            printf("中吉\n");
            break;

        case KICHI:
            printf("吉\n");
            break;

        default:
            printf("凶\n");
    }

    return 0;
}