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

1. 


