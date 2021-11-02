#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

typedef char String[1024];


void func(int* a,int* b){
  *a += 100;
  *b += 200;
}

int main(){
  int i = 10;
  int j = 20;
  int* p1;
  int* p2;

  p1 = &i;
  p2 = &j;

  func(p1,p2);
  // i == 110, j == 220
  func(&i,&j);
  // i == 210, j == 420

  return 0;
}