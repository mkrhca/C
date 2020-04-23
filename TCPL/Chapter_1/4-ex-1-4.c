#include <stdio.h> 
/* Write a program to print the corresponsing  
 * Celsius to Fahrenheit table. */

int main(void) 
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300; 
  step = 20;

  celsius = lower;
  printf("Celsius Fahr\n");
  while (celsius <= upper) 
  {
    fahr = (celsius * 9.0/5.0) + 32; 
    printf("%7.0f %4.f\n", celsius, fahr);
    celsius = celsius + step;

  }
}


