#ifndef ALGO_H
#define ALGO_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int search(int start, int end, int *array, int value);
#endif
