#include "main.h"

/**
*_memset - function that fills memory with a constant byte
*@s: pointer to fill
*@b: constant byte
*@n: number of byte
*Return: new s pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
