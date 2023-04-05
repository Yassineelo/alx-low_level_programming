#include "main.h"
/**
 * factorial - entry point
 * @n: input
 * Return: 0 or -1
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	n = n * factorial(n - 1);
	return (n);
}
