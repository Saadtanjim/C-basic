# include <stdio.h>
int main ()
{
    int a=0, i, n;
    for (i=1; i<=10; i++)   {
        for (n=1; n<=10; n++)   {
            a= a+i;
            printf ("%d X %d = %d \n", i, n, a);
        }
    }
    return 0;
}
