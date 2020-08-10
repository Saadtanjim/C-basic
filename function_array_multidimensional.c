# include <stdio.h>
void print_array (int a[], int size)
{
  for (int j = 0; j<size; j++)
  {
    printf (" %d ", a[j]);
  }
  printf ("\n");
}
int main ()
{
  int a[5][5], n, i, j;
  int rows, columns;
  printf ("Enter how many rows you want :");
  scanf ("%d", &rows);
  printf ("Enter how many columns you want :");
  scanf ("%d", &columns);
  printf ("Enter all those number : ");
  for (i = 0; i<rows; i++)
  {
    for (j = 0; j<columns; j++)
    {
        scanf ("%d", &a[i][j]);
    }
  }
  for (i=0 ; i<rows; i++)
  {
    print_array (a[i], columns);
  }
  return 0;
}
