# The C Programming Language  

## Chapter 1 -  A Tutorial Introduction  

### 1.c   
```
#include <stdio.h>

int main()
{
  printf("Hello, World!\n");
}
```

1. ".c" extension  
2. functions and variables  
3. main function  
4. #include  
5. function arguments  
6. character string or string constant  
7. escape sequence - \n, \t, \\", \\\  

### 2.c 
```
#include <stdio.h>

/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300 */

int main()
{
  int fahr, celsius;
  int lower, upper, step;

  lower = 0;    /* lower limit of temperature table */
  upper = 300;  /* upper limit */
  step = 20;    /* step size */

  fahr = lower;
  while (fahr <= upper) {
    celsius = 5 * (fahr - 32) / 9;
    printf("%d\t%d\n", fahr, celsius);
    fahr = fahr + step;
  }

}
```

1. comments  
2. variable declaration  
3. variable types - int, float, char, short, long, double  
4. range of int and float depends on machine  
5. while loop  
6. body of the loop, indentation, curly braces  
7. multiplying by 5 and dividing by 9 - integer division truncates  
8. printf format specifiers  

### 2-1.c 
```
#include <stdio.h>

/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300; floating point version */

int main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;    /* lower limit of temperature table */
  upper = 300;  /* upper limit */
  step = 20;    /* step size */

  fahr = lower;
  while (fahr <= upper) {
    celsius = (5.0/9.0) * (fahr - 32);
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }

}
```

1. adding width in printf  

### 3-ex-1-3.c  
Modify the temperature conversion program to print a heading above the table.  

### 4-ex-1-4.c  
Write a program to print the corresponding Celsius to Fahrenheit table.  

### 5.c  
```
#include <stdio.h>

/* print fahrenheit-celsius table */

int main(void)
{
  int fahr;

  for (fahr = 0; fahr <= 300; fahr = fahr + 20)
    printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));

}
```

1. for statement  
2. %6.1f in printf  

### 6-ex-1-5.c  
Modify the temperature conversion program to print the table in reverse order, that is, from 300 degrees to 0.  

### 7.c  
```
#include <stdio.h>

#define LOWER 0    /* lower limit of table */
#define UPPER 300  /* upper limit */
#define STEP 20    /* step size */

/* print fahrenheit-celsius table */

int main(void)
{
  int fahr;

  for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32));
}
```

1. #define defines a symbolic name or symbolic constant  
2. syntax: #define name replacement list  
3. symbolic constant names are conventionally written in upper case  
4. there is no semicolon at the end of a #define line  

### 8.c  
```
#include <stdio.h>

/* copy input to output; 1st version */

int main(void)
{
  int c;

  c = getchar();
  while (c != EOF) {
    putchar(c);
    c = getchar();
  }
}
```

1. character input and output  
2. text input or output = streams of characters  
3. text stream is a sequence of characters divided into lines  
4. getchar reads the next input character from a text stream and returns that as its value  
5. putchar prints a character each time it is called  
6. this program copies input to output once character at a time  
7. relational operator !=  
8. defining variable c as int instead of char  
9. EOF. variable c should be big enough to hold EOF in addition to any possible char  
10. EOF is an integer defined in <stdio.h>  

### 8-1.c  
```
#include <stdio.h>

/* copy input to output; 2nd version */

int main(void)
{
  int c;

  while ((c =getchar()) != EOF) {
    putchar(c);
  }
}
```
1. assignment can appear as part of a larger expression  
2. The while gets a character, assigns it to c, and then tests whether the character was the endof-file signal  
3. The parentheses around the assignment, within the condition are necessary for handling precedence  

### 9-ex-1-6.c  
Verify that the expression getchar() != EOF is 0 or 1.  

### 10-ex-1-7.c  
Write a program to print the value of EOF.  

### 11.c  
```
#include <stdio.h>

/* count characters in input; 1st version */

int main(void)
{
  long nc;

  nc = 0;
  while (getchar() != EOF) {
    ++nc;
  }
  printf("%ld\n", nc);
}
```

1. The ++ operator, increments by one  
2. The operators ++ and -- can be either prefix operators (++nc) or postfix operators (nc++)  
3. use of long variable  
4. conversion specification %ld  

