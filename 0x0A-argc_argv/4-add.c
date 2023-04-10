#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * main - entry point
 * @argc: argc
 * @argv: argv
 * Return: 0 or 1
 */
int main(int argc, char **argv)
{
	int res;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		if (!isdigit(*argv[1]) || !isdigit(*argv[2]))
		{
			printf("Error\n");
		}
		else
		{
			if (atoi(argv[1]) >= 0 && atoi(argv[2]) >= 0)
			{
				res = atoi(argv[1]) + atoi(argv[2]);
				printf("%d\n", res);
			}
		}
	}
	return (0);
}
