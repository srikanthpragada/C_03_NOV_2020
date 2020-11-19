
#include <stdio.h>

void main()
{
   char ch;
   int i;

       for(i=1; i <= 5; i ++)
       {
         printf("\nEnter a char :");
         ch = getche(); // Does not echo

         if(isupper(ch))
             printf("\nUppercase");
         else
           if(islower(ch))
             printf("\nLowercase");
           else
             printf("\nOther");
       }
}
