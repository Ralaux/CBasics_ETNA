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

linked_list_t *my_push_back_to_list(int value, linked_list_t *list) {
    if (list == NULL) {
        linked_list_t *new;
        new = malloc(sizeof(linked_list_t));
        new->data = value;
        new->next = NULL;
        return new;
    }
    int i = 0;
    linked_list_t *new;
    new = malloc(sizeof(linked_list_t));
    new->data = value;
    while (i < (my_list_size(list) - 1) ) {
        list = list->next;
    }
    list->next = new;
    new->next = NULL;
    return new;
}