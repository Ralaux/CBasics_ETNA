/*
** ETNA PROJECT, 20/10/2021 by alaux_r
** my_strncat
** File description:
**      concat un bout de chaine 
*/


int my_strlen(const char *str) {

    int i;
    i = 0;

    while (str[i] != '\0') {
        i = i + 1;
    }
    return i;
}


char *my_strncat(char *dest, const char *src, int nb) {
    int i = 0;
    int len;
    int len_dest = my_strlen(dest);
    if (nb > my_strlen(src))
    {
        len = my_strlen(src);
    }
    else {
        len = nb;
    }
    
    for (i = 0 ; i < len ; i = i + 1)
        {
            dest[len_dest + i] = src[i];
        }
    dest[len_dest+len]='\0';
    return dest;
}
