#include "main.h"

/**
 * reverse_array - reverse the content of array
 * @a: array
 * @n: number of elements of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
