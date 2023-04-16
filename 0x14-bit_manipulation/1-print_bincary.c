#include "main.h"

/**
 * print_binary - printes bin equiv to dec no.
 * @n: no. to print in bin
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i, cnt = 0;
	unsigned long int curr;

	for (i = 63; i >= 0; i--)
	{
		curr = n >> i;
		if (curr & 1)
		{
			_putchar('1');
			cnt++;
		}
		else if (count)
			_putchar('0');
	}
	if (!cnt)
		_putchar('0');
}
