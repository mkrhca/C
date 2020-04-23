#include <stdio.h> 

#define MAXLINE 1000

void reverse(char s[]); 
int get_line(char s[], int lim); 
/* Write a function reverse(s) that reverses the character string s. 
 * Use it to write a program that reverses its input a line at a time. */

int main(void) 
{


}

int get_line(char s[], int lim) 
{
  int c, i;

  for (i = 0; i < lim -1 && (c = getchar()) != EOF && c != '\n'; i++) 
    s[i] = c;
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

void reverse(char s[])
{
  char new[MAXLINE];
  int i, j, len;
  i = j = 0;
  while (s[i] != '\0') {
    i++;
  }
  len = i;
  
  while (len >= 0) {
    new[j] = s[len];
    j++;
    len--;  
  }
  return new;
}
