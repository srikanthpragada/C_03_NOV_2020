// Print table

#include <stdio.h>

void main()
{
  int num, i;

      printf("Enter number :");
      scanf("%d",&num);

      for(i=1; i <= 10; i ++)
         printf("%2d * %2d = %4d\n",num,i, num*i);

}
