#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0 ; i < 15 ; i++)
	{
		for (j = 0 ; j < 15 ; j++)
		{
			k = j * i;
			if (j == 0)
			{
				_putchar(k + '0');
			}
			if (k < 15 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else if (k >= 15)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
		}
		_putchar('\n')
}
}
