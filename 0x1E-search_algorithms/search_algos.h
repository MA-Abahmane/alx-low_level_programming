#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS


/* Libraries */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>



/* Tools */
int SFunc(int *array, int start, int end, int value);
void print_array(int *array, int start, int end);
int looker(int *array, int mid, int value);

/* Prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);


#endif
