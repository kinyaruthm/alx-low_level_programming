#include "main.h"

/**
 * swap_int - swaps the values
 * @a: integer to be swapped
 * @b: integer to be swapped
 */

void swap_int(int *a, int *b)
{

	int m;

	m = *a;
	*a = *b;
	*b = m;
}
