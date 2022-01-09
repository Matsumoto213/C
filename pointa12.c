#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

typedef char String[1024];

// int iscanf(void){
//     String inputstr;
//     scanf("%s",inputstr);
//     return atoi(inputstr);
// }

void zero_one(int* p){
    p[0] = 0;
    p[1] = 1;
}

int main(void){
    int i[2] = {2, 3};
    zero_ont(i);

    printf("%d\t%d\n", i[0], i[1]);
}