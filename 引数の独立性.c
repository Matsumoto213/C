#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>


// 配列の場合のみ呼び出し元の関数(main関数)に影響を与える
typedef char String[1024];

int iscanf(void){
    String inputstr;
    scanf("%s",inputstr);
    return atoi(inputstr);
}

void funcA(int x){
    x = 100;
}

void funcB(int x[3]){
    x[0] = 100;
}



int main(void){
    int a = 5;
    int b[3];
    b[0] = 5;

    funcA(a);
    funcB(b);

    printf("a = %d, b[0] = %d\n",a,b[0]);
    return 0;
}