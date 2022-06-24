#include <stdlib.h>
#include <stdio.h>
#include "../include/my_list.h"


linked_list_t *my_find_node(linked_list_t *list, const int data_ref) {
    while (list->data != data_ref && list != NULL) {
        list = list->next;
        if (list == NULL) {
            return NULL;
        }
    }
    return list;
}