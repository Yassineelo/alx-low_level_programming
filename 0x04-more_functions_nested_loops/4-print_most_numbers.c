#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 * Return: Nothing
 */

void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_putchar(i + '0');
		}
		i++;
	}
	_putchar('\n');
}

