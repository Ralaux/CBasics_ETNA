#include <stdlib.h>
#include <stdio.h>
#include "../include/my_list.h"

void my_add_in_sorted_list(linked_list_t **begin, int data) {
    if (*begin == NULL) {
        linked_list_t *new;
        new = malloc(sizeof(linked_list_t));
        new->data = data;
        new->next = NULL;
        *begin = new;
        return;
    }
    
    linked_list_t *list_aft = *begin;
    linked_list_t *list_prev = *begin;
    list_aft = list_aft->next;
    if (data < list_prev->data) {
        linked_list_t *new = malloc(sizeof(linked_list_t));
        new->data = data;
        new->next = list_prev;
        *begin = new;
        return;
    }
    while (list_aft != NULL) {
        if (list_aft->data >= data && list_prev->data <= data) {
            linked_list_t *new = malloc(sizeof(linked_list_t));
            new->data = data;
            new->next = list_aft;
            list_prev->next = new;
            return;
        }
        list_prev = list_prev->next;
        list_aft = list_aft->next;
    }
    if (data > list_prev->data) {
        linked_list_t *new = malloc(sizeof(linked_list_t));
        new->data = data;
        new->next = NULL;
        list_prev->next = new;
    }
}