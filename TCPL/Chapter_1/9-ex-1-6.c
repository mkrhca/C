#include <stdio.h> 

/* Verify that the expression getchar() != EOF is 0 or 1. */ 

int main(void) 
{ 
  int c; 
  
  printf("Enter any character (Ctrl-D for EOF)\n");
  printf("Expression equals: %d\n",(c = getchar()) != EOF);
}
