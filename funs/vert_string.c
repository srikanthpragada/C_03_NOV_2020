
#include <stdio.h>

void main()
{
    vert_string("Welcome");
}

void vert_string(char st[30])
{
    int i;

       for(i=0; st[i] != '\0' ; i ++)
          printf("%c\n", st[i]);
}
