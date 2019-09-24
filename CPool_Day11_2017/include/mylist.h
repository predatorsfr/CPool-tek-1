/*
** EPITECH PROJECT, 2017
** mylist.h
** File description:
** mylist
*/

#ifndef LINKEDLIST_H_
# define LINKEDLIST_H_


typedef struct linked_list
{
	void *data;
	struct linked_list *next;
} linked_list_t;

#endif /* LINKEDLIST_H_ */
