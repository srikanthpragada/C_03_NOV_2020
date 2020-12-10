// Print a file given on command line with line numbers
// printallfiles <filename> ...

#include <stdio.h>

void main(int argc, char * argv[])
{
  FILE * fp;
  char  line[100];
  char  * p;
  int lineno,i;

      if(argc < 2)
      {
          printf("Usage: printallfiles <filename> ... ");
          exit(2);
      }

      for(i=1; i < argc; i ++)
      {

        printf("\n***** %s *****\n", argv[i]);
        // Open for reading
        fp = fopen(argv[i],"rt");
        if (fp == NULL)
        {
           printf("Sorry! File [%s] cannot be opened!\n", argv[i]);
           continue;
        }

        lineno = 1;
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
}
