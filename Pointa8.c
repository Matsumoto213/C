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
    printf("aには70が入っています\n");

    int* addrA = &a;
    printf("変数aのアドレス%p\n",addrA);
    printf("%p番地にはいているのは%dです",addrA,*addrA);
    return 0;
}