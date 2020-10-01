# include <stdio.h>
int addition (int hello, int hello_2);
int main ()
{
  int a = 20, b = 10;
  int answer;
  answer = addition (&a, &b);
  printf ("The total of two number is : %d\n", answer);
  return 0;
}
int addition (int a, int b)
{
  return a + b;
}
