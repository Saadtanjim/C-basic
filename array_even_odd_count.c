# include <stdio.h>
int main ()
{
  int n, i, even=0,odd=0;
  int a[10];
  printf ("Enter how many number you want to input less than equal 10: ");
  scanf ("%d", &n);
  for (i=0; i<n; i++)
  {
    scanf ("%d", &a[i]);
  }
  for (i=0; i<n; i++)
  {
    if (a[i] % 2 == 0)
    {
      even++;
    }
    else
    {
      odd++;
    }
  }
  printf ("Even count :%d And odd count is :%d", even, odd);
  return 0;
}
