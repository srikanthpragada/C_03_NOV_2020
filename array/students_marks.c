// Reverse Array

#include <stdio.h>

void main()
{
 int marks[5][3];
 int r,c;

       srand(time(0));
       for(r = 0; r < 5; r ++)
       {
         for(c = 0; c < 3; c ++)
         {
           marks[r][c] = rand() % 100;
           printf("%5d", marks[r][c]);
         }
         printf("\n");
       }

}
