#include "main.h"
#include <string.h>
/**
 * _strcat - concatenate two strings
 * @src: source
 * @dest: destination
 * Return: resultin string
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
