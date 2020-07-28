#include <stdio.h>
void recurtionbasic2 (int n)
{
  if(n == 1) {
    printf("1 ");
    return;
  }
//  printf("%d ", n);
  recurtionbasic2 (n - 1);
  printf("%d ", n);
}

int main ()
{
  int n;
  printf ("Enter any number: ");
  scanf ("%d", &n);
  recurtionbasic2 (n);
  return 0;
}
