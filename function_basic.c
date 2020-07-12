#include<stdio.h>

// return type - void / int / flot / doube
// function name + (parameter)
// {
// function body
//}

void onlyPrintMyName() {
  printf("My Name Is Tanzim\n");
}

int doSum(int n, int m) {
  int sum;
  n = 200; m = 500;
  sum = n + m;
  printf("Before Return\n");
  return sum;
  printf("After Return\n");
}

int main() {
  int n, a = 5, b = 10;
  onlyPrintMyName();
  n = doSum(a, b);
  printf("a = %d, b = %d\n", a, b);
  printf("Sum is: %d\n", n);
  return 0;
}
