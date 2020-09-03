# include <stdio.h>
// Library function of string join is "strcmp (first string, second string)"

void string_cmp (char cmp1[], char cmp2[])
{
  int length1 = strlen (cmp1);
  int length2 = strlen (cmp2);
  for (int i = 0; i<= length1 || i <= length2; i++)
  {
    if (cmp1[i] == cmp2[i])
    {
      printf ("Two strings are same :)\n");
    }
    else
    {
      printf ("They are different :(\n");
    }
  }
}

int main ()
{
  char a[10], b[10];
  printf ("ENter two string less than equal ten : ");
  gets (a);
  gets (b);
  string_cmp (a, b);
  return 0;
}
