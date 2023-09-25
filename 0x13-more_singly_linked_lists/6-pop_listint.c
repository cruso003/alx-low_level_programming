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

	if (!*head)
	{
		return (0);
	}
	temp = *head;
	n = temp->n;
	*head = (*head)->next;
	free(temp);
	return (n);
}
