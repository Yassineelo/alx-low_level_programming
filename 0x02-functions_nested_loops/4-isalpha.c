#include "main.h"
/**
 * _isalpha - alphabetic character
 * @c : for check
 * Return: 1 if alphabetic or 0 if others
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
