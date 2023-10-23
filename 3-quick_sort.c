#include "sort.h"

/**
 * quick_sort - Sorts an array of integers in ascending order.
 *              Implements the Quick sort algorithm.
 * @array: Array
 * @size: Array size
 * Return: Void.
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	lomuto_sort(array, 0, size - 1, size);
}

/**
 * lomuto_partition - Sorts a subset of an array of integers by using
 *					  the lomuto partition scheme (last element as pivot).
 * @array: The array
 * @low: The lower int
 * @high: The higher iny
 * @size: The array size
 *
 * Return: Return (i) ie the final index of the pivot after the entire sort.
 */
int lomuto_partition(int *array, int low, int high, size_t size)
{
	int i = low - 1, j = low;
	int pivot = array[high], aux = 0;

	for (; j < high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (array[i] != array[j])
			{
				aux = array[i];
				array[i] = array[j];
				array[j] = aux;
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] != array[high])
	{
		aux = array[i + 1];
		array[i + 1] = array[high];
		array[high] = aux;
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * lomuto_sort - Implements the quicksort algorithm through recursion.
 * @array: The array to sort.
 * @low: The lower int.
 * @high: The higher int.
 * @size: THe array's size.
 *
 * Return: Void.
 */
void lomuto_sort(int *array, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = lomuto_partition(array, low, high, size);
		lomuto_sort(array, low, pivot - 1, size);
		lomuto_sort(array, pivot + 1, high, size);
	}
}
