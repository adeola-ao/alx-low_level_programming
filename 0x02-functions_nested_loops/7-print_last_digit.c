#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 *
 * @c: paramenter to be checked
 *
 * Return: Always d
 */
int print_last_digit(int c)
{
	int d;

	d = c % 10;
	if (c < 0)
		d = -d;
	return (d);
}
