#include <stdio.h>

int main ()
{
    int i,  n;
    int even = 0, odd = 0;
    printf ("Enter a number between 1 to 100000: ");
    scanf ("%d", &n);

    for (i = 1;  i <= n;  i++)
    {
        if (n % i == 0)
        {
            if (i  % 2 == 0)
            {
                even++;
            }
            else
            {
                odd ++;
            }
        }
    }
    printf ("Number of even divisor is: %d\n", even);
    printf ("Number of odd divisor is: %d\n", odd);
    return 0;
}
