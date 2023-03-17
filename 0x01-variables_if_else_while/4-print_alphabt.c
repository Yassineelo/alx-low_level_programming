#include <stdio.h>
/**
 * main - List caracters
 * Return:0 (Success)
 */
int main(void)
{
	char i;

	for (i = 'a'; i < 'e'; i++)
		putchar(i);
	for (i = 'f'; i < 'q'; i++)
		putchar(i);
	for (i = 'r'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
return (0);
}
