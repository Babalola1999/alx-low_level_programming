#include "main.h"

/**
 * rev_string - print strings in reverse direction
 * @s: holds the strings
 * Return :void
 */
void rev_string(char *s)
{
	int i;
	char j;
	int count;

	count = 0;
	for (i = 0 ; i[s] != '\0' ; i++)
		count++;
	for (i = 0 ; i < count / 2 ; i++)
	{
		j = s[i];
		s[i] = s[count - 1 - i];
		s[count - 1 - i] = j;
	}
}
