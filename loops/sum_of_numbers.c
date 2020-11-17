// Take numbers until 0 and display sum of the numbers

#include <stdio.h>

void main()
{
  int num, sum = 0;

      while(1)
      {
          printf("Enter number [0 to stop]:");
          scanf("%d",&num);

          if (num == 0)
            break;

          sum += num;
      }

      printf("Sum = %d", sum);

}
