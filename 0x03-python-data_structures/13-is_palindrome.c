#include "lists.h"

/**
 * reverse - reverses list half.
 * @h_r: second half head.
 * Return: no value
 */
void reverse(listint_t **h_r)
{
	listint_t *prev_ptr;
	listint_t *curr_ptr;
	listint_t *next_ptr;

	prev_ptr = NULL;
	curr_ptr = *h_r;

	while (curr_ptr != NULL)
	{
		next_ptr = curr_ptr->next;
		curr_ptr->next = prev_ptr;
		prev_ptr = curr_ptr;
		curr_ptr = next_ptr;
	}
	*h_r = prev_ptr;
}

/**
 * compare - compares list values.
 * @h1: first half head.
 * @h2: second half head.
 * Return: status.
 */
int compare(listint_t *h1, listint_t *h2)
{
	listint_t *first_val;
	listint_t *second_val;

	first_val = h1;
	second_val = h2;

	while (first_val != NULL && second_val != NULL)
	{
		if (first_val->n == second_val->n)
		{
			first_val = first_val->next;
			second_val = second_val->next;
		}
		else
			return (0);
	}

	if (first_val == NULL && second_val == NULL)
		return (1);
	return (0);
}

/**
 * is_palindrome - checks if a singly linked list
 * is a palindrome.
 * @head: list head pointer.
 * Return: status.
 */
int is_palindrome(listint_t **head)
{
	listint_t *start, *end, *start_ptr;
	listint_t *second_half, *mid_val;
	int isp;

	start = end = start_ptr = *head;
	mid_val = NULL;
	isp = 1;

	if (*head != NULL && (*head)->next != NULL)
	{
		while (end != NULL && end->next != NULL)
		{
			end = end->next->next;
			start_ptr = start;
			start = start->next;
		}
		if (end != NULL)
		{
			mid_val = start;
			start = start->next;
		}
		second_half = start;
		start_ptr->next = NULL;
		reverse(&second_half);
		isp = compare(*head, second_half);
		if (mid_val != NULL)
		{
			start_ptr->next = mid_val;
			mid_val->next = second_half;
		}
		else
			start_ptr->next = second_half;
	}
	return (isp);
}
