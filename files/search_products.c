
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
    char name[30];
    FILE * fp;
    int count;

       fp = fopen(FILENAME, "rb");
       printf("Enter product name :");
       gets(name);

       while(1)
       {
          count = fread(&p,sizeof(p), 1, fp);
          if (count == 0)  // EOF
            break;

          // display product if product name contains the given string
          if(strstr(p.name,name) != NULL)
               printf("%-30s %6d\n",p.name,p.price);
       }

       fclose(fp);
}

