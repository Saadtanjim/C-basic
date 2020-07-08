# include <stdio.h>
int main ()
{
    int a[20];
    int i, n;
    int count [20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    printf ("Enter upto 20 number from 1 to 20:");
    scanf ("%d", &n);
    for (i = 0 ; i<n; i++)
    {
        scanf ("%d", &a[i]);
    }
    for (i=0 ; i<n; i++)
    {
        if (count[i] == a[i])
        {
            count[i]++;
        }
    }
    printf ("%d\n", count[i]);
    return 0;
}
