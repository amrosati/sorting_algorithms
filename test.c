#include "sort.h"

/**
 * main - test code
 *
 * Return: 0 (on success)
 */
int main(void)
{
	int arr1[] = {-79, -4, 30, 99, -47, 72, -19, -97, 47, 43, -39, 55, -30, -9, -90, -87, 13, -83, -59};
	int arr2[] = {-74, 15, -24, -30, 27, 28, -93, 44, -36, 81, -33, -25, -11, -8, 13, 26, 21, 71, 86};
	int arr3[] = {20, -47, 62, 56, 32, -36, -82, -96, -24, -48, 13, 80, -38, 73, -72, 34, -77, -81, 84};

	print_array(arr1, 19);
	printf("\n");
	bubble_sort(arr1, 19);
	printf("\n");
	print_array(arr1, 19);
        printf("\n\t-----------------------------------------\n");
	print_array(arr2, 19);
        printf("\n");
	bubble_sort(arr2, 19);
	printf("\n");
	print_array(arr2, 19);
        printf("\n-------------------------------------------\n");
	print_array(arr3, 19);
        printf("\n");
	bubble_sort(arr3, 19);
	printf("\n");
	print_array(arr1, 19);
	return 0;
}
