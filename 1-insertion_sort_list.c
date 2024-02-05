#include "sort.h"
/**
* insertion_sort_list - Sorts a doubly linked list of integers in ascending
* order using the Insertion sort algorithm.
*
* @list: Pointer to the pointer to the head of the list.
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	for (current = (*list)->next; current != NULL; current = current->next)
	{
		tmp = current;
		while (tmp->prev != NULL && tmp->n < tmp->prev->n)
		{
			tmp->prev->next = tmp->next;

			if (tmp->next != NULL)
			{
				tmp->next->prev = tmp->prev;
			}

			tmp->next = tmp->prev;
			tmp->prev = tmp->prev->prev;
			tmp->next->prev = tmp;

			if (tmp->prev == NULL)
			{
				*list = tmp;
			}

			else
				tmp->prev->next = tmp;
			print_list(*list);
		}
	}
}
