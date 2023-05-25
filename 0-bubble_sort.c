#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers using bubble sort algorithm
 *
 * @array: The array to be sorted
 * @size: Number of elements in the array
 */
void bubble_sort(int *array, size_t size)
{
	int is_sorted;
	size_t j, i;

	for (i = 0; array && size > 1 && i < size - 1; i++)
	{
		is_sorted = 1;
		for (j = 0; j < size - i - 1; j++)
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
				is_sorted = 0;
			}

		if (is_sorted)
			break;
	}
}

/**
 * swap - Swaps two pointers values
 *
 * @x: First number
 * @y: Second number
 */
void swap(int *x, int *y)
{
	int tmp = *x;

	*x = *y;
	*y = tmp;
}
