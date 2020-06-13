# include <stdio.h>
int main ()
{
    int a, b;
    printf ("Anything you want:");
    scanf ("%d", &a);
    printf ("I told ya:");
    scanf ("%d", &b);
    if (a>b) {
        printf ("A is better \n");
    }
    else if (a<b)  {
        printf ("B is btetter");
    }
    else if (a == b) {
        printf ("They will shine together");
    }
    return 0;
}
