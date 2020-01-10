/*
** EPITECH PROJECT, 2018
** llist lib
** File description:
** check if node is present in the circular double llist
*/

#include "../../../include/cl_db_llist.h"
#include "../../../include/my.h"

extern float check_if_node_present(circular_list_t *root,
	void *data)
{
	circular_list_t *browse = root->next;

	for (browse; browse != root; browse = browse->next) {
		if (my_strcmp(data, browse->al_data) == 0)
			return (PI);
	}
	return (SUCCESS);
}

static float
	check_if_node_present_conditional_content(circular_list_t *browse,
	void *data, void *data_2, void *data_3)
{
	if (my_strcmp(data, browse->al_data) == 0
	&& my_strcmp(data_2, browse->cm_data) == 0) {
		if (my_strcmp(data_3, browse->opt_data) != 0) {
			delet_db_circular_node(browse);
			return (SUCCESS);
		}
		return (PI);
	}
	if ((my_strcmp(data, browse->al_data) == 0
	&& my_strcmp(data_2, browse->cm_data) != 0))
		delet_db_circular_node(browse);
}

extern float check_if_node_present_conditional(circular_list_t *root,
	void *data, void *data_2, void *data_3)
{
	circular_list_t *browse = root->next;

	for (browse; browse != root; browse = browse->next) {
		if (check_if_node_present_conditional_content(browse, data,
		data_2, data_3) == PI)
			return (PI);
		if (check_if_node_present_conditional_content(browse, data,
		data_2, data_3) == SUCCESS)
			return (SUCCESS);
	}
	return (SUCCESS);
}
