#include "main.h"
/**
 *_strcat - function that concatenates two strings
 *@dest: pointer to dest string
 *@src: pointer to src string
 *Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
int a, b;

a = 0;
while (dest[a] != '\0')
{
a++;
}

b = 0;
while (src[b] != '\0')
{
dest[a] = src[b];
b++;
a++;
}
dest[a] = '\0';

return (dest);
}
