#include "main.h"
#include <string.h>

/**
 * _strspn - length of a prefix substring
 * @s: input
 * @accept: input
 * Return: 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	int len = strspn(s, accept);

	return (len);
}
