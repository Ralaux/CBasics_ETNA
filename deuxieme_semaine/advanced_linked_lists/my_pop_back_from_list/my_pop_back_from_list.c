#include <stdlib.h>
#include <stdio.h>
#include "../include/my_list.h"

int my_list_size(const linked_list_t *list) {
    int cpt = 0;
    while (list != NULL) {
        list = list->next;
        cpt = cpt + 1;
    }
    return cpt;
}

linked_list_t *my_pop_back_from_list(linked_list_t *list) {
    if (list == NULL) {
        return list;
    }
    if (list->next == NULL) {
        return NULL;
    }
    linked_list_t *first;
    first = malloc(sizeof(linked_list_t));
    first->next = list;
    int i = 0;
    while (i < (my_list_size(list) - 2) ) {
        list = list->next;
    }
    list->next = NULL;
    first = first->next;
    return first;
}