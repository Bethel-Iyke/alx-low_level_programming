#include  "search_algos.h"

/**
* linear_search - linear search function
* @array: pointer to array
* @size: size of array
* @value: integer search
* Return: i (index of value) for success
* -1 if it fails
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	if (array[i] == value)
	{
		return (i);
	}
	}
	return (-1);
}
