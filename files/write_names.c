// Take names from user and write them to names.txt until end is given

#include <stdio.h>

void main()
{
  FILE * fp;
  char name[30];

     // Open for writing
     fp  = fopen("names.txt","at");
     if (fp == NULL)
     {
         printf("Sorry! File cannot be created!");
         exit(1);
     }

     while(1)
     {
         printf("Enter name [end to stop] :");
         gets(name);

         if (stricmp(name,"end") == 0)
               break;

         fprintf(fp,"%s\n",name);
     }

     // Close
     fclose(fp);
}
