/*
** ETNA PROJECT, 20/10/2021 by alaux_r
** my_strncmp
** File description:
**      Compare deux strings sur une longueur n, renvoie la diff en valeur ASCII
*/


int my_strlen(const char *str) {

    int i;
    i = 0;
    
    while (str[i] != '\0') {
        i = i + 1;
    }
    return i;
}

int my_strncmp(const char *dest, const char *src, int n) {
    int i;
    int len;
    int diff;
    diff = 0;
    if ( my_strlen(src) > my_strlen(dest) )
        {
            if (n > my_strlen(src))
            {
                len = my_strlen(src);
            }
            else {
                len = n;
            }
        }
    else {
        if (n > my_strlen(dest))
            {
                len = my_strlen(dest);
            }
            else {
                len = n;
        }
    }
    
    for ( i = 0 ; i < len-1 ; i = i + 1 )
        {
            if ( dest[i] != src[i] )
                {
                    diff = dest[i] - src[i];
                    break;
                }
        }
    return diff;
}
