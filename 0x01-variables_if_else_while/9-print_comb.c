#include <stdio.h>
/**
 * main - combinations of number with space btw
 *
 * Return: zero
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 9 ; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
