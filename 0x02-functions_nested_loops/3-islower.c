#include "main.h"
/**
 * _islower - check lowercase
 * return: 1 is lowercases and 0 is others
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return(1);
	}
	return(0);
}
