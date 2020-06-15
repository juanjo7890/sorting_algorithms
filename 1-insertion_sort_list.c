#include "sort.h"

/**
 * insertion_sort_list - sorts a doubli linked list
 * @list: data to sort
 * Return: 0
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp, *i, *j;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (tmp = *list; tmp != NULL; tmp = tmp->next)
	{
		i = tmp;
		for (j = i->prev; j != NULL && j->n > i->n; j = i->prev)
		{
			if (j->prev != NULL && i->next != NULL)
			{
				j->prev->next = i;
				i->next->prev = j;
				j->next = i->next;
				i->prev = j->prev;
				i->next = j;
				j->prev = i;
				print_list(*list);
				continue;
			}
			if (j->prev == NULL)
			{
				i->prev = NULL;
				j->next = i->next;
				j->prev = i;
				if (i->next != NULL)
					i->next->prev = j;
				i->next = j;
				*list = i;
				print_list(*list);
				continue;
			}
			if (i->next == NULL)
			{
				i->prev = j->prev;
				i->next = j;
				j->next = NULL;
				j->prev->next = i;
				j->prev = i;
				print_list(*list);
				continue;
			}
		}
	}
}
