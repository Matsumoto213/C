#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

typedef char String[1024];


int main(void){
    printf("いただきます\n");
    printf("バナナを食べます\n");

    bool more = true;


    if (more == true){
        printf("お変わりをください\n");
    }else{
        printf("お腹がいっぱいです\n");
    }
    printf("ごちそうさまでした\n");
    return 0;
}