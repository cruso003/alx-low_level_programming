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
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0](nil)");
		}
		else
		{
			printf("[%u] %s", h->len, h->str);
		}
		printf("\n");
		h = h->next;
		count++;
	}

	return (count);
}
