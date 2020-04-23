#include <stdio.h> 

/* Write a program to print a histogram of the lengths of words in its input. It is easy to 
 * draw the histogram with the bars horizontal; a vertical orientation is more challenging */ 

int main(void) 
{
  int c, nc, i; 

  nc = 0; 

  while ((c = getchar()) != EOF) {
    if (c != ' ' && c != '\n' && c != '\t') {
      ++nc;
    /* } else if (c == ' ' || c == '\n' || c == '\t') { */
    } else {
      for (i = 0 ; i < nc; i++) 
        printf("*");
      printf("\n");
      nc = 0;
    }
  }
}
