# include <stdio.h>
int main ()
{
    int a = 100.255;
    double b = a;
    printf ("%.3lf is double and %d is integer", b, a);
    return 0;
}
