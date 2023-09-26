#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: head of linked list
 * @index: node index starting at 0
 * Return: nth index or NULL if index is out of bounds
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int currentIndex = 0;
	listint_t *currentNode = head;
    
	while (currentNode)
	{
		if (currentIndex == index)
		{
			return (currentNode);
		}
		currentIndex++;
		currentNode = currentNode->next;
	}
	return (NULL);
}
