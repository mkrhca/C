#include <stdio.h> 

/* Modify the temperature conversion program to print the table in
 * reverse order, that is, from 300 degress to 0 */ 

int main(void) 
{
  int fahr; 

  printf("Fahr Celsius\n"); 
 
  for (fahr = 300; fahr >= 0; fahr = fahr - 20)
    printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
}
