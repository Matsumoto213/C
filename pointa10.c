#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

typedef char String[1024];

int main(void){
    int i[3] = {1, 2, 3};
    printf("%p\n", i);
    printf("%d\n", *i);


}