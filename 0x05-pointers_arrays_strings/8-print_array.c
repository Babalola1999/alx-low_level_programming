#include "main.h"

/**
 * print_array - print all the content of the array with space & comma
 * @a:pointer to array
 * @n:holds the count
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
