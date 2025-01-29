#include "gigasecond.h"
#include <math.h>
void gigasecond(time_t input, char *output, size_t size){
    time_t seconds = input + pow(10,9);
    struct tm *time;
    time = localtime(&seconds);
    strftime(output,size,"%Y-%m-%d %H:%M:%S", time);
}