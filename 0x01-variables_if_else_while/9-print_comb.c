#include <stdio.h>
/**
 * main - combination of single digits
 * Return:0 (Success)
 */

int main()
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 10)
	{
		while (j < 10)
		{
			putchar(i);
			putchar(j);
			if (i != 9 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		i++;
		}
	}
	return (0);
}
