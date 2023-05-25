#include "sort.h"

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
	int i;

	for (i = 0; list; i++, list = list->next)
	{
		if (i > 0)
			printf(", ");
		printf("%d", list->n);
	}
	printf("\n");
}
