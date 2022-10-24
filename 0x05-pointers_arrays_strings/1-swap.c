#include "main.h"

/**
 * swap_int - swap the value of two ints
 * @a: int a
 * @b: int b
 */

void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}
