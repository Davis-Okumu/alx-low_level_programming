#include <stdio.h>
#include <stdlib.h>

/**
 *main - entry point
 *Return: always 0 (success)
 */
int main(void)
{
	int ch = 'z';

	do{
		putchar(ch);
		ch++;
	}while (ch >= 'a');
	putchar('\n');
	return (0);
}
