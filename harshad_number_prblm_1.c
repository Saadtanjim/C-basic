# include <stdio.h>
int main ()
{
  int n, a, sum_of_digit = 0;
  printf ("Enter a number :) : ");
  scanf ("%d", &n);
  a = n;
  while (n>0)
  {
    sum_of_digit += (n%10);
    n = n/10;
  }
  printf ("SUm is : %d\n", sum_of_digit);
  if (a % sum_of_digit == 0)
  {
    printf ("It's harshad :) ");
  }
  else
  {
    printf ("It's not harshad :(");
  }
  return 0;
}
