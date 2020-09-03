# include <stdio.h>
// Library function of string join is "strcpy"
void string_copy (char c[])
{
  int i;
  char copy [100];
  for (i=0; c[i] != '\0'; i++)
  {
    copy [i] = c [i];
  }
  copy[i] = '\0';
  printf ("%s\n", copy);
}
int main ()
{
  char st [] = "Hello :)";
  string_copy (st);
  return 0;
}
