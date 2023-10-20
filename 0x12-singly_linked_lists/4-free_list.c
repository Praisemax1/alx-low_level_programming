#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: pointer to the list_t list
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
