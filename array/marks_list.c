#include <stdio.h>

void main()
{
int marks []={80,90,24,56,45,87,12,78,95,51};
int i, fail, pass;

  fail = pass = 0;
  for(i=0;i<10;i++)
  {
    if(marks[i] < 50)
        fail ++;
    else
        pass ++;
  }

  printf("Passed %d, Failed %d", pass,fail);

}
