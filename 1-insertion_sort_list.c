#include "sort.h"

/**
 *swap_node - the function to swap the node
 *@node: node
 *@list: node list
 *
 *Return: pointer of current node
 */

listint_t *swap_node(listint_t *node, listint_t **list)
{
	listint_t *previous = node->prev, *my_node = node;

	previous->next = my_node->next;

	if (my_node->next)
		my_node->next->prev = previous;

	my_node->next = previous;
	my_node->prev = previous->prev;
	previous->prev = my_node;

	if (my_node->prev)
		my_node->prev->next = my_node;
	else
		*list = my_node;

	return (my_node);
}

/**
 * insertion_sort_list - sorts a doubly linked list of ints in ascending order
 * @list: the list to be sorted
 *
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node;

	if (!list || (*list)->next == NULL)
		return;

	node = (*list)->next;
	while (node)
	{
		while ((node->next) && (node->prev->n > node->n))
		{
			node = swap_node(node, list);
			print_list(*list);
		}
		node = node->next;
	}
}
