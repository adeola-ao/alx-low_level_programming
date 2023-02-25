#include "main.h"

/**
 * print_most_numbers - function that prints 0 to 9
 *
 * @c: prints the numbers with _putchar
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c == '2' || c == '4')
			;
		else
			_putchar(c);
	}
	_putchar('\n');
}
