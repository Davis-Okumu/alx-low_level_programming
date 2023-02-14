#include "main.h"

/**
 * _strspn - get the lenght of the prefix substring
 * @s: String to search in
 * @accept: charchters to search for
 * Return: numbers of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; i < strlen(s); i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}

