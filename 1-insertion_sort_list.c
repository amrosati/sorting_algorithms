#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 *
 * @list: Pointer to pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *next, *current, *insertion_point;
	int sorted;

	if (!list)
		return;
	if (!(*list))
		return;

	current = (*list)->next;
	while (current)
	{
		next = current->next;
		insertion_point = current->prev;

		while (insertion_point && insertion_point->n > current->n)
			insertion_point = insertion_point->prev;

		sorted = is_sorted(insertion_point == current->prev, current);
		if (!sorted)
		{
			if (!insertion_point)
			{
				current->prev = NULL;
				current->next = *list;
				(*list)->prev = current;
				(*list) = current;
			}
			else
			{
				current->next = insertion_point->next;
				insertion_point->next = current;
				current->prev = insertion_point;
				current->next->prev = current;
			}

			print_list(*list);
		}

		current = next;
	}
}


/**
 * is_sorted - Checks if the positions are already sorted and switch links
 *
 * @isit: 0 if it is not, otherwise if it is sorted
 * @node: the node to take out its links
 *
 * Return: 1 if it is sorted, 0 otherwise
 */
int is_sorted(int isit, listint_t *node)
{
	if (isit)
		return (1);

	node->prev->next = node->next;
	if (node->next)
		node->next->prev = node->prev;

	return (0);
}
