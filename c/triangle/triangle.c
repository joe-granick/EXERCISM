#include "triangle.h"


bool is_equilateral(triangle_t t)
{
  if(!is_triangle(t)){return false;}
  if (t.a != t.b){return false;}
  if(t.a != t.c){return false;}
  if(t.b != t.c){return false;}
  return true;
}
bool is_isosceles(triangle_t t)
{
  if(!is_triangle(t)){return false;}
  if(t.a == t.b){return true;}
  if(t.a == t.c){return true;}
  if(t.b == t.c){return true;}
  return false;
}
bool is_scalene(triangle_t t)
{
  if(!is_triangle(t)){return false;}
  if(t.a == t.b){return false;}
  if(t.a == t.c){return false;}
  if(t.b == t.c){return false;}
  return true;
}

bool is_triangle(triangle_t t)
{
  if(t.a >= t.b + t.c){return false;}
  if(t.b >= t.c + t.a){return false;}
  if(t.c >= t.a + t.b){return false;}
  if(!t.a || !t.b || !t.c){return false;}
  return true;
}
