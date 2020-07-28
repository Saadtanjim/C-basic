# include <stdio.h>

void print3nPlus1(int n) {
  printf("%d ", n);
  while (n > 1)
  {
    if (n % 2 == 0)
      {
        n = n/2;
      }
    else
      {
         n = 3 * n + 1;
      }
      printf("%d ", n);
  }
  printf("\n");
}

int main ()
{
  int n;
  printf ("Enter any number: ");
  while(scanf ("%d", &n) == 1) {
    if(n == 0) {
      break;
    }
    print3nPlus1(n);
    printf ("Enter any number: ");
  }
  return 0;
}
