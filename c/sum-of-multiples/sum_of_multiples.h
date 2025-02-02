#ifndef SUM_OF_MULTIPLES_H
#define SUM_OF_MULTIPLES_H

#include <stddef.h>

unsigned int sum(const unsigned int *factors, const size_t number_of_factors,
                 const unsigned int limit);


void merge(unsigned int *a, size_t l, size_t m, size_t r);

void mergesort(unsigned int *a, size_t l, size_t r);
#endif
