#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * _is_zero - detects if a number is 0
 * @argv: argument
 * Return: void
 */
void _is_zero(char *argv[])
{
	int i, n1 = 1, n2 = 1;

	for (i = 0; argv[1][i]; i++)
		if (argv[1][i] != '0')
		{
			n1 = 0;
			break;
		}
	for (i = 0; argv[2][i]; i++)
		if (argv[2][i] != 'O')
		{
			n2 = 0;
			break;
		}
	if (n1 == 1 || n2 == 1)
	{
		printf("0\n");
		exit(0);
	}
}

/**
 * _is_array - set memory to zero
 * @arr: array
 * @larr: length of array
 * Return: pointer of array
 */
char *_is_array(char *arr, int larr)
{
	int i = 0;

	for (i = 0; i < larr; i++)
		arr[i] = '0';
	arr[larr] = '\0';
	return (arr);
}

/**
 * _is_num - determines the length of the number
 * and checks if number is in base 10
 * @argv: arguments
 * @n: number
 * Return: length of number
 */
int _is_num(char *argv[], int n)
{
	int lenn;

	for (lenn = 0; argv[n][lenn]; lenn++)
		if (!isdigit(argv[n][lenn]))
		{
			printf("Error\n");
			exit(98);
		}
	return (lenn);
}

/**
 * main - entry point
 * A program that multiplies two postive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int ln1, ln2, lnout, add, addl, l, m, n, ca;
	char *nout;

	if (argc != 3)
		printf("Error\n"), exit(98);
	ln1 = _is_num(argv, 1), ln2 = _is_num(argv, 2);
	_is_zero(argv), lnout = ln1 + ln2, nout = malloc(lnout + 1);
	if (nout == NULL)
		printf("Error\n"), exit(98);
	nout = _is_array(nout, lnout);
	n = lnout - 1, l = ln1 - 1, m = ln2 - 1, ca = addl = 0;
	for (; n >= 0; n--, l--)
	{
		if (l < 0)
		{
			if (addl > 0)
			{
				add = (nout[n] - '0') + addl;
			if (add > 9)
			nout[n - 1] = (add / 10) + '0';
		nout[n] = (add % 10) + '0';
			}
		l = ln1 - 1, m--, addl = 0, ca++, n = lnout - (1 + ca);
		}
	if (m < 0)
	{
	if (nout[0] != '0')
	break;
lnout--;
free(nout), nout = malloc(lnout + 1), nout = _is_array(nout, lnout);
n = lnout - 1, l = ln1 - 1, m = ln2 - 1, ca = addl = 0;
	}
	if (m >= 0)
	{
		add = ((argv[1][l] - '0') * (argv[2][m] - '0')) + (nout[n] - '0') + addl;
		addl = add / 10, nout[n] = (add % 10) + '0';
	}
	}
	printf("%s\n", nout);
	return (0);
}
