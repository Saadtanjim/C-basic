# include <stdio.h>
int is_prime (int n)
{
  int i;
  if (n<2)  {
    return 0;
  }
  else if (n == 2 || n == 3) {
    return 1;
  }
  else if (n % 2 == 0) {
    return 0;
  }
  for (i=3; i<n/2; i+2) {
    if (n % i == 0) {
      return 0;
    }
  }
  return 1;
}
int main ()
{
  int n;
  printf ("Enter any number (enter 0 to exit the program): ");
  while (1) {
    scanf ("%d", &n);
    if (n == 0)
    {
      break;
    }
    if (1 == is_prime (n))  {
      printf ("Prime :) \n");
    }
    else  {
      printf ("Not PRime :( \n");
    }

    printf ("\nEnter another number or 0 to exit the program :) ");
  }
  return 0;
}
