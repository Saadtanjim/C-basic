# include <stdio.h>
# include <stdlib.h>
int main ()
{
  int a, b;
  printf ("Enter any number twice with a space between them : ");
  scanf ("%d %d", &a, &b);
  int max;
  max = (a>b) ? a : b;
  printf ("The bigger number is : %d\n", max);
  return 0;
}
