# include <stdio.h>
void recurtion5 (int n)
{
  if (n == 1)
  {
    printf ("1 " );
  }
}
void recurtion4 (int n)
{
  if (n == 1)
  {
    printf ("1 " );
    return;
  }
  recurtion5 (n-1);
  printf ("%d ", n);
}
void recurtion3 (int n)
{
  if (n == 1)
  {
    printf ("1 " );
    return;
  }
  recurtion4 (n-1);
  printf ("%d ", n);
}
void recurtion2 (int n)
{
  if (n == 1)
  {
    printf ("1 " );
    return;
  }
  recurtion3 (n-1);
  printf ("%d ", n);
}
void recurtion1 (int n)
{
  if (n == 1)
  {
    printf ("1 ");
    return;
  }
  recurtion2 (n-1);
  printf ("%d ", n);
}
int main ()
{
  int n;
  printf ("Enter any number: ");
  scanf ("%d", &n);
  recurtion1 (n);
  return 0;
}
