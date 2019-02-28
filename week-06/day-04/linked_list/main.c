#include <stdio.h>
#include "linked_list.h"

int main()
{
    linked_list_node_t *lancolt_lista_mutato = linked_list_create();

    linked_list_push_back(lancolt_lista_mutato, 10);
    linked_list_print(lancolt_lista_mutato);

    printf("--------------------\n");

    linked_list_push_front(&lancolt_lista_mutato, 20);
    linked_list_print(lancolt_lista_mutato);

    printf("--------------------\n");

    printf("%d\n", linked_list_size(lancolt_lista_mutato));

    printf("--------------------\n");

    printf("%d\n", linked_list_empty(lancolt_lista_mutato));

    printf("Hello, World!\n");
    return 0;
}