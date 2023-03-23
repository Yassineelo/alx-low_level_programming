#include "main.h"

/**
 * _isupper - check for upercase character
 * @c : character to be checked
 * Return: 1 if upercase, 0 for otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return(1);
	}
	return(0);
}
