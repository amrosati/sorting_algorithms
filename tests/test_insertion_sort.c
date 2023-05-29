#include "../sort.h"

/**
 * main - test code
 *
 * Return: 0 (on success)
 */
int main(void)
{
	listint_t *head = NULL;
	int arr[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
	int arr2[] = {57, -89, 6, -46, 15, -1, -40, -50, 66, -22, 149, 131, -29, -93, 29, -99, 144, 87, 76, 56};
	size_t n = sizeof(arr) / sizeof(arr[0]);

	head = create_listint(arr, n);

	print_list(head);
	printf("\n");
	insertion_sort_list(&head);
	printf("\n");
	print_list(head);

	printf("\n\n---------------------------\n\n");
	free_list(head);
	head = create_listint(arr2, 20);

	print_list(head);
	printf("\n");
	insertion_sort_list(&head);
	printf("\n");
	print_list(head);

	free_list(head);
	printf("\n\n--------------------\n\nDONE\n");

	return 0;
}
