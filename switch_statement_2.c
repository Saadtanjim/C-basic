# include <stdio.h>
int main ()
{
  int c;
  printf ("Enter a character from (a,b,c) :");
  c = getchar ();
  switch (c)  {
    case 'A':
    case 'a':
      printf ("You are a");
      break;
    case 'B':
    case 'b':
      printf ("You are b");
      break;
    case 'C':
    case 'c':
      printf ("You are c");
      break;
    default:
      printf ("You didn't press any of those :(");
      break;
  }
  return 0;
}
