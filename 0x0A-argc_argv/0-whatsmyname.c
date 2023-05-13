#include <stdio.h>
#include "main.h"
/**
 * main - it prints program name
 * @argc: arguments
 * @argv: array of arguments
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
