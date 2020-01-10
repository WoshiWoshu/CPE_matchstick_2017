/*
** EPITECH PROJECT, 2018
** libmy linked list
** File description:
** access node in circular linked list
*/

#include <stddef.h>
#include "../../../include/cl_db_llist.h"

extern circular_list_t
	*access_db_circular_first_element(circular_list_t *root)
{
	if (root->next != root)
		return (root->next);
	else
		return (NULL);
}

extern circular_list_t
	*access_db_circular_last_element(circular_list_t *root)
{
	if (root->previous != root)
		return (root->previous);
	else
		return (NULL);
}

extern circular_list_t
	*access_db_circular_given_element(circular_list_t *root, void *info)
{
	circular_list_t *browse;

	for (browse = root->previous; browse != root; browse = browse->previous)
		if (browse->al_data == info)
			return (browse);
}
