/*
** ETNA PROJECT, 20/10/2021 by alaux_r
** my_strcat
** File description:
**      concatenate two strings
*/


int my_strlen(const char *str) {

    int i;
    i = 0;

    while (str[i] != '\0') {
        i = i + 1;
    }
    return i;
}

char *my_strcat(char *dest, const char *src) {
    int i = 0;
    int len_src = my_strlen(src);
    int len_dest = my_strlen(dest);
    for (i = 0 ; i < len_src ; i = i + 1)
        {
            dest[len_dest + i] = src[i];
        }
    dest[len_dest+len_src]='\0';
    return dest;
}
