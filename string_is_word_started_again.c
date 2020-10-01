# include <stdio.h>
# include <string.h>
int main ()
{
  char s[100], w;
  int i, is_word_started = 0;
  printf ("Enter anything you want : ");
  gets (s);
  printf ("\n");
  int length = strlen (s);
  for (i=0;i<length;i++)  {
    if (s[i] >= 'a' && s[i] <= 'z') {
      if (is_word_started == 0) {
        is_word_started = 1;
        s[i] = 'A' + (s[i] - 'a');
        printf ("%c", s[i]);
      }
      else  {
        printf ("%c", s[i]);
      }
    }
    else if (s[i] >= 'A' && s[i] <= 'Z') {
      if (is_word_started == 0) {
        is_word_started = 1;
      }
      printf ("%c", s[i]);
    }
    else if (s[i] >= '0' && s[i] <= '9')  {
      if (is_word_started == 0) {
        is_word_started = 1;
      }
      printf ("%c", s[i]);
    }
    else  {
      if (is_word_started == 1) {
        is_word_started = 0;
        printf ("\n");
      }
    }
  }
  printf ("\n");
}
