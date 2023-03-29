#include "main.h"
#include <string.h>

/**
 * _strncat - concatenate two strings using n bytes from src
 * @src: source
 * @dest: destination
 * @n: number of characters to concatenate
 * Return: destination
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
