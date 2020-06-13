# include <stdio.h>
int main ()
{
    int year;
    scanf ("%d", &year);
    if (year % 4 == 0 && year % 100 != 0)  {
        printf ("This is leap year");
    }
    if (year % 400 == 0)    {
        printf ("This is leap year");
    }
    else    {
        printf ("This is not leap year");
    }
    return 0;
}
