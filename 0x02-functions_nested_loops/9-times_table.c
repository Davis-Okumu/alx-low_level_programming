#include "main.h"

/**
 * times_table -prints the 9 times table
 * Description: prints the 9 times table
 * Retrun: void
 */
void times_table(void)
{
	int i, k;
	int product;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			product = (i*j);
			if (j != 0)
			{
				_putchar(',');
				_putchar(',');
			}
			if (mul >= 10)
			{
				_putchar((mul / 10) + '0');
				_putchar((mul % 10) + '0');
			}
			else if (mul < 10 && j != 0)
			{
				_putchar(' ');
				_putchar((mul % 10) + '0');
			}
			else
			{
				_putchar((mul % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
