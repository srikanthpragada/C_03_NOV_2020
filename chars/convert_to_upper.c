
#include <stdio.h>

void main()
{
   char ch;

       printf("Enter char :");
       ch = getche();

       if(islower(ch))
         ch = ch - 32;

       printf("\nUppercase : %c",ch);

}
