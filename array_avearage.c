# include <stdio.h>
int main ()
{
    int a[5], i, sum=0;
    int n;
    scanf ("%d", &n);
    for (i=0; i<5; i++)
    {
        scanf ("%d", &a[i]);
        sum = sum + a[i];
    }
    printf ("The average of this array is :%d\n", sum/n);
    return 0;
}
