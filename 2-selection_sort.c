#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order.
 *		    Implements selection sort algorithm.
 * @array: An array to ints sort.
 * @size: The size of the array.
 * Return: Void
 */
void selection_sort(int *array, size_t size)
{
	int tmp = 0;
	size_t i, j = 0, pos = 0;

	if (array == NULL || size == 0)
		return;

	for (i = 0; i < size - 1; i++)
	{
		pos = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[pos])
				pos = j;
		}
		if (pos != i)
		{
			tmp = array[i];
			array[i] = array[pos];
			array[pos] = tmp;
			print_array(array, size);
		}
	}
}
