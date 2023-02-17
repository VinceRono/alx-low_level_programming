#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - main function
 *Description: Prints numbers of base 16
 *Return: 0
 */

int main(void)
{
char c;
int i;

for (i = 0; i < 10; i++)
{
putchar(i + '0');
}
for (c = 'a'; c < 'g'; c++)
{
putchar(c);
}
putchar('\n');

return (0);
}
