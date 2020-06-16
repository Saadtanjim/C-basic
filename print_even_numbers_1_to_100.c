# include <stdio.h>
int main ()
{
    int a;
    printf("Even numbers between 1 & 100 are: \n");
    for (a=1 ; a<=100; a++) {
        if (a % 2 == 0)    {
            printf ("%d ", a);
        }
    }

    printf("\n\nWithout if condition\n");
    for(a = 2; a<=100; a+= 2) {
        printf("%d ", a);
    }


    return 0;
}
