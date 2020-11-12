// Take two number and display whether they are even

#include <stdio.h>

void main()
{
  int n1,n2;

     printf("Enter two number :");
     scanf("%d%d",&n1,&n2);

     if (n1 % 2 == 0)
     {
        if(n2 % 2 == 0)
            printf("Both");
        else
            printf("First");
     }
     else
     {
        if(n2 % 2 == 0)
           printf("Second");
        else
           printf("None");
     }
}
