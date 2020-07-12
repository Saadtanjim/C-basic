#include<stdio.h>

int changeArrayValue(int array[], int array_size) {
  for(int i = 0; i<array_size; i++) {
    array[i] = array[i] * 2;
  }
  return 0;
}

void printMyArray(int a[], int size) {
  for(int i = 0; i<size; i++) {
    printf("%d, ", a[i]);
  }
  printf("\n");
}

int main() {
  int a[] = {3,4,5};
  printf("Before Calling funtion:\n");
  printMyArray(a, 3);
  changeArrayValue(a, 3);
  printf("After Calling funtion:\n");
  printMyArray(a, 3 );
  return 0;
}
