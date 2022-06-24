#include <stdlib.h>
#include <stdio.h>
#include "../include/my_list.h"

void my_swap(linked_list_t *a, linked_list_t *b) {
    if (a == NULL || b == NULL) {
        return;
    }
    int c = a->data;
    int d = b->data;
    a->data = d;
    b->data = c;
}

void my_sort_list(linked_list_t **begin) {
    linked_list_t *low = *begin;
    linked_list_t *high = *begin;
    while (low != NULL) {
        while (high != NULL) {
            if (high->data < low->data) {
                my_swap(low, high);
            }
            high = high->next;
        }
        low = low->next;
        high = low;
    }
}