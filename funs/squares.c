
void squares(int arr[5])
{
  int i;

     for(i=0; i < 5; i ++)
       printf("%5d %5d\n", arr[i], arr[i] * arr[i]);
}


void main()
{
    int a[] = {10,5,6,8,15};

      squares(a);
}
