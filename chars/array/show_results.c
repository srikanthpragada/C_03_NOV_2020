// Store values in an array

#include <stdio.h>

void main()
{
  int a[5];
  int i;

       for(i=0; i < 5; i ++)
       {
          printf("Enter number :");
          scanf("%d",&a[i]);
       }

       // Print result
       for(i=0; i < 5; i ++)
       {
          if(a[i] > 50)
             printf("\n%d Passed", i + 1);
          else
             printf("\n%d Failed", i + 1);
       }



}
