
int square(int n)
{
    return n * n;
}

int next_even(int n)
{
   if(n % 2 == 0)
        return n + 2;
   else
        return n + 1;
}

int sum_of_digits(int n)
{
  int sum = 0;

     while(n > 0) {
        sum += n % 10;
        n /= 10;
     }

     return sum;
}

void main()
{
     printf("Square of 10 is %d\n", square(10));
     printf("Next even number of 11 %d\n", next_even(11));
     printf("Sum of digits for 456 = %d\n", sum_of_digits(456));
}
