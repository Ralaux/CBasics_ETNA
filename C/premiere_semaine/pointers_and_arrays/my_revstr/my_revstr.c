/*
** ETNA PROJECT, 19/10/2021 by alaux_r
** my_revstr
** File description:
**      Reverse a string
*/

char my_putchar(char c);

/* Retourner la taille d'un string */
int my_strlen(const char *str) {

    int i;
    i = 0;

    while (str[i] != '\0') {
        i = i + 1;
    }
    return i;
}

/* Retourner un string renversé */
char *my_revstr(char *str) {
    int i;
    int j;
    char trans;
    i = my_strlen(str) - 1;
    j = 0;

    while (i > j)
        {
            trans = str[i];
            str[i] = str[j];
            str[j] = trans;
            j = j + 1;
            i = i - 1;
        }
    return str;
}
