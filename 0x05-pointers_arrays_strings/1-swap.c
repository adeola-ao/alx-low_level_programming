#include "main.h"

/**
 * swap_int - swap the values of two integers a and b
 *
 *@a: integer 1
 *@b: integer 2
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
int t;
t = *a;
*a = *b;
*b = t;
}
