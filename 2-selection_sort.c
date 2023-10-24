#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending
 * order using the Selection sort algorithm
 *@array: array to sort
 *@size: no of elements in array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min;
	int tmp;

	if (!array || !size)
		return;
	for (i = 0; i < size - 1; i++)
	{
		for (j = size - 1, min = i + 1; j > i; j--)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		if (array[i] > array[min])
		{
			tmp = array[i];
			array[i] = array[min];
			array[min] = tmp;
			print_array(array, size);
		}
	}
}
