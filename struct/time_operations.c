
struct time
{
  int hour, min, sec; // Members
};

struct time next_second(struct time t)
{

}

int total_seconds(struct time t)
{
    return t.hour * 3600 + t.min * 60 + t.sec;
}

int timecmp(struct time t1, struct time t2)
{
    return  total_seconds(t1) - total_seconds(t2);
}

void main()
{
    struct time t1 = {10,20,30}, t2 = {1,2,3};

    if (timecmp(t1,t2) > 0)
        printf("First");

}
