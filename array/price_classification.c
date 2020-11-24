// Classify products based on price

#include <stdio.h>

void main()
{
  int price [] = {450,670,8800,12000,550};
  int i;

       // Print classes
       for(i=0; i < 5; i ++)
       {
          if(price[i] < 1000)
             printf("\n%6d  - Low", price[i]);
          else
             printf("\n%6d  - High", price[i]);
       }



}
