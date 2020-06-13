# include <stdio.h>
int main ()
{
    char a;
    printf ("Enter any vowel if want:");
    scanf ("%c", &a);
    if (a == 'a' || a == 'e' || a== 'i'||a=='o'|| a== 'u')  {
        printf ("This is vowel well you know English Grammar");
    }
    else {
        printf ("Your are dumb");
    }
    return 0;
}
