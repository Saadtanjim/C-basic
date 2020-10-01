# include <stdio.h>
int main ()
{
  int age;
  s:
    printf ("You are an adult :)\n");
  f:
    printf ("You are not :(\n");
  printf ("Enter last two digit of your mobile number :");
  scanf ("%d", &age);
  if (age>=18)
    goto s;
  else
    goto x;
  x:
  return 0;
}
