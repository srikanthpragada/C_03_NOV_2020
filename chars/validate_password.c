#include <stdio.h>

void main()
{
  int i,digit,upper;
  char ch;

      digit = upper  = 0; // false
      printf("Enter password :");
      for(i=1; i <= 8; i ++)
      {
         ch = getche();
         // putch('*');
         if(isdigit(ch))
             digit = 1;
         else
            if(isupper(ch))
                upper = 1;
      }

      if(digit && upper)
          printf("\nValid Password!");
      else
          printf("\nInvalid Password!");
}
