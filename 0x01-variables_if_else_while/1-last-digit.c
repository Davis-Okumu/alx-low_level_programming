#include <stdlib.h>
#include<time.h>

/**
 *Mian -Entry point
 *Return : Always 0 (success)
 */
int main(void)
{
	int n,lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	while (n >=10)
	{
		n = n / 10;
	}
	if (lastDigit > 5)
	{
		printf("Last digit of ",n,"is ",lastDigit,"and is greater than 5\n");
	}
	if else (lastDigit == 0)
	{
		printf("Last digit of ",n,"is 0 and is 0\n");
	}
	else
	{
		printf("Last digit of ",n,"is ",lastDigit,"and is less than 6 and not 0\n");
	}
	return (0);
}
