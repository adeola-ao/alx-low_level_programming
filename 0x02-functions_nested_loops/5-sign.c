#include "main.h"

/**
 * print_sign - function that prints the sign of a number
 *
 * @n: parameter to be checked
 *
 * Return: 1 for positive and n greater than 0, 0 if n is zero
 * and -1 for negative an n less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		return (0);
	}
	else
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (0);
	}

}
