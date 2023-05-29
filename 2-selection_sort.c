#include "sort.h"

/**
 * selection_sort - Sorts an array using Selection sort algorithm
 *
 * @array: Array of integers to sort
 * @size: Size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, m;

	for (i = 0; i < size - 1; i++)
	{
		for (j = i + 1, m = i; j < size; j++)
			if (array[j] < array[m])
				m = j;

		if (m != i)
		{
			swap(&array[i], &array[m]);
			print_array(array, size);
		}
	}
}

/**
 * swap - Swaps two elements in array
 *
 * @el1: first element
 * @el2: second element
 */
void swap(int *el1, int *el2)
{
	int tmp = *el1;
	*el1 = *el2;
	*el2 = tmp;
}
