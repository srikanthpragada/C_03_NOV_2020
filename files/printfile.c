// Print a file given on command line with line numbers
// printfile <filename>

#include <stdio.h>

void main(int argc, char * argv[])
{
  FILE * fp;
  char filename[50], line[100];
  char  * p;
  int lineno = 1;

      if(argc < 2)
      {
          printf("Usage: printfile <filename>");
          exit(2);
      }

     // Open for reading
     fp = fopen(argv[1],"rt");
     if (fp == NULL)
     {
         printf("Sorry! File %s cannot be opened!", argv[1]);
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
