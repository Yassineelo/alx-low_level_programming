#include <stdio.h>
/**
 * main - combination of single digits
 * Return:0 (Success)
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			int a = i / 10;
			int b  = i % 10;
			int c = j / 10;
			int d = j % 10;

			if (i < j)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(' ');
				putchar(c + '0');
				putchar(d + '0');
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
