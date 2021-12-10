#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

typedef char String[1024];

// 変数の先頭に&アドレス演算子をつけることでその変数が記憶されたメモリの先頭アドレスを取得できる

int iscanf(void){
    String inputstr;
    scanf("%s",inputstr);
    return atoi(inputstr);
}

int main(void){
    int a = 70;
    printf("");

    long addrA = (long)&a;
    printf("変数aのアドレス:  %ld\n", addrA);
    return 0;
}