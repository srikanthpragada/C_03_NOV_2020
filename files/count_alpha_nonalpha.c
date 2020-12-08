// Read contents of names.txt

#include <stdio.h>

void main()
{
  FILE * fp;
  char filename[50];
  int ch, alpha = 0, nonalpha = 0;

     printf("Enter filename :");
     gets(filename);

     // Open for reading
     fp = fopen(filename,"rt");
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

        if (isalpha(ch))
             alpha ++;
        else
             nonalpha ++;
     }

     // Close
     fclose(fp);

     printf("\nAlphabets : %d, Non-alphabets : %d", alpha, nonalpha);
}
