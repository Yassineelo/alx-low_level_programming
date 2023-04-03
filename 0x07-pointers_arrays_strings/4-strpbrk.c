#include "main.h"
#include <string.h>

/**
 * _strpbrk - entry point
 * @s: input
 * @accept: input
 * Return: 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	char *result = strpbrk(s, accept);

	if (result != NULL)
	{
		return (result);
	}
	return (NULL);
}
