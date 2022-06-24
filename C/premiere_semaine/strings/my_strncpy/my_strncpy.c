/*
** ETNA PROJECT, 20/10/2021 by alaux_r
** my_str_cpy
** File description:
**      Copie un bout d'une str dans une autre str de taille adéquate
*/


int my_strlen(const char *str) {

    int i;
    i = 0;

    while (str[i] != '\0') {
        i = i + 1;
    }
    return i;
}

char *my_strncpy(char *dest, const char *src, int n) {
    int i;
    int len;
    int fin;
    len = n;
    for ( i = 0 ; i < len ; i = i + 1 )
        {
            dest[i]=src[i];
        }    
    fin = my_strlen(dest);
    dest[fin]='\0';
    return dest;
}
