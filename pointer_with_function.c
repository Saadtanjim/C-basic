#include <stdio.h>

void update(int *a,int *b) {
   int ab = *a;
   int ba = *b;
   if (ab>ba)
   {
     int temp = ab + ba;
     int temp_2 = ab - ba;
     ab = temp;
     ba = temp_2;
   }
   else
   {
     int temp = ab + ba;
     int temp_2 = ba - ab;
     ab = temp;
     ba = temp_2;
   }
   *a = ab;
   *b = ba;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
