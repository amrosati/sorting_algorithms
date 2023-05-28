#include "sort.h"

/**
 * main - test code
 *
 * Return: 0 (on success)
 */
int main(void)
{
	listint_t *head = NULL;
	int arr[] = {167, 178, 117, 113, 90, 132, -3, 111, 0, 138, -65, 99, 21, 200, 175, -47, -57, 199, 116, 157};
	int arr2[] = {57, -89, 6, -46, 15, -1, -40, -50, 66, -22, 149, 131, -29, -93, 29, -99, 144, 87, 76, 56};

	head = create_listint(arr, 20);

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
