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


void zero_one(int* l, int* m){
    *l = 0;
    *m = 1;
}
int main(void){
    int i = 2, j = 3;
    zero_one(&i, &j);
    printf("%d/t%d\n", i, j);
}
