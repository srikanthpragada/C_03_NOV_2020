// Calculate net salary

#include <stdio.h>

void main()
{
 int grade, salary, hra, da, net_salary;

     printf("Enter salary      :");
     scanf("%d",&salary);

     printf("Enter grade [1/2] :");
     scanf("%d",&grade);

     if(grade == 1)
     {
         hra = salary * 0.30;
     }
     else
     {
         hra = salary * 0.20;
     }

     da = salary * 0.20;
     net_salary = salary + hra + da;

     printf("Net Salary : %d",net_salary);

}
