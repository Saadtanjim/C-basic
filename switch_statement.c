# include <stdio.h>
int main ()
{
  int hello;
  printf ("Enter any number from (1,2,3):) : ");
  scanf ("%d", &hello);
  switch (hello)  {
    case 1:
      printf ("You pressed 1");
      break;
    case 2:
      printf ("You pressed 2");
      break;
    case 3:
      printf ("You pressed 3 ;) ");
      break;
    default:
      printf ("You didn't press 1, 2 nor 3 :(");
      break;
  }
  return 0;
}
