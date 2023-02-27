#include "main.h"

/**
 *_strlen - function that returns length of a string
 *
 *@s: A pointer to an int that will be changed
 *
 *Return: void
 */

int _strlen(char *s)
{
int n;

n = 0;
while (s[n] != '\0')
{
n++;
}
return (n);
}
