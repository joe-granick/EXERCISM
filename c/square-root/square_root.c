#include "square_root.h"
/* square root calculation interface
 * takes an integer returns the square root
 * calls other function to calculate root for simple refactoring
 * currently uses newton raphson method, but can
 * potentially be changed to iterative integer, secant, bisection, or other 
 * root finding method once implemented*/

int square_root(int n){
  
  int root = integer_root(n);
  return root;
}

/*newton raphson finds root of number
 * by incrementally taking dividing by the
 * function derivative until value converges
 * on the root*/
/*int newton_root(int n){
    double x = (double)n;
    double fx = x*x;
    double dx = 2*x;
    while((int)(x*x)!= n){
    fx = x*x;
    dx = 2*x;
    x = x-fx/dx;}

    return (int)x;


    
}
*/

int integer_root(int n)
{
  int x = 1;
  while(x*x < n){
  x++;
  }
  return x;
}
