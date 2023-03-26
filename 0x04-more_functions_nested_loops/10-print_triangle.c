#include "main.h"

/**
 * print_triangle - print triangle withing #
 * Return: void
 */

void print_triangle(int size)
{
	int i, j, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = size - i; j > 1; j--)
			{
				_putchar(32);
			}
			for (y = 0; y <= i; y++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
