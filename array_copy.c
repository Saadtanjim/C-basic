# include <stdio.h>
int main ()
{
    int a[5];
    int b[5];
    int i;
    for (i=0; i<5; i++)
    {
        scanf ("%d", &a[i]);
    }
    for (i = 0; i<5; i++)
    {
        b [i] = a [i];
        printf ("\n%d\n", b[i]);
    }
    return 0;
}
