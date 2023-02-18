#include "main.h"

/**
 * _strstr - find first occurence of a given string in another string
 * @haystack: String to search
 * @needle: string to search for
 * Return: pointer to beginning of lacated string
 */
char *_strstr (char *haystck, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
			{
				j++;
			}
			else
			{
				break;
			}
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
		{
			return (haystack + i);
		}
	}
	return (0);
}
