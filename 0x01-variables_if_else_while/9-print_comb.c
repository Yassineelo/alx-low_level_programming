#include <stdio.h>
/**
 * main - combination of single digits
 * Return:0 (Success)
 */

int main()
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