### 12.c  
```
#include <stdio.h>

/* count characters in input; 2nd version */

int main(void)
{
  double nc;

  for (nc = 0; getchar() != EOF; ++nc)
    ;
  printf("%.0f\n", nc);
}
```

1. double precision float to cope even bigger numbers  
2. printf uses %f for both float and double  
3. conversion specification %.0f  
4. The body of this for loop is empty  
5. The isolated semicolon, called a null statement  

### 13.c  
```
#include <stdio.h>

/* count lines in input */

int main(void)
{
  int c, nl;

  nl = 0;
  while ((c = getchar()) != EOF)
  {
    if (c == '\n')
      ++nl;
  }
  printf("%d\n", nl);
}
```

1. an if statement inside body of while loop  
2. the == sign  
3. A character written between single quotes represents an integer value equal to the numerical value of the character in the machine's character set. This is called character constant  
4. Example: 'A' is a character constant and its ASCII character set value is 65  

### 14-ex-1-8.c  
Write a program to count blanks, tabs, and newlines.  

### 15-ex-1-9.c  
Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.  

### 16-ex-1-10.c  
Write a program to copy its input to its output, replacing each tab by \t, each  
backspace by \b, and each backslash by \\. This makes tabs and backspaces visible in an  
unambiguous way.  

### 17.c  
```
include <stdio.h>

#define IN 1   /* inside a word */
#define OUT 0  /* outside a word */

/* count lines, words, and characters in input */

int main(void)
{
  int c, nl, nw, nc, state;

  state = OUT;
  nl = nw = nc = 0;
  while ((c=getchar()) != EOF) {
    ++nc;
    if (c == '\n')
      ++nl;
    if (c == ' ' || c == '\n' || c == '\t')
      state = OUT;
    else if (state == OUT) {
      state = IN;
      ++nw;
    }
  }
  printf("%d %d %d\n", nl, nw, nc);
}
```

1. a word is any sequence of characters that does not contain a blank, tab or newline.  
2. OR operator  

### 18-ex-1-11.c  
How would you test the word count program? What kinds of input are most likely to uncover bugs if there are any?   

### 19-ex-1-12.c  
Write a program that prints its input one word per line.  

### 20.c  
```
#include <stdio.h>

/* count digits, white space, others */

int main(void)
{
  int c, i, nwhite, nother;
  int ndigit[10];

  nwhite = nother = 0;
  for (i = 0; i < 10; ++i)
    ndigit[i] = 0;

  while ((c = getchar()) != EOF) {
    if (c >= '0' && c <= '9')
      ++ndigit[c-'0'];
    else if (c == ' ' || c == '\n' || c == '\t')
      ++nwhite;
    else
      ++nother;
  }
  printf("digits =");
  for (i = 0; i < 10; ++i)
    printf(" %d", ndigit[i]);
  printf(", white space = %d, other = %d\n", nwhite, nother);
}
```

1. This particular program relies on the properties of the character representation of the digits  
2. array  
3. else if   

### 21-ex-1-13.c  
Write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.  

### 22-ex-1-14.c  
Write a program to print a histogram of the frequencies of different characters in its input.  

### 23.c 
```
#include <stdio.h>

int power(int m, int n);
/* function in C */ 

int main(void) 
{
  int i;
  
  for (i=0; i < 10; i++)
    printf("%d %d %d\n", i, power(2,i), power(-3,i));
  return 0;
}

/* power: raise base to the n-th power; n >= 0 */
int power(int base, int n){
  int i, p;
  
  p = 1; 
  for (i = 1; i <= n; i++) 
    p = p * base;

  return p;
}
```

1. Function definitions can appear in any order, and in one source file or several, although no function can be split between files  
2. declaring the function  

### 24-ex-1-15.c  
Rewrite the temperature conversion program to use a function for conversion.  

### 25.c  
```
#include <stdio.h>

int power(int m, int n);
/* Example for Arguments - Call by Value */

int main(void)
{
  int i;

  for (i=0; i < 10; i++)
    printf("%d %d %d\n", i, power(2,i), power(-3,i));
  return 0;
}

/* power: raise base to the n-th power; n >= 0 */
int power(int base, int n){
  int p;

  for (p = 1; n > 0; --n)
    p = p * base;

  return p;
}
```

