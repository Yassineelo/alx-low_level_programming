#include "main.h"

/**
 * rot13 - encoding string with rot13
 * @str: string
 * Return: str
 */

char *rot13(char *str)
{
	int i, j;
	char leet1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char leet2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == leet1[j])
			{
				str[i] = leet2[j];
				break;
			}
		}
	}
	return (str);
}
