# include <stdio.h>
int main ()
{
    int a [100];
    int n, i;
    int odd_count = 0, even_count = 0;
    printf ("Enter how many number you want to keep in array under 100:");
    scanf ("%d", &n);
    printf ("Enter all number with a space between them:");
    for (i = 0; i<n; i++)
    {
        scanf ("%d", &a[i]);
        if (a[i] % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }
    printf ("Count of even and odd is : %d, %d", even_count, odd_count);
    return 0;
}
