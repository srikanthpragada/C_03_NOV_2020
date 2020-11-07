// Print inches and feet for given cm

#include <stdio.h>

void main()
{
   float cm, inches, feet;

       printf("Enter centimeters : ");
       scanf("%f",&cm);
       inches = cm / 2.54;
       feet = cm / 30;
       printf("%.2f cm = %.2f inches\n",cm,inches);
       printf("%.2f cm = %.2f feet\n",cm,feet);
}
