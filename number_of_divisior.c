# include <stdio.h>
int main ()
{
    int a,b;
    int total_divisor = 0;
    printf ("Enter any number between 1 to 100000  :");
    scanf ("%d", &b);
    for (a=1; a<=b; a++)  {
          if (b % a == 0)    {
                total_divisor ++;
        }
    }
    printf("Total divisors: %d\n", total_divisor);
    return 0;
}
