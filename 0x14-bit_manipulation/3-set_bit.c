#include "main.h"

/**
 * set_bit - set val of bit to 1 for a given index
 * @n: pointer to no to be changed
 * @index: index of bit to set to 1
 *
 * Return: 1 for worked, -1 for failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
