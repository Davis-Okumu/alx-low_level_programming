#include <stdio.h>
#include <stdlib.h>

/**
 *main - main enetry
 *Return: always 0 (success)
 */
int main(void)
{
	int n = '0';

	do {
		putchar(n);
		putchar(',');
		n++;
	} while (n <= '9');
	return (0);
}
