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

	printf("Size of a char: %zu byte(s)",sizeof(b));
	printf("Size of an int: %zu byte(s)",sizeof(a));
	printf("Size of a long int: %zu byte(s)",sizeof(a));
	printf("Size of a long long int: %zu byte(s)",sizeof(d));
	printf("Size of a float: %zu byte(s)",sizeof(c));
	return (0);
}

