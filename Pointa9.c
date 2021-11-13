#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

typedef char String[1024];

int iscanf(void){
    String inputstr;
    scanf("%s",inputstr);
    return atoi(inputstr);
}

int main(void){
    int* p = 0;
    printf("%d\n", *p);
    return 0;
}