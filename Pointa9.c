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
    int x; //  整数型変数
    int *p; //  ポインタを格納するための変数
    x = 10; //  [x]に10を代入

    p = &x;  // [x]のアドレスを[p]に代入


    printf("「p」の中身は「%p」です\n",p);  // 「p」の中身　= 「x」のアドレスを表示
    printf("「p」の格納先の中身は「 %d 」です\n", *p); //「p」の格納先の中身　= 「x」の中身を表示
    printf("「x」のアドレスは「　%p　」で\n", &x); //「x」のアドレスを表示
    printf("「x」の中身は「　%d　」です\n", x);  //「x」の中身を表示
    return 0;
}