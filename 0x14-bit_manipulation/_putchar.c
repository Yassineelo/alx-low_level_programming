#include "main.h"
#include <unistd.h>
/**
 * _putchar - Entry point
 * @a: The character to print
 *
 * Return: 1 (Success), -1 (error)
 */
int _putchar(char a)
{
	return (write(1, &a, 1));
}

