#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * main - entry point
 * @argc: argc
 * @argv: argv
 * Return: 0
 */
int main(int argc, char **argv)
{
	int res;

	if (argc >= 3)
	{
	res = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", res);
	return (0);
	}
	printf("Error\n");
	return (-1);
}
