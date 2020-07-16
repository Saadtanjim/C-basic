# include <stdio.h>
void print_array (int a[], int size)
{
  printf ("This is through function : ");
  for (int i = 0; i<size; i++)
  {
    a[i]++;
    printf ("%d ", a[i]);
  }
  printf ("\n");
}

int main ()
{
  int a[5], i, n;
  printf ("Enter how many number you want on array :");
  scanf ("%d", &n);
  printf ("Enter all the number :");

  for (i = 0; i<n; i++)
  {
  scanf ("%d", &a[i]);
  }
  printf ("This is before print array function :");
  for (i = 0; i<n; i++)
  {
    printf ("%d ", a[i]);
  }
  printf ("\n");
  print_array (a, n);
  printf ("This is after funtion in main function: ");
  for (i = 0; i<n; i++)
  {
    printf ("%d ", a[i]);
  }
  return 0;
}
