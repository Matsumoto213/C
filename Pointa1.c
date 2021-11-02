#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

typedef char String[1024];


int main(void){
    int i;
    int* p;
    p = &i;

    printf("%p\n",&i);
    printf("%p\n",p);


}