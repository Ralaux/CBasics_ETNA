/*
** ETNA PROJECT, 19/10/2021 by alaux_r
** my_swap
** File description:
**      Swap the content of two integers
*/

void my_swap(int *a, int *b) {
    int c = *a;
    int d = *b;
    *a = d;
    *b = c;
}
