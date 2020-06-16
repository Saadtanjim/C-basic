# include <stdio.h>
int main ()
{
    int a, sum=0;
    for (a=0; a<=100; a+=5)    {
        sum = sum+a;
    }
    printf ("%d\n\n", sum);

    int b=0;
    for (a=0; a<=100; a++)  {
        if (a % 5 == 0  && a % 10 != 0)    {
            b = b + a;
        }
    }
    printf ("%d", b);
    return 0;

}
