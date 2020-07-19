# include <stdio.h>
int main ()
{
  int a = 5, b = 6, c = 7, d;
  d = a++ + --b + c++;
  --a;
  a--;
  b++;
  --b;
  c++;
  printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);
  for (int i=1; i<=5; ++i)
  {
    printf ("%d ", i);
  }
  printf ("\n");
  int x = 5 + 6 * 7 / 2 - 1;
  printf ("%d", x);
  return 0;
}
