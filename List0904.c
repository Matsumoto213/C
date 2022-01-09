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
    int a = 70;
    printf("変数aには70が入っています\n");

    int* addrA = &a;
    printf("変数aのアドレス: %p\n", addrA);

    printf("%d\n",*addrA);

    return 0;
}