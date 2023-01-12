#include "search_algos.h"

/**
* binary_search - binary search function
* print_array - function that prints array
* @array: integer array input
* @size: size of array
* @value: integer search
* Return: i if success
* -1 if failure
*/

int binary_search(int *array, size_t size, int value)
{
	int start = 0;
	int end = (size - 1);

	while (start <= end)
	{
		int mid = ((start + end) / 2);

		int i = start;

		printf("Searching in array: ");
		while (i < end)
		{
			printf("%d, ", array[i]);
			i++;
		}
		printf("%d\n", array[i]);
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			start = (mid + 1);
		}		else
		{
			end = (mid - 1);
		}
	}
	return (-1);
}
