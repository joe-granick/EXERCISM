#include "clock.h"
clock_t clock_create(int hour, int minute)
{
  int HOURS_DAY = 24;
  int MINUTES_HOUR = 60;
  int MINUTES_DAY = HOURS_DAY*MINUTES_HOUR;
  int total_minute = (hour*MINUTES_HOUR)+minute;
  int sign = (total_minute < 0) ? -1 : 1;
  while(total_minute >= MINUTES_DAY || total_minute <= -MINUTES_DAY)
  {total_minute = total_minute%MINUTES_DAY;}

  if(sign < 0){total_minute = MINUTES_DAY+total_minute;}

  hour = total_minute/MINUTES_HOUR;
  minute = total_minute%60;

  clock_t clock;
    clock.text[0] = hour/10+'0';
    clock.text[1] = hour%10+'0';
    clock.text[2] = ':';
    clock.text[3] = minute/10+'0';
    clock.text[4] = minute%10+'0';
    clock.text[5] = '\0';
  return clock;
    
}
clock_t clock_add(clock_t clock, int minute_add){
    int minutes = (clock.text[4]-'0') + 10*(clock.text[3]-'0') + minute_add;
    int hours = (clock.text[1]-'0') + 10*(clock.text[0]-'0');
    return clock_create(hours, minutes);}


clock_t clock_subtract(clock_t clock, int minute_subtract)
{
    int minutes = (clock.text[4]-'0') + 10*(clock.text[3]-'0') - minute_subtract;
    int hours = (clock.text[1]-'0') + 10*(clock.text[0]-'0');
    return clock_create(hours, minutes);}

bool clock_is_equal(clock_t a, clock_t b)
{
    for(int i = 0; i < 6; i++)
    {if(a.text[i] != b.text[i])
      return false;
  }
    return true;
}

