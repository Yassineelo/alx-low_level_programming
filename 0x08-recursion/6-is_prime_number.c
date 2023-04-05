#include "main.h"

/**
 * is_prime_number - entry point
 * @n: input
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	int i;

	for (i = 2; i <= n / 2; i++)
	{
		if (n % i != 0)
		{
			return (1);
		}
		return (0);
	}
	return (0);	
}
