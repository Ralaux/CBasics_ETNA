#include <stdlib.h>
#include <stdio.h>
#include "../include/my_list.h"

linked_list_t *my_pop_front_from_list(linked_list_t *list) {
    if (list == NULL) {
        return list;
    }
    list = list->next;
    return list;
}