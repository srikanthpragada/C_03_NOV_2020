
struct time
{
  int hour, min, sec; // Members
};

struct time init_time(struct time t)
{
     t.hour = rand() % 24;
     t.min = rand() % 60;
     t.sec = rand() % 60;
     return t;
}

int total_seconds(struct time t)
{
    return t.hour * 3600 + t.min * 60 + t.sec;
}

void main()
{
  struct time times[10], highest_time;
  int i, highest_seconds = 0, seconds;


      srand(time(0));

      for(i=0; i < 10; i ++)
      {
          times[i] = init_time(times[i]);

          printf("%02d:%02d:%02d\n", times[i].hour, times[i].min, times[i].sec);

          seconds = total_seconds(times[i]);
          if (seconds > highest_seconds)
          {
              highest_seconds = seconds;
              highest_time = times[i];
          }
      }

      printf("\nHighest Time = %02d:%02d:%02d", highest_time.hour, highest_time.min, highest_time.sec);


}
