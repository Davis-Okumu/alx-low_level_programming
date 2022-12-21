#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to a charcater string variable
 * Return: void
 */
void rev_string(char *s)
{
	int counter, half, i;
	char temp;

	for (counter = 0; s[counter] != '\0'; counter++)
		;
	i = 0;
	half = counter / 2;

	while (half--)
	{
		temp = s[counter - i - 1];
		s[counter - i - 1] = s[i];
		s[i] = temp;
		i++;
	}
}
