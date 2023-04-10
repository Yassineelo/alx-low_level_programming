#include <stdio.h>
#include <ctype.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - entry point
 * @argc: argc
 * @argv: argv
 * Return: 0 or 1
 */
int main(int argc, char **argv)
{
	int res = 0;
	int i;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!isdigit(*argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				if (atoi(argv[i]) >= 0)
				{
					res = res + atoi(argv[i]);
				}
			}
		}
	}
	printf("%d\n", res);
	return (0);
}
