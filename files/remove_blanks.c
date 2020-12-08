// Remove blank lines

#include <stdio.h>
#define  TEMPFILENAME "temp.txt"

void main()
{
  FILE *sfp, *tfp;
  char filename[50], line[100];
  char  * p;

     printf("Enter filename :");
     gets(filename);

     // Open for reading
     sfp = fopen(filename,"rt");
     if (sfp == NULL)
     {
         printf("Sorry! File cannot be opened!");
         exit(1);
     }

     // Open temp file for writing
     tfp = fopen(TEMPFILENAME,"wt");
     if (tfp == NULL)
     {
         printf("Sorry! Could not create temporary file!");
         exit(2);
     }

     while(1)
     {
         p = fgets(line,100,sfp);  // string, length, FILE *
         if(p == NULL)  // Reached EOF
            break;

         // printf("%d %s",strlen(line), line);

         if (strlen(line) > 1)  // line contains \n, so non-blank means more than 1 char
             fputs(line,tfp);
     }

     // Close
     fclose(sfp);
     fclose(tfp);

     remove(filename);   // Remove source file
     rename(TEMPFILENAME, filename);  // Rename temp file as source
}
