#include "main.h"

/**
 * _strbrk - Searches for a sstring of bytes
 * @s: string to be searched
 * @accept: bytes be searched
 * Return: a pointer to the bytes that match
 */
char *_strbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
