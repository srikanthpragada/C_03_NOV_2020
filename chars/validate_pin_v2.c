// Accept pin and validate it

#include <stdio.h>
void main ()
{
 char ch;
 int i,count = 0;

 printf("Enter Pin :");
 for (i=1;i <= 4 ;i++)
 {
   ch = getche();
   if (isdigit(ch))
        count ++;
 }

 if(count == 4)
     printf("\nValid Pin");
 else
     printf("\nInvalid Pin");
}
