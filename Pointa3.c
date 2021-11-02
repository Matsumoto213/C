#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

typedef char String[1024];

void func(int* a){
    for(int i = 0;i < 10;i++){
        *(a++) = i;
    }
}

int main(void){
    int a[20];
    for(int i = 0; i < 20; i++){
        a[i] = 0;
    }
    
    func(a);

    for (int i = 0; i < 20; i++){
        printf("%d,",a[i]);
    printf("\n");
    }

    return 0;
}