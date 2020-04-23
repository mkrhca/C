#include <stdio.h> 

/* Write a program to copy its input to its output, replacing each tab by \t, 
 * each backspace by \b, and each backslash by \\. This makes tabs and backspace
 * visible in an unambiguous way. */ 

int main(void) {
  int c, tab;
  tab = '\t';

  while ((c = getchar()) != EOF) {
    if (c == '\t') {
      putchar(92);
      putchar(116);
    }
    if (c == '\b') {
      putchar(92);
      putchar(98);
    }

    if (c == '\\') {
      putchar(92);
      putchar(92);
    }

    if (c != '\t' && c != '\b' && c != '\\') 
      putchar(c);
  }
}
