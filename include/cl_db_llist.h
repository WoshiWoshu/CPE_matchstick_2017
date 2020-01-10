/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** db circular llist lib
*/

#ifndef _CL_DB_LIB_H_
#define _CL_DB_LIB_H_

#include <stdbool.h>

typedef enum circular_info_e {
	INT_TYPE = 1,
	CHAR_TYPE = 2,
} circular_info_t;

/* union circular_check_u { */
/*	void *al_data; */
/*	void *cm_data; */
/* }; */
union circular_type_u {
	circular_info_t circular_info;
};

typedef struct circular_list_t circular_list_t;
struct circular_list_t {
	int value;
	void *al_data;
	void *cm_data;
	void *opt_data;
	circular_list_t *previous;
	circular_list_t *next;
};

static const float PI = 3.14;
static const bool SUCCESS = 0;
static const bool FAILURE = 1;

extern circular_list_t *db_circular_list_init_root(void);
extern void delet_db_circular_node(circular_list_t *node);
extern void delet_db_circular_fist_element(circular_list_t *root);
extern void delet_db_circular_last_element(circular_list_t *root);
extern void empty_db_circular_list(circular_list_t *list);
extern void delet_db_circular_list(circular_list_t **list);
extern circular_list_t
	*access_db_circular_first_element(circular_list_t *root);
extern circular_list_t
	*access_db_circular_last_element(circular_list_t *root);
extern void
	add_db_circular_to_beginning(circular_list_t *root, void *al_data,
	void *cm_data);
extern void
	add_db_circular_to_end(circular_list_t *root,
	void *al_data, void *cm_data);
extern circular_list_t
	*add_db_circular_before_an_element(circular_list_t *node,
	void *al_data, void *cm_data);
extern circular_list_t
	*add_db_circular_after_an_element(circular_list_t *node,
	void *al_data, void *cm_data);
extern void print_circular_db_list(circular_list_t *root,
	short al_type, short cm_type);
extern void
	print_circular_db_list_reverse(circular_list_t *root,
	short al_type, short cm_type);
extern circular_list_t
	*access_db_circular_given_element(circular_list_t *root, void *info);
extern float check_if_node_present(circular_list_t *root, void *data);
extern float check_if_node_present_conditional(circular_list_t *root,
	void *data, void *data_2, void *data_3);

#endif /* _CL_DB_LIB_H_ */
