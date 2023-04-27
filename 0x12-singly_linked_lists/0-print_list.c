#include "lists.h"

/**
* print_list - function  prints all the elements of a list_t list
* @h: pointer to the linked list
* Return: returns number of nodes
*/
size_t print_list(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	const list_t *ptr;

	ptr = h;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
			ptr = ptr->next;
			count++;
			continue;
		}

		printf("[%d] %s\n", ptr->len, ptr->str);
		count++;
		ptr = ptr->next;

	}

	return (count);
}
