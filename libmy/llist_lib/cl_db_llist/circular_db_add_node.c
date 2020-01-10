/*
** EPITECH PROJECT, 2018
** libmy linked list
** File description:
** add node into circular linked list
*/

#include <stdlib.h>
#include "../../../include/cl_db_llist.h"

extern void
	add_db_circular_to_beginning(circular_list_t *root,
	void *al_data, void *cm_data)
{
	add_db_circular_after_an_element(root, al_data, cm_data);
}

extern void
	add_db_circular_to_end(circular_list_t *root,
	void *al_data, void *cm_data)
{
	add_db_circular_before_an_element(root, al_data, cm_data);
}

extern float check_if_node_present(circular_list_t *root, void *data)
{
	circular_list_t *browse = root->next;

	for (browse; browse != root; browse = browse->next) {
		if (data == browse->al_data)
			return (PI);
	}
	return (SUCCESS);
}

extern circular_list_t
	*add_db_circular_before_an_element(circular_list_t *node,
	void *al_data, void *cm_data)
{
	circular_list_t *new_node = malloc(sizeof(*new_node));

	if (new_node != NULL) {
		new_node->al_data = al_data;
		new_node->cm_data = cm_data;
		new_node->previous = node->previous;
		new_node->next = node;
		node->previous->next = new_node;
		node->previous = new_node;
		return (new_node);
	}
}

extern circular_list_t
	*add_db_circular_after_an_element(circular_list_t *node,
	void *al_data, void *cm_data)
{
	circular_list_t *new_node = malloc(sizeof(*new_node));

	if (new_node != NULL) {
		new_node->al_data = al_data;
		new_node->cm_data = cm_data;
		new_node->previous = node;
		new_node->next = node->next;
		node->next->previous = new_node;
		node->next = new_node;
		return (new_node);
	}
}
