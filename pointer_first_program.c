# include <stdio.h>
int main ()
{
  int first_pointer = 10;
  int *p = &first_pointer;
  printf ("This is through variable: %d\n", first_pointer);
  printf ("This is through pointer : %d\n", *p);
  first_pointer = 30;

  printf ("This is through variable: %d\n", first_pointer);
  printf ("This is through pointer : %d\n", *p);
  // We can change value through variable or pointer;
  *p = 340;

  printf ("This is through variable: %d\n", first_pointer);
  printf ("This is through pointer : %d\n", *p);

  // or through taking input....

  printf ("Enter any number :");
  scanf ("%d", &*p);

  printf ("This is through variable: %d\n", first_pointer);
  printf ("This is through pointer : %d\n", *p);

  return 0;
}
