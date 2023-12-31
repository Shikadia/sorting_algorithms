#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order.
 *				 Implements bubble sort algorithm.
 * @array: The array of ints to sort.
 * @size: The size of the array.
 * Return: Void.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp = 0;

	if (array == NULL || size == 0)
		return;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
		}
	}
}
