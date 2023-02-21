#include <stdio.h>
/**
 * main - Program that prints its name
 * @argc: arguments count
 * @argv: argument vector
 * Return: zero on EXIT_SUCCESS
 */
int main(int argc, char *argv)
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s \n", argv[count]);
	}

	return 0;
}
