#ifndef __SORT_H__
#define __SORT_H__


/** Include **/
#include <stdio.h>
#include <stdlib.h>


/** Data Structures **/
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element in the list
 * @next: Pointer to the next element in the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;


/** Functions Prototypes **/
void print_array(const int *, size_t);
void print_list(const listint_t *);
void swap(int *, int *);
void bubble_sort(int *, size_t);


#endif /** __SORT_H__ **/
