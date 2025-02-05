#include "square_root.h"
/* square root calculation interface
 * takes an integer returns the square root
 * calls other function to calculate root for simple refactoring
 * currently uses newton raphson method, but can
 * potentially be changed to iterative integer, secant, bisection, or other 
 * root finding method once implemented*/

int square_root(int n){
  
  int root = newton_raphson(n);
  return root;
}

/*newton raphson finds root of number
 * by incrementally taking dividing by the
 * function derivative until value converges
 * on the root*/
int newton_raphson(int n){
    double x0;
    double x = (double)n;
    double fx = x*x;
    double dx = 2*x;
    while(x -(fx/dx)){
    x0 = x;
    x = x-fx/dx;}

    return (int)x0;


    
}
