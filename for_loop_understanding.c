# include<stdio.h>

int main() {

    int i;
    // 1.  initialization - only once
    // 2. Condition
    // 3. Execute loop body
    // 4. Increment / decrement
    // 5. Condition
    int d = 0;
    for (i = 0; i < 5; i++) {
        printf("Pabna\n");
        printf("Dhaka\n");
        printf("==================\n\n");
     }

    printf("Value of  i after end of the loop: %d\n", i);
    while (i<10)    {
        printf ("%d\n", i);
        i++;
    }

    return 0;
}
