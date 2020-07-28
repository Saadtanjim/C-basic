# include <stdio.h>


void print3nplus1 (int n)
{
  printf("%d, ", n);
  if(n == 1) {
    return;
  }
  if(n % 2 == 0) {
    print3nplus1(n/2);
  }else {
    print3nplus1(3*n+1);
  }
}
int main ()
{
  int n;
  printf("Press 0 to end the program\n ");
  while(1) {
    scanf("%d", &n );
    if(n == 0) {
      break;
    }
    print3nplus1(n);
    printf("\n");
  }
}
