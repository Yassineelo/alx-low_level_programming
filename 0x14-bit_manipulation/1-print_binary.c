#include "main.h"

/**
 * print_binary - Entry point
 * @n: number printed in binary
 */
void print_binary(unsigned long int n)
{
	int a, c = 0;
	unsigned long int curr;

	for (a = 63; a >= 0; a--)
	{
		curr = n >> a;

		if (curr & 1)
		{
			_putchar('1');
			c++;
		}
		else if (c)
			_putchar('0');
	}
	if (!c)
		_putchar('0');
}

