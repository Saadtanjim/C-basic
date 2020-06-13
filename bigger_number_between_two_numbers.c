# include <stdio.h>
int main ()
{
    int first_number, second_number;
    scanf ("%d", &first_number);
    scanf ("%d", &second_number);
    if (first_number > second_number)
    {
        printf ("%d, %d\n", second_number, first_number);
    }
    else
    {
        printf ("%d, %d\n", first_number, second_number);
    }
    return 0;
}
