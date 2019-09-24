/*
** EPITECH PROJECT, 2017
** params_to_list
** File description:
** params list
*/

#include <stdlib.h>
#include "include/mylist.h"

int put_list(linked_list_t **list, char *str)
{
	struct s_list *element;
	element = malloc(sizeof(element));
	element->data= str;
	element->next = *list;
	*list = element;
		
	return (0);
}


linked_list_t *my_params_to_list(int ac, char * const *av)
{
	int swap = -1;
        int list = NULL;

	struct linkes_list_t *next= malloc(sizeof(list));
	
	while (swap != ac)
        {
		put_list(&list, av[swap]);
		swap++;
	}
	return (list);
}
