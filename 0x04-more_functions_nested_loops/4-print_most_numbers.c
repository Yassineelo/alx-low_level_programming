#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 * Return: Nothing
 */

void print_numbers(void)
{
	int i = 0;

	do
	{
		if (i != 2 || i != 4)
		{
			_putchar(i + '0');
			i++;
		}
	}
	while (i <= 9);
	_putchar('\n');
}

