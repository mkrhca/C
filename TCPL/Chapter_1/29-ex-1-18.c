#include <stdio.h> 

#define MAXLINE 1000 

/* Write a program to remove trailing blanks and tabs from each line of input, 
 * and to delete entirely blank lines. */ 

int get_line(char s[], int lim);

int main(void) 
{
  int len; 
  char line[MAXLINE];

  while ((len=get_line(line, MAXLINE)) > 0 ) {
    if (line[len - 2] == ' ' || line[len - 2] == '\t') {

    } 
  }
}

int get_line(char s[], int lim)
{
  int c, i; 

  for (i=0; i < lim-1 && (c=getchar()) != EOF && c != '\n'; i++) 
    s[i] = c;
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}
