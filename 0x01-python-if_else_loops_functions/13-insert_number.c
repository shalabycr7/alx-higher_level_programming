#include "lists.h"

/**
 * insert_node - inserts new node at location.
 * @head: list head.
 * @number: new node index.
 * Return: the address of the new node.
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new_node;
	listint_t *h;
	listint_t *prev_head;

	h = *head;
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	while (h != NULL)
	{
		if (h->n > number)
			break;
		prev_head = h;
		h = h->next;
	}

	new_node->n = number;

	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
	}
	else
	{
		new_node->next = h;
		if (h == *head)
			*head = new_node;
		else
			prev_head->next = new_node;
	}

	return (new_node);
}
