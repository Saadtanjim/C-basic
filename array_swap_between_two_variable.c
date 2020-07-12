# include <stdio.h>
int main ()
{
  int a[15], b[15], k, l;
  printf ("Enter How many Number you want to input less than equal:");
  scanf ("%d", &l);
  printf ("Enter all the number:");
  for (k=0; k<l; k++)
  {
    scanf ("%d", &a[k]);
  }
  for (k=0; k<l; k++)
  {
    b[k] = a[k];
    printf ("\n%d\n", b[k]);
  }
  return 0;
}
