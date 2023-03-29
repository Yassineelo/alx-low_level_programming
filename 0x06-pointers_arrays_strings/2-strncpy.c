#include "main.h"
#include <string.h>

/**
 * _strncpy - copy string
 * @src: source
 * @dest: destination
 * @n: number of characters to copy
 * Return: destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
