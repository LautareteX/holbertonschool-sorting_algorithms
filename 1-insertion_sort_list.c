#include "sort.h"
/**
 * insertion_sort_list -  function that sorts a
 * doubly linked list of integers in ascending order
 * using the Insertion sort algorithm.
 *
 *@list: list to sort.
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node, *tmp, *auxiliar;

	if (!list || !(*list))
		return;
	node = *list;
	while ((node = node->next))
	{
		tmp = node;
		while (tmp->prev && tmp->prev->n > tmp->n)
		{
			auxiliar = tmp->prev;
			if (tmp->next)
				tmp->next->prev = auxiliar;
			if (auxiliar->prev)
				auxiliar->prev->next = tmp;
			else
				*list = tmp;
			auxiliar->next = tmp->next;
			tmp->prev = auxiliar->prev;
			tmp->next = auxiliar;
			auxiliar->prev = tmp;
			print_list(*list);
		}
	}
}
