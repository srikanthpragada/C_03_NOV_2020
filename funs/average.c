#include <stdio.h>

// Function declaration or Prototype Declaration
float average(int,int);

void main()
{
  float avg;

     avg = average(10,15);
     printf("%f",avg);
}

// Function definition
float average(int a, int b)
{
   return  (a + b) / 2.0;
}
