#include <stdio.h> 
/* Modify the temperature conversion program (2-1.c) 
 * to print a heading above the table. */

int main(void) 
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300; 
  step = 20;

  fahr = lower;
  printf("Fahr  Celsius\n");
  while (fahr <= upper) 
  {
    celsius = (5.0/9.0) * (fahr - 32); 
    printf("%3.0f %6.f\n", fahr, celsius);
    fahr = fahr + step;

  }
}


