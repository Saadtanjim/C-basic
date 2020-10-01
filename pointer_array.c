# include <stdio.h>
# include <stdlib.h>
int main ()
{
  int check;
  int ara [5];
  int *p_ara [5];
  printf ("Enter the 5 number : ");
  for (int i=0; i<=4; i++) {
    scanf ("%d", &ara[i]);
  }
  for (int i=0; i<5; i++) {
    p_ara[i] = &ara[i];
  }
  printf ("This is the address of the ara through pointer value : ");
  for (int i=0; i<5; i++) {
    printf ("%d ", p_ara[i]);
  }
  printf ("\n");
  printf ("This is the value of ara through pointer :");
  for (int i=0; i<5; i++) {
    printf ("%d ", *p_ara[i]);
  }
  return 0 ;
}
