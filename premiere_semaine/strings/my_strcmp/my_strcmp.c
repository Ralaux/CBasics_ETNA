/*
** ETNA PROJECT, 20/10/2021 by alaux_r
** my_strcmp
** File description:
**      renvoie la différence ASCII de la première différence entre deux strings
*/


int my_strlen(const char *str) {

    int i;
    i = 0;

    while (str[i] != '\0') {
        i = i + 1;
    }
    return i;
}

int my_strcmp(char *s1, const char *s2) {
    int i;
    int len;
    int n;
    n = 0;
    if ( my_strlen(s2) > my_strlen(s1) )
        {
            len = my_strlen(s2);
        }
    else {
        len = my_strlen(s1);
    }

    for ( i = 0 ; i < len ; i = i + 1 )
        {
            if ( s1[i] != s2[i] )
                {
                    n = s1[i] - s2[i];
                    break;
                }
        }
    return n;
}
