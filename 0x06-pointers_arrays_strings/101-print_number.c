#include "main.h"

/**
 * print_number - print integer
 * @n: integer
 * Return: void
 */

void print_number(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar(n + '0');
		i++;
	}
	_putchar('\n');
}
