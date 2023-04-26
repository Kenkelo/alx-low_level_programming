#include "main.h"
/**
 * times_table - A function to print 9 times table
 * starting with 0
 */
void times_table(void)
{
	int num;
	int mul;
	int sum;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (mul = 0; mul <= 9; mul++)
		{
			_putchar(',');
			_putchar(' ');

			sum = num + mul;

			if (sum <= 9)
				_putchar(' ');
			else
				_putchar((sum / 10) + '0');
			_putchar((sum % 10) + '0');
		}
		_putchar('\n');
	}
}
