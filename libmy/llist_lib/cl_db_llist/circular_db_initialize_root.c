/*
** EPITECH PROJECT, 2018
** circle
** File description:
** circle linked listfunctions test
*/

#include <stdlib.h>
#include "../../../include/cl_db_llist.h"

extern circular_list_t *db_circular_list_init_root(void)
{
	circular_list_t *root = malloc(sizeof(*root));

	if (root != NULL) {
		root->previous = root;
		root->next = root;
	}
	return (root);
}
