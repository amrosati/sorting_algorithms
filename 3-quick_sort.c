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
	size_t lo, hi;

	lo = 0;
	hi = size - 1;

	sort(array, size, lo, hi);
}

/**
 * partition - Partition the array using Lomuto partition scheme
 *
 * @array: Array to partition
 * @size: Array size
 * @lo: Lowest index in @array
 * @hi: Highest index in @array
 *
 * Return: The pivot index
 */
size_t partition(int *array, size_t size, size_t lo, size_t hi)
{
	int pivot = array[hi];
	int i, j;

	for (i = (int) lo - 1, j = (int) lo; j < (int) hi; j++)
		if (array[j] <= pivot)
		{
			i++;
			swap(&array[i], &array[j]);
		}

	i++;
	swap(&array[i], &array[hi]);
	print_array(array, size);

	return (i);
}

/**
 * sort - Recursively sorts the array
 *
 * @array: The array to sort
 * @size: Array size
 * @lo: Lowest index
 * @hi: Highest index
 */
void sort(int *array, size_t size, int lo, size_t hi)
{
	size_t p;

	if (lo >= (int) hi || lo < 0)
		return;

	p = partition(array, size, (size_t) lo, hi);

	sort(array, size, lo, p - 1);
	sort(array, size, p + 1, hi);
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
