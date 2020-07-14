#include<stdio.h>

// global variable
// constant variable

#define MAXN 100

const double PI = 3.14159;

int number[MAXN];
int im_global_variable;

// varibale scope
int squareFuction() {
  im_global_variable = im_global_variable * im_global_variable;
}

int makeDouble() {
  im_global_variable = im_global_variable * 2;
}

void main() {
  printf("%d\n",im_global_variable);
  im_global_variable ++; // 1
  squareFuction(); // 1
  printf("%d\n", im_global_variable);
  makeDouble(); // 2
  printf("%d\n", im_global_variable);
  squareFuction(); // 4
  squareFuction(); // 16
  makeDouble(); // 32
  printf("%d\n", im_global_variable);
  for(int i = 0; i<MAXN; i++) {
    printf("*");
  }
  printf("\n");
}
