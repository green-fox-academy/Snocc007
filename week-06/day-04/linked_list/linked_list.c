//
// Created by Snöcc on 2019-02-28.
//
#include <stdlib.h>
#include <stdio.h>
#include "linked_list.h"

linked_list_node_t *linked_list_create()
{
    linked_list_node_t *linked_list = (linked_list_node_t *) malloc(sizeof(linked_list_node_t));
    linked_list->value = 0;
    linked_list->next = NULL;

    return linked_list;
}

void linked_list_push_back(linked_list_node_t *linked_list, int value)
{
    linked_list_node_t *new_node = (linked_list_node_t *) malloc(sizeof(linked_list_node_t));
    new_node->value = value;
    new_node->next = NULL;

    linked_list_node_t *it = linked_list;

    while (it->next != NULL) {
        it = it->next;
    }

    it->next = new_node;

}

void linked_list_print(linked_list_node_t *linked_list)
{
    linked_list_node_t *it = linked_list;
    while (it != NULL) {
        printf("%p: %d\n", it, it->value);
        it = it->next;

    }
}

void linked_list_push_front(linked_list_node_t **linked_list, int value)
{
    linked_list_node_t *new_node = (linked_list_node_t *) malloc(sizeof(linked_list_node_t));
    new_node->value = value;
    new_node->next = *linked_list;
    *linked_list = new_node;

}

int linked_list_size(linked_list_node_t *linked_list)
{
    int count = 0;
    linked_list_node_t *it = linked_list;
    while (it != NULL) {
        it = it->next;
        count++;
    }
    return count;
}

int linked_list_empty(linked_list_node_t *linked_list)
{
    int if_empty;

    if (linked_list == NULL) {
        if_empty = 1;
    } else
        if_empty = 0;

    return if_empty;
}

void linked_list_delete_front(linked_list_node_t *linked_list)
{

}