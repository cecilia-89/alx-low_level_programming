#include "main.h"

/**
 * swap_int - swaps values btw ints
 *
 * @a: interger
 *
 * @b: interger
 */

void swap_int(int *a, int *b)
{
	int swap_value;

	swap_value = *a;

	*a = *b;

	*b = swap_value;

}
