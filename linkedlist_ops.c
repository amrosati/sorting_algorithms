#include "sort.h"

/**
 * create_listint - Creates a doubly linked list from an array
 *
 * @array: Array to convert to a list
 * @size: Size of the array
 *
 * Return: Pointer to the head of the created list. NULL on failure
 */
listint_t *create_listint(const int *array, size_t size)
{
	listint_t *list, *node;
	int *tmp;

	list = NULL;
	while (size--)
	{
		node = malloc(sizeof(*node));
		if (!node)
			return (NULL);

		tmp = (int *) &node->n;
		*tmp = array[size];
		node->next = list;
		node->prev = NULL;
		list = node;
		if (list->next)
			list->next->prev = list;
	}

	return (list);
}

/**
 * free_list - Frees a linked list
 *
 * @list: doubly linked list
 */
void free_list(listint_t *list)
{
	if (!list)
		return;

	free_list(list->next);
	free(list);
}
