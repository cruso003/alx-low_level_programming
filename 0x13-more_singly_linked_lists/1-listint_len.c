#include "lists.h"
#include <stdio.h>
/**
 * listint_len - list return the number of elements in a linked list
 * @h: head of the linked list
 * Return: count of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
