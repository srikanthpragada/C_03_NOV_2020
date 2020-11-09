// Take price and display net price

#include<stdio.h>

void main()
{
float price,discount,net_price;

  // Input
  printf("Enter price :");
  scanf("%f",&price);

  // Calculation
  discount = 15 * price / 100;
  net_price = price - discount;

  // Output
  printf("Price       : %10.2f\n",price);
  printf("- Discount  : %10.2f\n",discount);
  printf("              -----------\n");
  printf("Net price   : %10.2f\n",net_price);
  printf("              -----------\n");

}
