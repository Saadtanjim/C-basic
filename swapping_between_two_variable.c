# include <stdio.h>
int main ()
{
    int a, b;
    printf ("Enter two number you want to swap between them..:");
    scanf ("%d %d", &a, &b);
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf ("\nThe number after swap is :%d, %d", a, b);
    return 0;
}
