#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

typedef char String[1024];


typedef struct sample{
    int a;
}data;

int main(void){
    data s;
    data* sp;
    s.a = 1;
    sp->a += 1;

    return 0;
}