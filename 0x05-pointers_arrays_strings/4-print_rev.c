#include "main.h"

/**
 * print_rev - print string in inverse
 * @s: string to be printed
 * Return: void
 */

void print_rev(char *s)
{
	int a = *s;

	for (int i = a; i >= 0; i--)
	{
		_putchar(s[a]);
		a--;
	}
	_putchar('\n');
}
