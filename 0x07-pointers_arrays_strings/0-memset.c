#include "main.h"
#include <string.h>
/**
 * _memset - fills memory with constant byte
 * @s: pointer
 * @b: constant byte
 * @n: nombre of bytes
 * Return:(s)
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
