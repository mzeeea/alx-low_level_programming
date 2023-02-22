#include "main.h"

/**
 * _abs - funtion that prints the absolute value of an integer
 *
 * @a: the parameter to be checked
 *
 * Return: always a
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
