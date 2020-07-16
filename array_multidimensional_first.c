# include <stdio.h>
int main ()
{
  int a[5][5];
  int rows, columns;
  printf ("Enter how many rows you want less than equal five:");
  scanf ("%d", &rows);
  printf ("Enter how many columns you want less than equal five:");
  scanf ("%d", &columns);
  printf ("Enter all the number :) :");
  for (int i = 0; i<rows; i++)
  {
    for (int j = 0; j<columns; j++)
    {
      scanf ("%d", &a[i][j]);
    }
  }
  for (int i = 0; i<rows; i++)
  {
    for (int j = 0; j<columns; j++)
    {
      printf ("%d ", a[i][j]);
    }
    printf ("\n");
  }
  return 0;
}
