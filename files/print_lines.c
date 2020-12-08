// Print lines with line numbers
#include <stdio.h>

void main()
{
  FILE * fp;
  char filename[50], line[100];
  char  * p;
  int lineno = 1;


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
         p = fgets(line,100,fp);  // string, length, FILE *
         if(p == NULL)  // Reached EOF
            break;
         printf("%3d : %s", lineno, line);
         lineno ++;
     }

     // Close
     fclose(fp);
}
