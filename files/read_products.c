
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
    int count;

       fp = fopen(FILENAME, "rb");

       while(1)
       {
          count = fread(&p,sizeof(p), 1, fp);
          if (count == 0)  // EOF
            break;
          printf("%-30s %6d\n",p.name,p.price);
       }

       fclose(fp);
}

