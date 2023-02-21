#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that prints its name
 * @argc: arguments count
 * @argv: argument vector
 * Return: zero on EXIT_SUCCESS
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int count;

	printf("%s\n", argv[0]);

	return 0;
}
