#include <stdlib.h>
#include <stdio.h>
#include "../include/my_list.h"

linked_list_t *my_push_front_to_list(int value, linked_list_t *list) {
    linked_list_t *new;
    new = malloc(sizeof(*list));
    new->next = NULL;
    new->next = list;
    new->data = value;
    return new;
}
