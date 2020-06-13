# include <stdio.h>
int main ()
{
    int a = 0;
    while (a<= 100)  {
        printf ("%d\n", a++);
        if  (a>20)  {
            break;
        }
    }
    return 0;
}
