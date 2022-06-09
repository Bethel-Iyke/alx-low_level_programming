#include "main.h"

/**
 * _isupper - checks if the task is uppercase or lowercase
 * @c:int
 * Return: returns 0
 */
int _isupper(int c)
{
if (c > 64 && c < 91)
return (1);
else
return (0);
}
