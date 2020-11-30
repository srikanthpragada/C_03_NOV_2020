
#include <stdio.h>

void main()
{
    factors(255);
    factors(300);
}

void factors(int num)
{
    int i;

       for(i=2; i <= num/2 ; i ++)
          if (num % i == 0)
             printf("%d\n", i);

}
