/*

Piscine de C - alaux_r - 05 Novembre 2021
Fonctions codées lors des deux premières semaines et utilisées lors du projet my_crd.

*/

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
    my_putchar('\n');
}

// calcul de la longueur d'une chaine de caractère
int my_strlen(const char *str) {

    int i;
    i = 0;

    while (str[i] != '\0') {
        i = i + 1;
    }
    return i;
}

// Compare deux chaines de caractère, renvoie une valeur :
// - égale à 0 si elles sont égales
// - positive si s1 est plus grand que s2 (en valeurs ASCII)
// - négative si s2 est plus grand que s1 (en valeur ASCII)
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