
struct time
{
  int hour, min, sec; // Members
};


void main()
{
  struct time t1, t2 = {10,20,30};

      t1.hour = 1;
      t1.min = 10;
      t1.sec = 50;

      printf("%d:%d:%d\n", t1.hour, t1.min, t1.sec);
}
