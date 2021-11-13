#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

typedef char String[1024];

int printIntByAddress(int* valAddr){
    printf("変数aが格納されているアドレス%p\n", valAddr);
}

int main(void){
    int a = 999;
    printIntByAddress(&a);
    return 0;
}