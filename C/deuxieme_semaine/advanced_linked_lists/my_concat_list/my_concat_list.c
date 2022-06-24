#include <stdlib.h>
#include <stdio.h>
#include "../include/my_list.h"

void my_concat_list(linked_list_t **begin1, linked_list_t *begin2) {
    linked_list_t *start = *begin1;
    while (start->next != NULL) {
        start = start->next;
    }
    start->next = begin2;       
}