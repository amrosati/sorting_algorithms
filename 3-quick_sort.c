#include "sort.h"

/**
 * quick_sort - Sorts an array of integers in ascending order,
 *		using the Quick sort algorithm
 *
 * @array: The array to sort
 * @size: Number of elements in @array
 */
void quick_sort(int *array, size_t size)
{
	if (!array)
		return;

	sort(array, 0, size - 1);
}

/**
 * partition - Partition the array using Lomuto partition scheme
 *
 * @array: Array to partition
 * @lo: Lowest index in @array
 * @hi: Highest index in @array
 *
 * Return: The pivot index
 */
int partition(int *array, int lo, int hi)
{
	int pivot = array[hi], i, j;
	static int size, k;

	if (!k)
	{
		k++;
		size = hi + 1;
	}

	for (i = lo, j = lo; j < hi; j++)
		if (array[j] <= pivot)
		{
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
			i++;
		}

	if (i != hi)
	{
		swap(&array[i], &array[hi]);
		print_array(array, size);
	}

	return (i);
}

/**
 * sort - Recursively sorts the array
 *
 * @array: The array to sort
 * @lo: Lowest index
 * @hi: Highest index
 */
void sort(int *array, int lo, int hi)
{
	int p;

	if (lo >= hi || lo < 0)
		return;

	p = partition(array, lo, hi);

	sort(array, lo, p - 1);
	sort(array, p + 1, hi);
}

/**
 * swap - Swap two numbers
 *
 * @n1: first number
 * @n2: second number
 */
void swap(int *n1, int *n2)
{
	int tmp = *n1;

	*n1 = *n2;
	*n2 = tmp;
}
