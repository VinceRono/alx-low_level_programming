#include "main.h"

/**
 * print_array - prints the array elements
 * @a: array name
 * @n: numeber of elements of array
 * Return: a & n
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
