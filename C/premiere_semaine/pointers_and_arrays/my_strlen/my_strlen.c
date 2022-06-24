/*
** ETNA PROJECT, 19/10/2021 by alaux_r
** my_strlen
** File description:
**      My own length fonction for strings
*/

void my_putchar(char c);

int my_strlen(const char *str) {

    int i;
    i = 0;

    while (str[i] != '\0') {
        i = i + 1;
    }
    return i;
}
