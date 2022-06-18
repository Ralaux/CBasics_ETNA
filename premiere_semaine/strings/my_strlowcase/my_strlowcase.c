/*
** ETNA PROJECT, 20/10/2021 by alaux_r
** my_strlowcase
** File description:
**      Passe toutes les lettres en minuscules
*/

int my_strlen(const char *str) {

    int i;
    i = 0;

    while (str[i] != '\0') {
        i = i + 1;
    }
    return i;
}

char *my_strlowcase(char *str) {
    int i;
    int len_str = my_strlen(str);
    for (i = 0 ; i < len_str ; i = i + 1)
        {
            if (str[i] < 91 && str[i] > 64)
                {
                    str[i]=str[i]+32;
                }
        }
    return str;
}
