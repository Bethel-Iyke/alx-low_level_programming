#include "main.h"

/**
 * *_memset - memset function
 * @s: starting point of string to change
 * @b: value that will replace
 * @n: number of bytes to be changed
 *
 * Return: changed pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
char *p = s;
for (; n != 0; p++, n--)
*p = b;
return (s);
}
