#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 *main - main header
 *Description: Prints lower case alphabet letters in reverse
 *Return: 0
 */

int main(void)
{
char c;

for (c = 'z'; c >= 'a'; c--)
{
putchar(c);
}
putchar('\n');

return (0);
}
