#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

typedef char String[1024];

int add(int x, int y){
    int ans = x + y;
    return ans;
}

int main(void){
    int year = 2018;
    int ans1 = add(year,4);
    printf("%d",ans1);
    return 0;
}