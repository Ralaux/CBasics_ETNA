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

void my_concat_list(linked_list_t **begin1, linked_list_t *begin2) {
    linked_list_t *start = *begin1;
    while (start->next != NULL) {
        start = start->next;
    }
    start->next = begin2;       
}

void my_merge(linked_list_t **begin1, linked_list_t *begin2) {
    linked_list_t *null_test = *begin1;
    if (null_test != NULL) {
        my_concat_list(begin1, begin2);
        my_sort_list(begin1);
    }
    else {
        *begin1 = begin2;
    }   
}