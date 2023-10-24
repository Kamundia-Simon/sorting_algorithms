#include "sort.h"

/**
 * swap - swaps 2 nodes in a doubly-linked list
 * @a: address of first node
 * @b: address of second node
 * Return: void
*/
void swap(listint_t *a, listint_t *b)
{
	if (a->prev)
		a->prev->next = b;
	if (b->next)
		b->next->prev = a;
	a->next = b->next;
	b->prev = a->prev;
	a->prev = b;
	b->next = a;

}

/**
 * insertion_sort_list - insertion sorts a doubly-linked list
 * @list: address of pointer to head node
 * Return: void
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *x, *z;

	if (!list || !*list || !(*list)->next)
		return;
	x = (*list)->next;
	while (x)
	{
		z = x;
		x = x->next;
		while (z && z->prev)
		{
			if (z->prev->n > z->n)
			{
				swap(z->prev, z);
				if (!z->prev)
					*list = z;
				print_list((const listint_t *)*list);
			}
			else
				z = z->prev;
		}

	}
}
