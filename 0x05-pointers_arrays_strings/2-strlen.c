#include "main.h"

/**
*_strlen - print the length of strings
*@s:strings to be counted
*Return: length of the string
*/
int _strlen(char *s)
{
	int i;
	int counnt = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		counnt++;
	return (counnt);
}
