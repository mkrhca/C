#include <stdio.h> 

/* Write a program to count blanks, tabs, and newlines. */

int main(void) 
{
  int nb, nt, nn; 
  int c;

  nb = nt = nn = 0;

  while ((c = getchar()) != EOF) 
  {
    if (c == ' ') {
      ++nb;
    }
    
    if (c == '\t') {
      ++nt;
    }
    
    if (c == '\n') 
      ++nn;
  }
  printf("Blanks, Tabs, Characters: %d,%d,%d\n", nb, nt, nn); 
}
