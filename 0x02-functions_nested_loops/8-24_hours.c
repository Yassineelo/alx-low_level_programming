#include "main.h"
/**
 *jack_bauer - print day's minutes
 *return:0 (Success)
 */
void jack_bauer(void)
{
	int i,j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			if (i < 10 && j < 10)
			{
				_putchar('0');
				_putchar(i+);
				_putchar(':');
				_putchar('0');
				_putchar(j);
			}
			else if (i < 10 && j >= 10)
			{
				_putchar('0');
				_putchar(i);
				_putchar(':');
				_putchar(j);
			}
			else if (i >= 10 && j < 10)
			{
				_putchar(i);
				_putchar(':');
				_putchar('0');
				_putchar(j);
			}
			else if (i >= 10 && j >= 10)
			{
				_putchar(i);
				_putchar(':');
				_putchar(j);
			}
			_putchar('\n');
		}
	}
}
