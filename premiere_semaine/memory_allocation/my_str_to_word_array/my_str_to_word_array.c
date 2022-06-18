/*
** ETNA PROJECT, 21/10/2021 by alaux_r
** my_str_to_word_array
** File description:
**     renvoie un tableau des mots d'un string
*/

#include <stdlib.h>

char **my_str_to_word_array(const char *str) {
    int i = 0;
    int j = 0;
    int word = 0;
    char **word_array = malloc(1000000);
    word_array[word] = malloc (10000000);
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
            word_array[word] = malloc (10000000);
        }
        i = i + 1;
    }
    word = word + 1;
    word_array[word] = NULL;
    return word_array;
}