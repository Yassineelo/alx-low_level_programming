#include "main.h"

/**
 * print_square - print a square using # character
 * @size: the size of square
 * Return : square
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
