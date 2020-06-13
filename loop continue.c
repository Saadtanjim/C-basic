# include <stdio.h>
int main ()
{
    int a=0;
    while (a<20) {
        a++;
        if (a % 2 == 0)  {
            continue;
        }
        printf ("%d\n", a);
    }
    return 0;
}
