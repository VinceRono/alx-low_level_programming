#include "main.h"

/**
 * binary_to_uint - converts binary no. to unsigned int
 * @b: binary no string
 *
 * Return: new converted int
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int d_val = 0;

	if (!b)
		return (0);
	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		d_val = 2 * d_val + (b[a] - '0');
	}
	return (d_val);
}
