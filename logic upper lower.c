# include <stdio.h>
int main ()
{
    char a = 'w';
    if (a>= 'a' && a<='z')  {
        printf ("This word is indeed lower class\n");
    }
    else if (a>= 'A'  && a<= 'Z')  {
        printf ("This word is indeed Upper case\n");
    }
    return 0;
}
