// Get product details by product id

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
    int count,pos,id;

       fp = fopen(FILENAME, "rb");

       while(1)
       {
          printf("Enter product id [0 to stop]:");
          scanf("%d",&id);

          if(id == 0)
            break;

          pos = (id - 1) * sizeof(struct product);
          fseek(fp, pos, SEEK_SET);  // Move to pos from the beginning of the file

          count = fread(&p,sizeof(p), 1, fp);
          printf("%-30s %6d\n",p.name,p.price);
       }

       fclose(fp);
}

