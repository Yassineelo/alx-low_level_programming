#include "main.h"

/**
 * print_rev - print string in inverse
 * @s: string to be printed
 * Return: void
 */

void print_rev(char *s)
{
	int l = 0;
	int a;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	s--;
	for (a = l; a > 0; a--)
	{
		_putchar(*s);
		s--;
	}		
	_putchar('\n');
}
