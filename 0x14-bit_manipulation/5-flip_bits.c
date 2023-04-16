#include "main.h"

/**
 * flip_bits - returns the number of bits you
 * would need to flip to get from one number to another.
 * @n: first no.
 * @m: second no.
 *
 * Return: number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, cnt = 0;
	unsigned long int cur;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		cur = exclusive >> i;
		if (cur & 1)
			cnt++;
	}
	return (cnt);
}
