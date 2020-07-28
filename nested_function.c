# include <stdio.h>
int a (int n)
{
  if(n % 2 == 0) {
    return n/2;
  }
  return 3 * n + 1;
}
int b (int n)
{
  if(n <= 0) {
      return n;
  }
  int p = a(n-1);
  return a(p);
}
int c (int n)
{
  if(n <= 0) {
      return n;
  }
  int p = b(n-1);
  return b(p);
}
int d (int n)
{
  if(n <= 0) {
      return n;
  }
  int p = c(n-1);
  return c(p);
}
int e (int n)
{
  if(n <= 0) {
      return n;
  }
  int p = d(n-1);
  return d(p);
}

void main(){
  printf("%d\n", e(10));
}
