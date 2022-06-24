/*
** ETNA PROJECT, 20/10/2021 by alaux_r
** my_strstr
** File description:
**      trouve une suite de caractère dans un str
*/

#include <stddef.h>

int my_strlen(const char *str) {

    int i;
    i = 0;

    while (str[i] != '\0') {
        i = i + 1;
    }
    return i;
}

char *my_strstr(char *str, const char *to_find) {
    int n;
    int len_str;
    int i;
    int non;
    int len_tf;
    len_tf = my_strlen(to_find);
    n = 0;
    i = 0;
    non = 0;
    len_str = my_strlen(str);
    for (n = 0 ; n < ((len_str - len_tf) -1) ; n = n + 1)
        {
            non = 0;
            for (i = 0 ; i <= len_tf ; i = i + 1)
                {
                    if ( i == len_tf && non == 0 )
                        {
                            return &str[n];
                        }
                    if ( i < len_tf && to_find[i] != str[n+i] )
                        {
                            non = 1;
                        }
            }
        }
    return NULL;
}
