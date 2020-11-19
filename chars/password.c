
#include <stdio.h>

void main()
{
   char ch;
   int i;

       printf("\nEnter password :");
       for(i=1; i <= 8; i ++)
       {
         ch = getch(); // Does not echo
         putch('*');
       }
}
