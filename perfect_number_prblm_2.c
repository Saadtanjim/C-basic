# include <stdio.h>
int main ()
{
  int n, i;
  printf ("Enter any number : ");
  scanf ("%d", &n);
  int sum = 0;
  printf ("ALl the divisor is : ");
  for (i=1; i<n; i++)
  {
    if (n % i == 0)
    {
      printf ("%d ", i);
      sum += i;
    }
  }
  printf ("\n");
  if (sum == n)
  {
    printf ("It's perfect number :) ");
  }
  else
  {
    printf ("It's not perfect :(");
  }
  return 0;
}
