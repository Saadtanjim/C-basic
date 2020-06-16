# include <stdio.h>
int main ()
{
    int a, i;
    int sum = 0;
    scanf ("%d", &a);
    for (i =1; i<=a; i++)
    {
        sum = sum + i;
    }

    printf("Summation of n is: %d\n", sum);
    return 0;
}
