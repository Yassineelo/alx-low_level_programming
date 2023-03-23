#include "main.h"

/**
 * _isdigit - check for digit characters
 * @c: character to be checked
 * Return: 1 if digit, 0 for otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
