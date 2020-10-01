# include <stdio.h>
int main ()
{
  int n, a=0, digit = 0;
  printf ("Enter a number :) : ");
  scanf ("%d", &n);
  do {
    digit++;
    n = n/10;
  } while (n>0);
  printf ("%d", digit);
  return 0;
}
