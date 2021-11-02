#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

typedef char String[1024];


int main(void){
    typedef int IntX10[10];
    IntX10 gems;

    gems[1] = 3;
    printf("%d\n",gems[1]);
    return 0;
}