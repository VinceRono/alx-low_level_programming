#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 *main - main function
 *Description: prints all single digit numbers of bast 10 starting from 0
 *Return: 0
 */

int main(void)
{
int i;

for (i = 0; i < 10; i++)
{
putchar(i + '0');
}
putchar('\n');

return (0);
}

