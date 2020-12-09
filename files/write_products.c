
#define FILENAME "products.dat"
#include <stdio.h>


struct product
{
  char name[30];
  unsigned int price;
};

void main()
{
    struct product p;
    FILE * fp;

       fp = fopen(FILENAME, "wb");

       while(1)
       {
           printf("Enter product name [enter to stop]:");
           gets(p.name);

           if (strlen(p.name) == 0)  // Name is empty
              break;

           printf("Enter product price : ");
           scanf("%d",&p.price);

           fwrite(&p,sizeof(p), 1, fp);

           // clear keyboard buffer
           fflush(stdin);
       }

       fclose(fp);
}

