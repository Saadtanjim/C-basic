# include <stdio.h>
int main ()
{
  int n, a, rev = 0, t;
  printf ("Enter a number : ");
  scanf ("%d", &n);
  a = n;
  while (n>0)
  {
    t = n % 10;
    rev = rev * 10 + t;
    n /= 10;
  }
  if (rev == a)
  {
    printf ("IT's palindrome number : ");
  }
  else
  {
    printf ("IT's not :( ");
  }
  return 0;
}
