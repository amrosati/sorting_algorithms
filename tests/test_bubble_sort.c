#include "../sort.h"

/**
 * main - test code
 *
 * Return: 0 (on success)
 */
int main(void)
{
	int arr[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
	int arr2[] = {57, -89, 6, -46, 15, -1, -40, -50, 66, -22, 149, 131, -29, -93, 29, -99, 144, 87, 76, 56};
	size_t n = sizeof(arr) / sizeof(arr[0]);

	print_array(arr, n);
	printf("\n");
	bubble_sort(arr, n);
	printf("\n");
	print_array(arr, n);

	printf("\n\n---------------------------\n\n");

	print_array(arr2, 20);
	printf("\n");
	bubble_sort(arr2, 20);
	printf("\n");
	print_array(arr2, 20);

	printf("\n\n--------------------\n\nDONE\n");

	return 0;
}
