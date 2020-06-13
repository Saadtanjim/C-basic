# include <stdio.h>
int main ()
{
    double a, b, c;
    printf ("Enter point number ..:");
    scanf ("%lf", &a);
    printf ("Enter another point :");
    scanf ("%lf", &b);
    printf ("%.2lf + %.2lf = %.2lf\n", a, b, a+b);
    printf ("%lf - %lf = %lf\n", a, b, a-b);
    printf ("%lf * %lf = %lf\n", a, b, a*b);
    printf ("%lf / %lf = %lf\n", a, b, a/b);
    return 0;
}
