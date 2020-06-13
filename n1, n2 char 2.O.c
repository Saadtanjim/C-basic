# include <stdio.h>
int main ()
{
    int a, b;
    char q, w, e, r;
    q='+', w='-', e= '*', r='/';
    printf ("Number :");
    scanf ("%d", &a);
    printf ("Another number :");
    scanf ("%d", &b);
    printf ("Addition is %d %c %d = %d\n", a, q, b, a+b);
    printf ("Substraction is %d %c %d = %d\n", a, w, b, a-b);
    printf ("Multiplication is %d %c %d = %d\n", a, e, b, a*b);
    printf ("Division is %d %c %d = %d\n", a, r, b, a/b);
    return 0;
}
