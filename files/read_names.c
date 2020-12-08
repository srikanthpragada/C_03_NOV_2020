// Read contents of names.txt

#include <stdio.h>

void main()
{
  FILE * fp;
  int ch;

     // Open for reading
     fp  = fopen("names.txt","rt");
     if (fp == NULL)
     {
         printf("Sorry! File cannot be opened!");
         exit(1);
     }

     while(1)
     {
        ch = fgetc(fp); // read a char
        if(ch == EOF)   // reached end of file
            break;
        putch(ch);
     }

     // Close
     fclose(fp);
}
