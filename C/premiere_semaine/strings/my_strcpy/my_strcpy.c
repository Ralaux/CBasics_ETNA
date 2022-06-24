/*
** ETNA PROJECT, 20/10/2021 by alaux_r
** my_str_cpy
** File description:
**      Copie une str dans une autre str de même taille
*/


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