1. In C, all function arguments are passed "by value".  
2. This is not the same when array  is passed as argument.  

### 26.c  
```
#include <stdio.h>
#define MAXLINE 1000 /* maximum inout line length */

int getline(char line[], int maxline);
void copy(char to[], char from[]);

/* print the longest input line */
int main()
{
  int len;               /* current line length */
  int max;               /* maximum length seen so far */
  char line[MAXLINE];    /* current input line */
  char longest[MAXLINE]; /* longest line saved here */

  max = 0;
  while ((len = getline(line, MAXLINE)) > 0) {
    if (len > max) {
      max = len;
      copy(longest, line);
    }
  }

  if (max > 0)  /* there was a line */
    printf("%s", longest);
  return 0;
}

/* getline: read a line into s, return lenght */
int getline(char s[], int lim)
{
  int c, i;
  for (i=0; i < lim-1 && (c=getchar()) != EOF && c != '\n'; ++i)
    s[i] = c;

  if (c == '\n') {
    s[i] = c;
    ++i;
  }

  s[i] = '\0';
  return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
  int i;

  i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}
```

1. 

### 27-ex-1-16.c  
Revise the main routine of the longest-line program so it will correctly print the length of arbitrary long input lines, and as much as possible of the text.  

### 28-ex-1-17.c  
Write a program to print all input lines that are longer than 80 characters.  

### 29-ex-1-18.c  
Write a program to remove trailing blanks and tabs from each line of input, and to delete entirely blank lines.  

### 30-ex-1-19.c  
Write a function reverse(s) that reverses the character string s. Use it to write a program that reverses its input a line at a time.  

### 31.c  
```
#include <stdio.h>

#define MAXLINE 1000    /* maximum input line size */ 

int max;                /* maximum length seen so far */ 
char line[MAXLINE];     /* current input line */ 
char longest[MAXLINE];  /* longest line saved here */ 

int getline(void);
void copy(void); 

/* print longest input line; specialized version */ 
main() 
{
  int len;
  extern int max;
  extern char longest[];

  max = 0;
  while ((len = getline()) > 0) 
    if (len > max) {
      max = len;
      copy();
    }
  if (max > 0) /* there was a line */ 
    prinf("%s", longest);
  return 0;
}

/* getline: specialized version */
int getline(void)
{
  int c, i;
  extern char line[];

  for (i = 0; i < MAXLINE - 1&& (c=getchar)) != EOF && c != '\n'; ++i)
    line[i] = c;
  if (c == '\n') {
    line[i] = c;
    ++i;
  }
  line[i] = '\0';
  return i;
}

/* copy: specialized version */
void copy(void)
{
  int i;
  extern char line[], longest[];

  i = 0;
  while ((longest[i] = line[i]) != '\0')
    ++i;
}
```
1. extern declaration  
2. extern declarations usually included in a header file  
3. extern variables are by default assigned zero value  

### 32-ex-1-20.c  
Write a program detab that replaces tabs in the input with the proper number of blanks to space to the next tab stop. Assume a fixed set of tab stops, say every n columns.  
Should n be a variable or a symbolic parameter?  

### 33-ex-1-21.c  
Write a program entab that replaces strings of blanks by the minimum number of tabs and blanks to achieve the same spacing. Use the same tab stops as for detab.  
When either a tab or a single blank would suffice to reach a tab stop, which should be given preference?  

### 34-ex-1-22.c  
Write a program to ``fold'' long input lines into two or more shorter lines after the last non-blank character that occurs before the n-th column of input.  
Make sure your program does something intelligent with very long lines, and if there are no blanks or tabs before the specified column.  
### 35-ex-1-23.c  
Write a program to remove all comments from a C program. Don't forget to handle quoted strings and character constants properly. C comments don't nest.  

### 36-ex-1-24.c  
Write a program to check a C program for rudimentary syntax errors like unmatched parentheses, brackets and braces. Don't forget about quotes, both single and double, escape sequences, and comments. (This program is hard if you do it in full generality.)  









