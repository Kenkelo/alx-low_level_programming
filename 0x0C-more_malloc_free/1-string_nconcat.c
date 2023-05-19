#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - A function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 * Return: pointer to the allocated memory, if it fails, return null.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conc;
	unsigned int ks1, ks2, kconc, i;

	if (s1 == NULL)
		s1 = " ";

	if (s2 == NULL)
		s2 = " ";

	for (ks1 = 0; s1[ks1] != '\0'; ks1++)
		;

	for (ks2 = 0; s2[ks2] != '\0'; ks2++)
		;

	if (n > ks2)
		n = ks2;

	kconc = ks1 + n;

	conc = malloc(kconc - 1);

	if (conc == NULL)
		return (NULL);

	for (i = 0; i < kconc; i++)
		if (i < ks1)
			conc[i] = s1[i];
		else
			conc[i] = s2[i - ks1];

	conc[i] = '\0';

	return (conc);
}
