// Fill array with random numbers

#include <stdio.h>

void main()
{
  int marks[10];
  int i;


       srand(time(0));  // initialize random seed
       for(i=0; i < 10; i ++)
       {
          marks[i] = rand() % 100;
       }

       // Print result
       for(i=0; i < 10; i ++)
       {
          if(marks[i] > 50)
             printf("\n%2d  - Passed", marks[i]);
          else
             printf("\n%2d  - Failed", marks[i]);
       }



}
