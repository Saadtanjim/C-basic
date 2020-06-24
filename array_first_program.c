# include <stdio.h>
int main ()
{
    int d [5], i;
    printf ("Enter five number  :");
    for (i = 0; i < 5; i++)
    {
        scanf ("%d", &d[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf ("The five number you input was :%d\n", d[i]);
    }
    return 0;
}
