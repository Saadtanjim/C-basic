# include <stdio.h>

int main ()
{
    int a[5], i;
    int n, sum=0;
    double average;
    scanf ("%d", &n);

    for (i=0; i<5; i++)
    {
        scanf ("%d", &a[i]);
        sum = sum + a[i];
    }

    average = (double)sum / n;

    printf ("The average of this array is :%.2lf\n",average);
    return 0;
}
