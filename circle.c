// Accept radius and calculate area and circumference

#include<stdio.h>

void main()
{
  float radius,circumference,area;

    printf("Enter Radius :");
    scanf("%f",&radius);

    circumference = 2 * 3.14 * radius;
    area = 3.14 * radius * radius;

    printf("Circumference  = %.2f, Area = %.2f",circumference,area);
}
