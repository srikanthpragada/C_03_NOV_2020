// Highest factor

#include <stdio.h>

void main()
{
  int num,i;

    printf("Enter a number :");
    scanf("%d",&num);

    for(i = num/2; i > 1; i --)
    {
       if(num % i == 0)
           break;
    }

    printf("Highest factor : %d",i);
}
