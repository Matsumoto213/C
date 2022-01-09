#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

typedef char String[1024];


// iscanf関数は使う回数が多そうなのでたくさん使用できそう
// iscanf関数の原点
int iscanf(void){
    String inputstr;
    scanf("%s",inputstr);
    return atoi(inputstr);
}

int calcPayment(int dividend, int divisor){
    // 支払い総額がdividend,人数がdivisor
    double dum = (double)dividend / divisor;

    int person = (int) (dum / 100) * 100;

    if (dum > person){
        person = person + 100;
    }

    return person;
}

void showPayment(int general, int manager, int numbers){
    printf("支払額\n");
    printf("一人当たり%d円（%d人）、幹事は%d円です\n",general,numbers - 1, manager);
}


int main(void){

    printf("支払総額を入力してください：\n");
    int amount = iscanf();

    printf("参加人数を入力してください：\n");
    int people = iscanf();

    int pay = calcPayment(amount, people);

    int payorg = amount - pay * (people - 1);

    showPayment(pay, payorg, people);
    return 0;
}