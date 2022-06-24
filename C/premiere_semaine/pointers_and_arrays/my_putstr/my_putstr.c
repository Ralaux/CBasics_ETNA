/*
** ETNA PROJECT, 19/10/2021 by moulin_e
** RETURN
** File description:
** My own printf function
**      RETURN
*/

char my_putchar(char c);

void my_putstr(const char *str) {

    int i;
    i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i = i + 1;
    }
}
