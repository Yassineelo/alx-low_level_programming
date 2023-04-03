#include "main.h"
#include <stdio.h>

/**
 * _strchr - locate a character in a string
 * @s: string
 * @c: character
 * Return: result or NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + 1);
	}
	return (NULL);
}
