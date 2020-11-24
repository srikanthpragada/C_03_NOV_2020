// Display in how many subjects student passed

#include <stdio.h>
void main()
{
  int marks[5][5], i,j, count;

      srand(time(0));
      for(i=0; i < 5;i ++)
      {
        count = 0;
        for (j = 0; j < 5; j ++)
        {
           marks[i][j]=rand() % 100;
           printf("%5d", marks[i][j]);
           if (marks[i][j] >= 50)
               count ++;
        } // j loop
        printf("%5d\n",count);
     } // i loop

}
