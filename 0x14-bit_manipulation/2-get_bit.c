#include "main.h"

/**
 * get_bit - Entry point
 * @n: number
 * @index: index of the bit
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int b;

	if (index > 63)
		return (-1);
	b = (n >> index) & 1;
	return (b);
}

