#include "main.h"

/**
 * print_sign - print sign of number
 * @n: for check
 * Return: 1 if positive and -1 if negative and 0 for others
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
