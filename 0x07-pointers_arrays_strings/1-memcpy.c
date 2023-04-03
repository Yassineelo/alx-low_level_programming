#include "main.h"
#include <string.h>

/**
 * _memcpy - copie memory area
 * @dest: destination
 * @src: source
 * @n: size
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
