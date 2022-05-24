#include "lists.h"
#include <stdio.h>

/**
  *print_list - prints all the elements of list_t.
  *@h: pointer to the list.
  *
  *Return: the number of nodes
  */
size_t print_list(const list_t *h)
{
	int count;

	count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		h = h->next;
		count++;
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
