#include "complex_numbers.h"
#include <math.h>

complex_t c_add(complex_t a, complex_t b)
{
    complex_t c;
    c.real = a.real + b.real;
    c.imag = a.imag + b.imag;
    return c;
}

complex_t c_sub(complex_t a, complex_t b)
{
   // TODO: implement
    complex_t c;
    c.real = a.real-b.real;
    c.imag = a.imag - b.imag;
    return c;

}

complex_t c_mul(complex_t a, complex_t b)
{
   // TODO: implement
    complex_t c;
    c.real = a.real*b.real - a.imag*b.imag;
    c.imag = a.real*b.imag + b.real*a.imag;
    return c;
}

complex_t c_div(complex_t a, complex_t b)
{
   // TODO: implement
    complex_t c;
    c.real = (a.real*b.real + a.imag*b.imag)/(b.real*b.real +b.imag*b.imag);
    c.imag = (a.imag*b.real - a.real*b.imag)/(b.real*b.real + b.imag*b.imag);
    return c;
}

double c_abs(complex_t x)
{
   // TODO: implement
    double abs;
    abs = (x.real*x.real + x.imag*x.imag); 
    return sqrt(abs);
}

complex_t c_conjugate(complex_t x)
{
   // TODO: implement
    x.imag = -x.imag;
    return x;
}

double c_real(complex_t x)
{
   // TODO: implement
    return x.real;
}

double c_imag(complex_t x)
{
   // TODO: implement
    return x.imag;
}

complex_t c_exp(complex_t x)
{
   // TODO: implement
    return x;
}
