// List names that have length > avg length

#include <stdio.h>
#define  FILENAME "names.txt"

struct node
{
   char line[100];
   struct node * next;
};

void main()
{
  FILE *fp;
  char line[100];
  char  * p;
  int total = 0 , count = 0, avg_length;
  struct node *current, *root = NULL, *prev;


     // Open for reading
     fp = fopen(FILENAME,"rt");
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

         if (strlen(line) > 1)  // line contains \n, so non-blank means more than 1 char
         {
           // add line to list
           current = (struct node *) malloc(sizeof(struct node));
           strcpy(current->line,line);
           current->next = NULL;

           if (root == NULL) // first node
               root = current;
           else
               prev->next = current;

           prev = current;

           total += strlen(line);
           count ++;
         }
     }

     // Close
     fclose(fp);

     avg_length = total / count;

     current = root;
     while(current != NULL)
     {
         if( strlen(current->line) > avg_length)
               printf("%s",current->line);

         current = current -> next;
     }

     fclose(fp);
}
