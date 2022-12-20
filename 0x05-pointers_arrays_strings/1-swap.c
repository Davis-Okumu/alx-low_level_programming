#include "main.h"

/**
 * swap_int - swaps values of two integers
 * @a: 1st pointer
 * @b: 2nd pointer
 * return: nothing
 */
void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
}
