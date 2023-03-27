#include "main.h"
/**
 * _strlen - returns length of string
 * @s : string to return length
 * Return : length of string
 */

int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		a++;
		s++;
	}
	return (a);
}


