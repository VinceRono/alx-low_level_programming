#include <stdio.h>

void first(void) __attribute__((constructor));

/**
 * first - sentence b4 main func exec
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon by back!\n");
}
