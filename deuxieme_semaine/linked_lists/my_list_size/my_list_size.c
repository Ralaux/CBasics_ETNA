#include <stdlib.h>
#include <stdio.h>
#include "../include/my_list.h"

int my_list_size(const linked_list_t *list) {
    int cpt = 0;
    while (list != NULL) {
        list = list-> next;
        cpt = cpt + 1;
    }
    return cpt;
}