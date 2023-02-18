#include "main.h"

/**
 * _strspn - get the lenght of the prefix substring
 * @s: String to search in
 * @accept: charchters to search for
 * Return: numbers of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int k = 0 ,i, j;

	for (x = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					k++;
			}
		}
		else
		{
			return (k);
		}
		return (z);
	}
}
