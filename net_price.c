// Take price and display net price

#include<stdio.h>

void main()
{
float price,discount,net_price;

  printf("Enter price :");
  scanf("%f",&price);
  discount = 15 * price / 100;
  net_price = price - discount;
  printf("Net price=%f",net_price);
}
