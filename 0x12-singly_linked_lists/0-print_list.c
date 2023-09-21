#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_list - prints all the elements of a list
 * @h: pointer to the list(head)
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t node_count = 0;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0](nil)");
		}
		else
		{
			printf("[%u] %s", current->len, current->str);
		}
		printf("\n");
		current = current->next;
		node_count++;
	}
	return (node_count);
}
