//
// Created by Snöcc on 2019-02-28.
//

#ifndef LINKED_LIST_LINKED_LIST_H
#define LINKED_LIST_LINKED_LIST_H

typedef struct linked_list_node
{
    int value;
    struct linked_list_node *next;
} linked_list_node_t;

linked_list_node_t *linked_list_create();

void linked_list_push_back(linked_list_node_t *linked_list, int value);

void linked_list_print(linked_list_node_t *linked_list);

void linked_list_push_front(linked_list_node_t **linked_list, int value);

// void linked_list_push_after(linked_list_node_t *linked_list, int value);

int linked_list_size(linked_list_node_t *linked_list);

int linked_list_empty(linked_list_node_t *linked_list);

void linked_list_delete_front(linked_list_node_t *linked_list);


#endif //LINKED_LIST_LINKED_LIST_H
