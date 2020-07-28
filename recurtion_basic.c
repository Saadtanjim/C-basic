#include <stdio.h>
void recurtionbasic (int n)
{
  printf ("%d ", n);
  if (1 == n)
  {
    return;
  }
  recurtionbasic (n-1);
  printf ("\n");
}
int main ()
{
  int n;
  printf ("Enter any number: ");
  scanf ("%d", &n);
  recurtionbasic (n);
  return 0;
}
