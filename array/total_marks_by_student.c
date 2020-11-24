// Display marks and total marks for each student

#include <stdio.h>

void main()
{
 int marks[5][3];
 int r,c, total;

       srand(time(0));
       for(r = 0; r < 5; r ++)
       {
         total = 0;
         for(c = 0; c < 3; c ++)
         {
           marks[r][c] = rand() % 100;
           printf("%5d", marks[r][c]);
           total += marks[r][c];
         }
         printf("%5d\n",total);
       }

}
