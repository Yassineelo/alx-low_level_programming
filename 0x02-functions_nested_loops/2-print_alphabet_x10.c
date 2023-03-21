#include "main.h"
/**
 * print_alphabet_x10 - print in 10 times the alphabets
 * return : 0 (Success)
 */

void print_alphabet_x10(void)
{
	char letter;
	int i;

	i = 1;
	while (i <= 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
		i++;
	}
}
