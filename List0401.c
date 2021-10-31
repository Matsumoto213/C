#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

typedef char String[1024];


int main(void){
    bool tenki = true;
    if (tenki == true){
        printf("洗濯をします\n");
        printf("散歩に行きます\n");
    }else{
        printf("映画を見ます\n");
    }
    return 0;
}