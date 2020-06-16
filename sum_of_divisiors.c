# include <stdio.h>
int main ()
{

    int a, b, sum = 0;
    int total_divisor = 0;
    printf ("Enter any number between  1 to 100000 :");
    scanf ("%d", &a);
    for (b=1; b<=a; b++)
    {
        if (a % b == 0)
        {
            total_divisor++;
            printf ("List of Divisor is :%d\n", b);
            sum = sum + b;
        }
    }
    printf ("Summation of Divisor would be : %d\n", sum);
    printf ("Total Divisor would be : %d\n", total_divisor);
    return 0;
}
