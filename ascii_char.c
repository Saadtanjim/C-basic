# include <stdio.h>

void main ()
{
    char a, b;
    int c;
    scanf ("%c%c", &a, &b);
    c = a + b;
    printf ("a = %c\n", a);
    printf ("b = %c\n", b);
    printf ("Ascii value of a = %d\n", a);
    printf ("Ascii value of b = %d\n", b);
    printf ("Summation of a & b = %d\n", c);
}
