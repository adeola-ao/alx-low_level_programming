#include "main.h"

/**
 * print_numbers - function that prints 0 to 9
 *
 * @c: parameter to be printed with _putchar
 *
 * Return: Always 0
 */

void print_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
