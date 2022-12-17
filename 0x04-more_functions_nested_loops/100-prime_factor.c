#include <stdio.h>
#include <stdlib.h

/**
 * main - finds and prints the largest prime factor of the numbe
 * return: Always 0 (Success)
 */
int main(void)
{
	long int num = 612852475143;
	long int divisor = 2;
	long int int_prime = 0;

	while (num != 1)
	{
		if (num % divisor == 0)
		{
			num /= divisor;
			int_prime = divisor;
		}
		divisor += 1;
	}
	printf("%d\n", int_prime);
	return (0);
}
