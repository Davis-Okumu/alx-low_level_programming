#include "main.h"

/**
 * _memcpy - function that hte memory area.
 * @dest:memoryarea copied to
 * @src:memory area copied from
 * @n:number of bytes copied
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
