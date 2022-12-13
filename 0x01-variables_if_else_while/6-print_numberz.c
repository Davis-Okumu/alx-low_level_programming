#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry point
 *Return: always 0 (success)
 */
int main(void)
{
	int n = '0';

	do{
		putchar(n);
		n++;
	}while (n <= '9');
	putchar('\n');
	return (0);
}
