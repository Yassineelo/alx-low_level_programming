#include "main.h"

/**
 * flip_bits - Entry point
 * @n: first number
 * @m: second number
 * Return: counter
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, c = 0;
	unsigned long int cur;
	unsigned long int ex = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		cur = ex >> i;
		if (cur & 1)
			c++;
	}
	return (c);
}

