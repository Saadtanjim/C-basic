# include <stdio.h>
int getstringlength (char a[])
{
  int i;
  for (i = 0; a[i]!= '\0'; i++);
  return i;
}
void print_string_reverse (char a[])
{
  int str_length, n;
  str_length = getstringlength(a);
  printf ("%d\n", i);
  for (n=str_length-1;n>=0; n--)
  {
    printf ("%c", a[n]);
  }
  //for (; a[i]>=0; i--)

}
int main ()
{
  char str[100];
  gets (str);
  char c = str[0];
  print_string_reverse (str);
  return 0;
}
