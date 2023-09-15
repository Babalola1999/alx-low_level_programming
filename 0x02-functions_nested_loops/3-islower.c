#include "main.h"
/**
 *_islower - return 1 if c is lower
 *@c: parameter to be checked
 * Return: one or zero
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
