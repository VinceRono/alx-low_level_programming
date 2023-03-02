#include <main.h>

/**
 * _strcat - camcatemates two strings
 * @dest: char string to cncatenate
 * @src: char string
 * Return: pointer to resulting string 'dest'
 */

char *_strcat(char *dest, char *src)
{
	int i, c;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	c = 0;
	while (src[c] != '\0')
	{
		dest[i] = src[c];
		i++;
		c++;
	}

	dest[i] = '\0';
	return (dest);
}
