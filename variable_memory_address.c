# include<stdio.h>

void main()
{
    int a = 5, b = 6, c = 10;
    // scanf("%d", &a);
    printf("Address of a is: %d\n",&a);
    printf("Address of b is: %d\n",&b);
    printf("Address of c is: %d\n",&c);

    printf("===========================\n");

    printf("Address of a is in Hexa: %p\n",&a);
    printf("Address of b is in Hexa: %p\n",&b);
    printf("Address of c is in Hexa: %p\n",&c);

    printf("===========================\n");
    printf("Value of a is: %d\n",a);
    printf("Value of b is: %d\n",b);
    printf("Value of c is: %d",c);
}
