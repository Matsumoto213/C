#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

typedef char String[1024];


int main(void){
    srand((unsigned)time(0UL));
    enum{FIRE, WATER,WIND, EARTH};
    int gems[10];

    for (int i = 0; i < 10; i++){
        int gemType = rand() % 4;
        gems[i] = gemType;
    }
    return 0;
}