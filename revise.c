# include <stdio.h>
void sum_det (int a)
{
  int sum_even = 0, sum_odd = 0;
  int i;
  printf ("All summation is : ");
  for (i=1; i <= a; i++)
  {
    if (a % i == 0)
    {
      printf (" %d ", i);
      if (i % 2 == 0)
      {
        sum_even = sum_even + i;
      }
      else
      {
        sum_odd = sum_even + i;
      }
    }
  }
  printf ("\n");
  printf ("Sum of even divisor : %d\n", sum_even);
  printf ("Sum of odd divisor : %d\n", sum_odd);
  printf ("Summation of all Divisor : %d\n", sum_even+sum_odd);
}
int main ()
{
  int n;
  printf ("Enter any number :) : ");
  scanf ("%d", &n);
  sum_det (n);
  return 0;
}
