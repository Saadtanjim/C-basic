#include <stdio.h>
int summationrecurtion (int n)
{
  int sum = 0, a = 0;
  sum = sum + n;
  if (a == n)
  {
    return sum;
  }
}
int main ()
{
  int n;
  printf ("Enter any number: ");
  scanf ("%d", &n);
  summationrecurtion (n);
  printf ("%d", n);
  return 0;
}
