# include <stdio.h>
int main ()
{
    int a, i;
    int even = 0, odd = 0;
    int sum = 0, sum1 = 0;
    printf ("Enter the number you want :");
    scanf ("%d", &a);
    for (i=1; i<=a; i++)
    {
        if (a % i == 0)
        {
            printf ("\nAll Divisor is :");
            printf ("%d ", i);
            if (i % 2 == 0)
            {
                even++;
                sum = sum + i;
            }
            else
            {
                odd++;
                sum1 = sum1 + i;
            }
        }
    }
    printf ("\n\nNumber of even divisor is : %d\n", even);
    printf ("\n\nNumber of odd divisor is : %d\n", odd);
    printf ("\n\nSum of even divisor is : %d\n", sum);
    printf ("\n\nSum of odd divisor is ; %d\n", sum1);
    return 0;
}
