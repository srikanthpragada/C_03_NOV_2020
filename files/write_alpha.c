#include <stdio.h>

void main()
{
  FILE * fp;
  int ch;

     // Open for writing
     fp  = fopen("alpha.txt","wt");

     // Write to file
     for(ch = 65; ch <= 90; ch ++)
         fputc(ch,fp);

     // Close
     fclose(fp);
}
