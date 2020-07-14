# include <stdio.h>
int main ()
{
  int i, n, b[5], a[5];
  printf ("Enter five number: ");
  for (i=0; i<5; i++)
  {
    scanf ("%d", &a[i]);
  }
  int last = n -1;
  for (i=0; i<5; i++)
  {
      b[last--]=a[i];
      //last--;
  }
  /*b[4]=a[0];
  b[3]=a[1];
  b[2]=a[2];
  b[1]=a[3];
  b[0]=a[4];
  */
  printf ("Reverse number is : ");
  for (i=0; i<5; i++)
  {
    a[i] = b[i];
    printf ("%d ", a[i]);
  }
  return 0;
}
