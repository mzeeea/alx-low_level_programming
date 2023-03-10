#include "main.h"

/**
 * print_sign - function that prints signs
 *
 * @n: function parameter
 *
 * Return: 1 if n is greater than zero
 * and 0 if n is equal to zero
 *  otherwise print -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
		_putchar(',');
		_putchar(' ');
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
		_putchar(',');
		_putchar(' ');
	}
	else
	{
		_putchar('-');
		return (-1);
		_putchar(',');
		_putchar(' ');
	}
}
