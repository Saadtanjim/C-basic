# include <stdio.h>

int doDouble(int n) {
  if( n <= 1) {
    return n;
  }
  if( n % 2 == 0) {
    return n / 2;
  }
  return n + 1;
}

int doCalculatin(int n) {
//  int result = doDouble(n) + doDouble(n/2) + doDouble(n*2);
int x = doDouble(n);
int y = doDouble(x);
int z = doDouble(y);
int result = doDouble(z);
  return result;
}

int main ()
{
  printf("%d\n", doCalculatin(10));
}
