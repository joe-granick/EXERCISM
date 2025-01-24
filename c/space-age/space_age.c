#include "space_age.h"
const double orbit[] = {.2408467, .61519726, 1.0, 1.8808158, 11.862615, 29.447498, 84.016846, 164.79132};
float age (planet_t planet, int64_t seconds) {
    if (planet < 0 || planet >7) return -1.0;
    double s = (seconds/orbit[planet]);
    float y = s/31557600;
    return y;
    
}