# include <stdio.h>
void string_rev (char rev [])
{
  int length = strlen (rev);
  char temp;
  int last = length - 1;
  for (int i = 0; i < length/2; i++)
  {
    temp = rev[i];
    rev[i] = rev[last];
    rev[last] = temp;
    last--;
  }
  printf ("\nREverse is : %s\n", rev);
}
int main ()
{
  char j [5];
  printf ("Enter character not more than five : ");
  gets (j);
  string_rev (j);
  return 0;
}
