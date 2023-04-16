#include "main.h"

/**
 * binary_to_unit - converts binary no. to unsigned int
 * @bn: binary no string
 *
 * return: new converted int
 */
unsigned int binary_to_unit(const char *b)
{
	int a;
	unsigned int d_val = 0;

	if(!bn)
		return (0);
	for (a = 0; bn[a]; a++)
	{
		if (bn[a] < '0' || bn[a] > '1')
			return (0);
		d_val = 2 * d_val + (bn[a] - '0');
	}
	return (d_val);
}
