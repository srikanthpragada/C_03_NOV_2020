// Calculate net salary

#include <stdio.h>

void main()
{
  int salary, hra, da, gross, pf, net;

       printf("Enter salary : ");
       scanf("%d",&salary);

       hra = salary * 30 / 100;
       da = salary  * 20 / 100;
       gross = salary + hra + da;
       pf = gross * 2 / 100;
       net = gross - pf;

       printf("Basic salary     : %10d\n",salary);
       printf("+ HRA            : %10d\n",hra);
       printf("+ DA             : %10d\n",da);
       printf("                   ----------\n");
       printf("Gross Salary     : %10d\n",gross);
       printf("- PF             : %10d\n",pf);
       printf("                   ----------\n");
       printf("Net Salary       : %10d\n",net);
}
