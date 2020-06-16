# include <stdio.h>
int main ()
{
    int i, n;
    int sum_even = 0, sum_odd = 0;
    printf ("Enter any number you like :");
    scanf ("%d", &n);
    for (i=1; i<=n; i++)
    {
        if ( n % i == 0)
        {
            if (i % 2 == 0)
            {
                sum_even = sum_even + i ;
            }
            else
            {
                sum_odd = sum_odd + i;
            }
        }
    }
    printf ("Summation of Even is : %d\n", sum_even);
    printf ("Summation of odd is :%d\n", sum_odd);
    return 0;
}
