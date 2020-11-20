#include <stdio.h>

void main()
{
  int i,nondigit = 0;
  char ch;

      printf("Enter pin :");
      for(i=1; i <= 4; i ++)
      {
         ch = getche();
         // putch('*');
         if(!isdigit(ch))
             nondigit = 1;
      }

      if(nondigit)
          printf("\nInvalid Pin!");
      else
          printf("\nValid Pin!");
}
