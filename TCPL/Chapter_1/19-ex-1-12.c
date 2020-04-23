#include <stdio.h> 

#define ON 1  /* inside blank */ 
#define OFF 0 /* outside blanl */

/* Write a program that prints its input one word per line. */ 

int main(void) 
{
  int c, state;
  
  state = OFF;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      state = ON;
    }
    if (c != ' ' && c != '\n' && c != '\t') {
      if (state == ON) {
        putchar(10);
        state = OFF;
      }
      putchar(c);
    }
  }
}
