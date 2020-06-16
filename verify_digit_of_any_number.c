# include <stdio.h>

int main ()
{
    int a, total_digits = 0;
    printf ("Enter any number :");
    scanf ("%d", &a);

    // Special case for 0
    /*if(a == 0) {
        total_digits = 1;
    }
    while(a > 0){
        total_digits ++;
        a = a / 10;
    }*/

    do {
        total_digits ++;
        a = a / 10;
    }while(a > 0);

    printf("Number of digits: %d\n", total_digits);
}
