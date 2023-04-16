#include "main.h"

/**
 * get_bit - gives value of bit at an index
 * @n: no. in search
 * @index: bit index
 *
 * Return: bit val
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bt_val;

	if (index > 63)
		return (-1);

	bt_val = (n >> index) & 1;

	return (bt_val);
}
