#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pop_listint -deletes the head node of a linked list
 * @head: list head
 * Return: head node's data(n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (!*head || !head)
	{
		return (0);
	}
	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (n);
}
