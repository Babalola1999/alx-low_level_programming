#include "main.h"

/**
 *_isalpha - checkes for alphabet
 *@c: fuctoin param
 *Return: one and  zero
 *
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
