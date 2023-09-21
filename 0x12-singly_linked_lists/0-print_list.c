#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a list
 * @h: pointer to the list(head)
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0](nil)\n");
		}
		else
		{
			printf("[%u]%s", h->len, h->str);
		}
		h = h->next;
		node_count++;
	}
	return (node_count);
}
