#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * insert_node - Inserts a number into a sorted singly-linked list.
 * @head: A pointer the head of the linked list.
 * @number: The number to insert.
 * Return: if the function is null
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *current = *head, *new = NULL, *prev = *head;

	if (*head == NULL || number <= current->n)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = number;
		new->next = *head;
		*head = new;
		return (new);
																}
	while (current)
	{
		if (number <= current->n)
		{
			new = malloc(sizeof(listint_t));
			if (new == NULL)
				return (NULL);
			new->n = number;
			prev->next = new;
			new->next = current;
			return (new);
		}
		prev = current;
		current = current->next;
	}
	new = add_nodeint_end(&prev, number);
	return (new);
}
