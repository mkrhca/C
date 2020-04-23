#include <stdio.h>

#define ON 1  /* inside blank */ 
#define OFF 0 /* outside blanl */

/* Write a program to copy its input to its output, replacing 
 * each string of one or more blanks by a single blank. */

int main(void) 
{
  int c, state;
  
  state = OFF;

  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      state = ON;
    }
    if (c != ' ') {
      if (state == ON) {
        putchar(' ');
        state = OFF;
      }
      putchar(c);
    }
  }
}
