/* This is call by value
# include <stdio.h>
int addition (int hello, int hello_2);
int main ()
{
  int a = 20, b = 10;
  int answer;
  answer = addition (a, b);
  printf ("The total of two number is : %d\n", answer);
  return 0;
}
int addition (int a, int b)
{
  return a + b;
}
*/
# include <stdio.h>
int addition (int *hello, int * hello_2)
{
  return *hello + *hello_2;
}
int main ()
{
  int a, b;
  printf ("Enter any number Twice : ");
  scanf ("%d %d", &a, &b);
  int answer = addition (&a, &b);//This is call by the address of a and b or reference of a and b;
  printf ("The total of a and b is : %d\n", answer);
  return 0;
}
