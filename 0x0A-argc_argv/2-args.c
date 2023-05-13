#include <stdio.h>
#include "main.h"
/**
 * main - A program that prints all the arguments it receives
 * @argc: arguments
 * @argv: array of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
