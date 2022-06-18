/*
** ETNA PROJECT, 19/10/2021 by alaux_r
** my_sort_intarr
** File description:
**      Retourne un array rangé dans l'ordre croissant
**      Doit en connaitre la taille au préalable
*/


/* Swap la valeur de deux entiers*/
void my_swap(int *a, int *b) {
    int c = *a;
    int d = *b;
    *a = d;
    *b = c;
}

/* Range un tableau dans l'ordre croissant */
void my_sort_intarr(int *array, int size) {
    int cpt = 0;
    int cpt2 = 1;

    for ( cpt = 0 ; cpt < (size - 1) ; cpt = cpt + 1 )
        {
            for ( cpt2 = cpt + 1 ; cpt2 < size ; cpt2 = cpt2 + 1 )
                {
                    if (array[cpt] > array[cpt2])
                        {
                            my_swap(&array[cpt], &array[cpt2]);
                        }
                }
        }
}
