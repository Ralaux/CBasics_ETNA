/*

Piscine de C - alaux_r - 05 Novembre 2021
Structure de la liste doublement chainée qui servira de base de donnée

*/

// Structure de la liste chainée "base de donnée"
typedef struct linked_list {
    char *key;
    char *value;
    struct linked_list *next;
    struct linked_list *prev;
} linked_list;
