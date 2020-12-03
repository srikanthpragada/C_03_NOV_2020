void zero_array(int a[], int length)
{
   int i;

      for(i=0; i < length ; i ++)
           a[i] = 0;
}

void print_array(int a[], int length)
{
   int i;

      for (i=0; i < length ; i ++)
          printf("%5d", a[i]);
}

void main()
{
  int arr[10], marks [5];

      zero_array(arr,10);
      print_array(arr,10);

      // print_array(marks,5);
      // print_array(arr,5);

}
