#include "main.h"

/**
 * _puts - prints a string forllowed bu a new line to stdout
 * @str: string to print
 */

void _puts(car *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
