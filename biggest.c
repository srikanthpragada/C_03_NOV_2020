// Display biggest of two numbers

#include <stdio.h>

void main()
{
  int a,b;

       printf("Enter two numbers : ");
       scanf("%d%d",&a,&b);

       if (a > b)
          printf("%d",a);
       else
          printf("%d",b);
}
