# include <stdio.h>
int factorial (int n)
{
  int i = 0;
  int factorial = 1;
  for (i=n; i>0; i--)
  {
    factorial *= i;
  }
  return factorial;
}
int main ()
{
  int x, a;
  printf ("Enter a number you want of factorial:");
  scanf ("%d", &x);
  a = factorial (x);
  printf ("\nThe factorial of the number you gave: %d\n", a);
  printf ("\nAnother factorial could be: %d\n", factorial(3));
  return 0;
}
