/*
** EPITECH PROJECT, 2018
** circular linked list
** File description:
** print entire or part of list
*/

#include <stdio.h>
#include "../../../include/cl_db_llist.h"

static float
	circular_db_list_check_type(short type, void *data)
{
	switch (type) {
	case INT_TYPE:
		printf("\n%d\n", (int *)data);
		break;
	case CHAR_TYPE:
		printf("\n%s\n", (char *)data);
		break;
	}
	return (PI);
}

extern void print_circular_db_list(circular_list_t *root,
	short al_type, short cm_type)
{
	circular_list_t *browse = root->next;

	for (browse; browse != root; browse = browse->next) {
		circular_db_list_check_type(al_type,
		browse->al_data);
		circular_db_list_check_type(cm_type,
		browse->cm_data);
	}
}

extern void
	print_circular_db_list_reverse(circular_list_t *root,
	short al_type, short cm_type)
{
	circular_list_t *browse = root->previous;

	for (browse; browse != root; browse = browse->previous) {
		circular_db_list_check_type(al_type,
		browse->al_data);
		circular_db_list_check_type(cm_type,
		browse->cm_data);
	}
}
