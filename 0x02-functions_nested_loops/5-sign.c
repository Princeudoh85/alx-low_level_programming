#include "main.h"
/**
 * print_sign - Determines if the input number
 * greater, iqual or less than zero.
 * @n: the input number as an integer.
 * Return: 1 is greater than zero. 0 is zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
