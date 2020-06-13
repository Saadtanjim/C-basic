# include <stdio.h>
int main ()
{
    int a= 0;
    while (a<10)  {
        a++;
        if (a % 2 == 0)  {
            printf ("%d\n", a);
        }
        else {
            continue;
        }
    }
    return 0;
}
