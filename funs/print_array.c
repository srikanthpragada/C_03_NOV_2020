
#include <stdio.h>

void main()
{
    int a[] = {10,40,50,30,45};
    int b[] = {1,2,3,4,5};

       print_array(a);
       print_array(b);

}

void print_array(int arr[5])
{
    int i;

       for(i=0; i <  5 ; i ++)
          printf("%d ", arr[i]);

}
