#include "main.h"

/**
 * print_line - print line with _ character
 * @n: number of lines to draw
 * Return : line
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
