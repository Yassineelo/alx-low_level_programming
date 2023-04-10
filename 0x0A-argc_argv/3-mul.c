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

	if (argc >= 2)
	{
	res = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", res);
	return (0);
	}
	printf("Error");
	return (-1);
}
