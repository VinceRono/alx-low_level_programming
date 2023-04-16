#include "main.h"

/**
 * clear_bit - sets bit val to 0
 * @n: pointer to no to change
 * @index: index to bit to clear
 *
 * Return: 1 if works, -1 if fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
