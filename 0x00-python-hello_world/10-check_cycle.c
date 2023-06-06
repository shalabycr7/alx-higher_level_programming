#include "lists.h"

/**
 * check_cycle - see if a single linked list has
 * a cycle in it.
 * @list: list pointer.
 * Return: 0 if there is no cycle.
 */
int check_cycle(listint_t *list)
{
	listint_t *pointer_on;
	listint_t *pointer_rev;

	pointer_on = list;
	pointer_rev = list;
	while (list && pointer_on && pointer_on->next)
	{
		list = list->next;
		pointer_on = pointer_on->next->next;

		if (list == pointer_on)
		{
			list = pointer_rev;
			pointer_rev = pointer_on;
			while (1)
			{
				pointer_on = pointer_rev;
				while (pointer_on->next != list && pointer_on->next != pointer_rev)
				{
					pointer_on = pointer_on->next;
				}
				if (pointer_on->next == list)
					break;

				list = list->next;
			}
			return (1);
		}
	}

	return (0);
}
