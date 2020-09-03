# include <stdio.h>
// Library function of string join is "strcat"
void string_join (char s[], char p[])
{
  int i = 0, j;

  for (j=0; p[j] != '\0'; j++)
  {
    s[i] = p[j];
    i++;
  }
  s[i] = '\0';
  printf ("%s\n", s);
}

int main ()
{
  char i [] = "Hello ";
  char j [] = "I'm Tanjim";
  string_join (i, j);
  return 0;
}
