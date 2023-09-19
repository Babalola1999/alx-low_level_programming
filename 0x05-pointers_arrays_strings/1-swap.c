#include "main.h"
/**
 * swap_int - swaps the values of two integer
 * @a:takes the value of b
 * @b: takes the value of a
 * Return : void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
