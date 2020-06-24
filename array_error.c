# include <stdio.h>
int main ()
{
    int i, d [5];
    for (i=0; i<6; i++)
    {
        scanf ("%d", &d[i]);
    }

    printf("%d\n", d[4]);

    for (i=0 ; i<6 ; i++)
    {
        printf ("%d\n", d[i]);
    }
    return 0;
}
