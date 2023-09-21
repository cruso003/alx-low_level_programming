#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_list - A function that frees a list_t list
 * @head: list head
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *temp;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp->str);
		free(temp);
	}
}
