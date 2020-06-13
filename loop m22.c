# include <stdio.h>
int main ()
{
    int a, s;
    for (a=1; a<=20; a++)  {
        for (s=1; s<=10; s++)  {
            printf ("%d X %d = %d\n", s, a, s*a);
        }
    }
    return 0;
}
