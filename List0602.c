#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

typedef char String[1024];


int main(void){
    // 構造体定義と同時に別名Monsterを付与
    typedef struct{
        String name;
        int hp;
        int attack;
    }Monster;

    // 構造体変数を宣言すると同時に初期化を行う
    Monster seiryu = {"青龍",80,15};
    Monster suzaku = {"朱雀",100,30};
    Monster byakko = {"白虎",100,20};
    Monster genbu = {"玄武",120,10};

    const String TEMPLATE = "%s : HP = %3d　攻撃力= %2d\n";

    printf(TEMPLATE, seiryu.name, seiryu.hp, seiryu.attack);

    return 0;
}