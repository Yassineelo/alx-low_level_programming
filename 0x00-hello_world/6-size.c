#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	char b;
	float c;
	double d;

	printf("Size of a char: %zu byte(s)\n", sizeof(b));
	printf("Size of an int: %zu byte(s)\n", sizeof(a));
	printf("Size of a long int: %zu byte(s)\n", sizeof(a));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(d));
	printf("Size of a float: %zu byte(s)\n", sizeof(c));
	return (0);
}

