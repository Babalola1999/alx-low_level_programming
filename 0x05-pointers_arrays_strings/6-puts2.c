#include "main.h"

/**
 * puts2 - prints even numbers starting from 0
 * @str: holds the content
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
