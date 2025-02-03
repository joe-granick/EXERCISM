#include "clock.h"
clock_t clock_create(int hour, int minute)
{
    hour+= minute/60;
    hour = hour%24;
    minute = minute%60;
    clock_t clock;
    clock.text[0] = hour/10+'0';
    clock.text[1] = hour%10+'0';
    clock.text[2] = ':';
    clock.text[3] = minute/10+'0';
    clock.text[4] = minute%10+'0';
    clock.text[5] = '\0';

    return clock;
    
}
/*clock_t clock_add(clock_t clock, int minute_add)
{
    return clock;
}
clock_t clock_subtract(clock_t clock, int minute_subtract)
{
    return clock;
}
bool clock_is_equal(clock_t a, clock_t b)
{
    return false;
}
*/
