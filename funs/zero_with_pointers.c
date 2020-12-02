// Pass by reference

void zero(int * p1, int * p2)
{
   *p1 = 0;
   *p2 = 0;
}

void main()
{
  int n1 = 10, n2 = 20;

    printf("%d %d\n",n1,n2);
    zero(&n1,&n2);
    printf("%d %d\n",n1,n2);
}
