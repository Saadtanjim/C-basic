# include <stdio.h>
int main ()
{
  int i, n, a[5], temp;
  scanf("%d", &n);
  printf ("Enter five number: ");
  for (i=0; i<n; i++)
  {
    scanf ("%d", &a[i]);
  }
  int last_index = n - 1;
  for(i = 0; i<n/2; i++) {
    temp = a[i];
    a[i] = a[last_index];
    a[last_index] = temp;

    last_index--;saw
  }
  for(i = 0; i<n; i++) {
    printf("%d ", a[i]);
  }
}
