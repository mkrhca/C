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



