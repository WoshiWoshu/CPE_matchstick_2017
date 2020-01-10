/*
** EPITECH PROJECT, 2018
** libmy linked list
** File description:
** delets in circular linked lists
*/

#include <stdlib.h>
#include "../../../include/cl_db_llist.h"

extern void delet_db_circular_node(circular_list_t *node)
{
	node->previous->next = node->next;
	node->next->previous = node->previous;
	free(node);
}

extern void delet_db_circular_fist_element(circular_list_t *root)
{
	if (root->next != root)
		free(root->next);
}

extern void delet_db_circular_last_element(circular_list_t *root)
{
	if (root->previous != root)
		free(root->previous);
}

extern void empty_db_circular_list(circular_list_t *list)
{
	circular_list_t *tmp = NULL;
	circular_list_t *browse;

	for (browse = list->next; browse != list; browse = tmp) {
		tmp = browse->next;
		free(browse);
	}
}

extern void delet_db_circular_list(circular_list_t **list)
{
	empty_db_circular_list(*list);
	free(*list);
	*list = NULL;
}
