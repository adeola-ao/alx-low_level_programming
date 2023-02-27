#include "main.h"
/**
 * print_rev - prints a string in reverse followed by new line
 *@s: A pointer to an int that will be changed
 *
 *Return: void
 */

void print_rev(char *s)
{
int l;

l = 0;
while (s[l] != '\0')
{
l++;
}

for (l = l - 1 ; l >= 0; l--)
{
_putchar (s[l]);
}

_putchar ('\n');
}
