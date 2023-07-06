#include "main.h"

/**
 * flip_bits - task 5
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, c = 0;
	unsigned long int exc = n ^ m;
	unsigned long int curr;

	for (a = 63; a >= 0; a--)
	{
		curr = exc >> a;
		if (curr & 1)
			c++;
	}

	return (c);
}

