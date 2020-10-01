# include <stdio.h>
int main()
{
  int n, temp, fact = 1;
  printf ("ENter a number :");
  scanf ("%d", &n);
  temp = n;
  while (temp)
  {
    temp = temp/10;
    fact = fact*10;
  }
  printf ("The digit of your given number is : ");
  while (fact>1)
  {
    fact = fact / 10;
    printf ("%d ", n/fact);
    n = n % fact;
  }
  return 0;
}
