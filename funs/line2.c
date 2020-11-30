
#include <stdio.h>

void main()
{
    line(30,'.');
    printf("\nSrikanth Technologies\n");
    line(30,'*');
}

void line(int length, char ch)
{
  int i;

    for(i=1; i <= length; i ++)
       putch(ch);
}
