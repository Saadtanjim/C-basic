# include <stdio.h>
int main ()
{
    int a= 0, n = 5, i;
    for (i=1; i<=10; i++)  {
        a = n+a;
        printf ("%d X %d = %d\n", n, i, a);
    }
    return 0;
}
