#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: pointer to the list(head)
 * Return: element_count
 */
size_t list_len(const list_t *h)
{
	const list_t *current = h;
	size_t element_count = 0;

	while (current != NULL)
	{
		current = current->next;
		element_count++;
	}
	return (element_count);

}
