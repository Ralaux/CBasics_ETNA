/*
** ETNA PROJECT, 21/10/2021 by alaux_r
** my_strdup
** File description:
**      dupplique un str par malloc
*/

#include <stdlib.h>

int my_strlen(const char *str) {

    int i;
    i = 0;
    
    while (str[i] != '\0') {
        i = i + 1;
    }
    return i;
}

char *my_strdup(const char *src) {
    char *ret;
    int i = 0;
    int len = my_strlen(src);
    ret = malloc( sizeof(char) * (len + 1) );

    if (ret == 0)
    {
        return NULL;
    }

    while (src[i] != '\0')
    {
        ret[i] = src[i];
        i = i + 1;
    }
    
    ret[i] = '\0';
    return ret;
}