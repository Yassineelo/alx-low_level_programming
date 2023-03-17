#include <stdio.h>
/**
 * main - combination of single digits
 * Return:0 (Success)
 */

int main()
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			putchar(i);
			putchar(j);
			if (i != 9 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
