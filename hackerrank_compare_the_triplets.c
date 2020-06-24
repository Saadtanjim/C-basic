# include <stdio.h>
int main ()
{
    int a[3] = {17,28,30};
    int b[3] = {99, 16, 8};
    int result [2] = {0, 0};
    int i;
    for (i=0; i<3; i++)
    {
        if (a[i]>b[i])
        {
            result[0]++;
        }
        else
        {
            result[1]++;
        }
    }
    printf ("%d, %d", result[0], result[1]);
    return 0;
}
