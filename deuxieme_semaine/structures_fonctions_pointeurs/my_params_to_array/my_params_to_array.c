#include "my_struct.h"
#include <stdlib.h>
#include <stdio.h>

int my_strlen(const char *str) {

    int i;
    i = 0;

    while (str[i] != '\0') {
        i = i + 1;
    }
    return i;
}

char *my_strcpy(char *dest, const char *src) {
    int i;
    int len;
    len = my_strlen(src);
    for ( i = 0 ; i <= len ; i = i + 1 )
        {
            if (i < (len))
            {
               dest[i] = src[i];
            }
            else {
                dest[i]='\0';
            }
        }
    return dest;
}

char **my_str_to_word_array(const char *str) {
    int i = 0;
    int j = 0;
    int word = 0;
    char **word_array = malloc(100000);
    word_array[word] = malloc (100000);
    while (str[i] != '\0') {
        if  ( (str[i] < 58 && str[i] > 47) || \
            (str[i] < 91 && str[i] > 64) || \
            (str[i] < 123 && str[i] > 96) ) {
            word_array[word][j] = str[i];
            j = j + 1;
        }
        else {
            word_array[word][j] = '\0';
            j = 0;
            word = word + 1;
            word_array[word] = malloc (100000);
        }
        i = i + 1;
    }
    word = word + 1;
    word_array[word] = NULL;
    return word_array;
}

struct info_param *my_params_to_array(int ac, char **av){
    int i = 1;
    struct info_param *t = malloc(ac * sizeof(struct info_param) + sizeof(int));
    while (av[i] != 0) {
        t[i].copy = malloc(sizeof(av[i]));

        t[i].length = my_strlen(av[i]);
        t[i].str = av[i];
        my_strcpy(t[i].copy, av[i]);
        t[i].word_array = my_str_to_word_array(av[i]);
        i = i + 1;
    }

    t[i].str = 0;
    return &t[0];
}
