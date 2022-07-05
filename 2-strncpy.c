#include "main.h"

/**
* _strncpy - copies a string
* @dest: src 1
* @src: src 2
* @n: size
*
* Return: dest
*/

char *_strncpy(char *dest, char *src)
{
	int i, n;

	n = _strlen(src);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
