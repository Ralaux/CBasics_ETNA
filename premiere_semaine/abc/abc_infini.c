/*
** ETNA PROJECT, 19/10/2021 by moulin_e
** projet RUSH
** File description:
** Affiche l'alphabet à l'infini coloré 
**      RETURN
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(const char *str) {

    int i;
    i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i = i + 1;
    }
}

/* Print l'alphabet de a à z, n fois, en partant à chaque boucle de la lettre suivante (abc...xyz, bcd...yza) */
void print_abc_square() {
    int i = 0;
    int cpt;
    int aff = 97; /* valeur affichée */
    int debut = 97; /* valeur de début de chaque ligne */
    int color_l = 49;
    int color_c = 49;

    /* nombre de loop d'alphabet */
    while ( i < 1) {
        aff = debut;    

        /* print de l'alphabet */
        while (cpt < 26)
        {   
            /* paramètre la coleur*/
            my_putstr("\e[0;3");
            my_putchar(color_c);
            my_putstr(";4");
            my_putchar(color_l);
            my_putchar('m');
            my_putchar(aff);
            aff = aff + 1;
            /* condition de revenir à a après z */ 
            if (aff > 122) {
                 aff = 97;
            }

            /* Change la couleur du prochain caractère */
            color_c = color_c + 1;
            if (color_c > 55) {
                 color_c = 49;
            }
            cpt = cpt + 1;

            /* reset la couleur */
            my_putstr("\e[0m");
        }
        my_putchar('\n');

        /* Change la couleur de la prochaine ligne */
        color_l = color_l + 1;
            if (color_l > 55) {
                 color_l = 49;
        }

        cpt = 0;
        debut = debut + 1;
        /* condition de revenir à a après z */
        if (debut > 122) {
            debut = 97;
        }

    }
}

int main() {
    print_abc_square();
    return 0;
}