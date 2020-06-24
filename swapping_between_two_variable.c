# include <stdio.h>
int main ()
{
    int a, b;
    printf ("Enter two number you want to swap between them..:");
    scanf ("%d %d", &a, &b);
    int i, j;
    i = a;
    j = b;
    a = j;
    b = i;
    printf ("\nThe number after swap is :%d, %d", a, b);
    return 0;
}
