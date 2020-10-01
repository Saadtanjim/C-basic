#include <stdio.h>
int cheack_prime (int n)
{
  int i;
  if (n<2)  {
    return 0;
  }
  for (i=2; i<n; i++) {
    if (n % i == 0) {
      return 0;
    }
  }
  return 1;
}
int main ()
{
  int n;
  while (1) {
    printf ("\nEnter any number (Enter 0 to end the program :( ) : ");
    scanf ("%d", &n);
    if (n == 0) {
      break;
    }
    if (1 == cheack_prime (n))  {
      printf ("\nThe Number you input is a prime number :) \n");
    }
    else  {
      printf ("\nIt's not prime :( \n");
    }
  }
  return 0;
}
