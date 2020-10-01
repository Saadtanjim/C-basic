# include <stdio.h>
int main ()
{
  int ara[100], number_of_students, i;
  int sum_of_boys = 0, sum_of_girls = 0;
  char ch;
  char boys = 'b', girls ='g';
  printf ("Enter do you want girls or boys : press b/y : ");
  ch = getchar ();
  printf ("Enter how many students you want :) : ");
  scanf ("%d", &number_of_students);
  printf ("ENter those students number : ");
  for (i=0; i<number_of_students; i++)  {
    scanf ("%d", &ara[i]);
  }
  if (ch == boys) {
    for (i=0; i<number_of_students; i=+2)  {
      sum_of_boys += ara[i];
    }
    printf ("The boys total sum is : %d\n", sum_of_boys);
  }
  else  {
    for (i=1; i<number_of_students; i=+2)  {
      sum_of_girls += ara[i];
    }
    printf ("The girls total sum is : %d\n", sum_of_girls);
  }
  return 0;
}
