// Pass by value
void zero(int a, int b)
{
   a = b = 0;
}

void main()
{
  int n1 = 10, n2 = 20;

    printf("%d %d\n",n1,n2);
    zero(n1,n2);
    printf("%d %d\n",n1,n2);
}
