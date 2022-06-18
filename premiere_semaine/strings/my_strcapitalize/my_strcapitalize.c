/*
** ETNA PROJECT, 20/10/2021 by alaux_r
** my_strcapitalize
** File description:
**      Mets une majuscule au début de chaque mot
*/

int my_strlen(const char *str) {
    int i;
    i = 0;

    while (str[i] != '\0') {
        i = i + 1;
    }
    return i;
}

char *my_strcapitalize(char *str) {
    int i;
    int len_str = my_strlen(str);
    for (i = 0 ; i < len_str ; i = i + 1)
        {
            if (i == 0 || str[i-1] == 32)
                {
                    if (str[i] < 123 && str[i] > 96)
                        {
                            str[i]=str[i]-32;
                        }
                }
        }
    return str;
}
