#include "main.h"
/**
 * print_last_digit - print last digit of number
 * @n: number to treat
 * Return: last digit of number
 */

int print_last_digit(int n)
{
	int lst;
	lst = n % 10;
	if (lst < 0)
	{
		lst = lst * -1;
	}
	_putchar(lst + '0');
	return (lst);
}
