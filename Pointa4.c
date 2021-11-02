#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

typedef char String[1024];


struct sample{
    int a;
    int b;
};


void func(struct sample* s){
    for(int i = 0; i < 10;i++){
        s->a *= i;
        s->b += i;
    }
}



int main(){
    struct sample s;
    struct sample* sp = &s;

    s.a = 1,s.b = 0;

    func(sp);

    printf("%d\n",s.a);
    printf("%d\n",s.b);

    return 0;
}

