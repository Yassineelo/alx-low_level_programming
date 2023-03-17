#include <stdio.h>
#include <ctype.h>
/**
 * main - Numbers in lowercase
 * Return:0 (Success)
 */

int main(void)
{
	int i;

	i = 0;
	while (i < 16)
		if (i < 10)
		{
			putchar(i + '0');
			i++;
		}
		else
		{
			putchar(i - 10 + 'a');
			i++;
		}
	putchar('\n');
	return (0);
}
