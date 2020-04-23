#include <stdio.h> 

#define LOWER 0   /* lower limit */
#define UPPER 300 /* upper limit */
#define STEP 20   /* step size */

float f_to_c(int fahr); 

/* Rewrite the temperature conversion program to use a function for conversion */ 

int main(void)
{
  int fahr; 
  float celsius; 

  printf("Fahr Celsius\n");
  for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
    celsius = f_to_c(fahr);
    printf("%4d %6.1f\n", fahr, celsius);
  }
}

float f_to_c(int fahr)
{
  float c;
  c = (5.0/9.0) * (fahr - 32);
  return c;
}
