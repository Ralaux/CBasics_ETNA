/*

3eme semaine piscine de C - alaux_r - 05 Novembre 2021
Description :
    
    Accepte des commandes sous forme "clé valeur" depuis un fichier .lst.
    Une commande par ligne. Une ligne vide affichera "-1".
    Les clés et valeurs peuvent utiliser tous les caractères affichables du code ASCII, et peuvent être séparés par un nombre indéterminé de SPACE (min 1)
    
    3 fonctions sont disponibles :
    - Ajouter un couple clé valeur (Commande : clé à ajouter, SPACE, valeur à ajouter) 
    (actualise la valeur si clé déjà présente, affiche la clé dans tous les cas)

    - Supprimer un couple clé valeur (Command : clé à supprimer, SPACE, valeur = "D") 
    (affiche la valeur si le couple est trouvé, si le couple n'existait pas, affiche -1 )

    - Rechercher un couple clé valeur (Commande : clé à chercher)
    (affiche la valeur si le couple est trouvé, -1 si le couple n'existait pas)

*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


typedef struct linked_list {
    char *key;
    char *value;
    struct linked_list *next;
    struct linked_list *prev;
} linked_list;

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

// Ajoute un élément à la base de donnée. Si un élément avec la meme clé existe déjà, la valeur
// couplée est actualisée de sorte q'il n'y ait pas de doublons.
linked_list *add_item(char *key, char *val, linked_list *database) {
    linked_list *first = database;
    
    // cas si database vide
    if(database == NULL) {
        linked_list *new;
        new = malloc(sizeof(linked_list));
        new->next = NULL;
        new->key = key;
        new->value = val;
        new->prev = NULL;
        database = new;
        return database;
    }
    
    // vérification d'une clé égale déjà existante
    while (database != NULL) {
        if ( my_strcmp(database->key, key) == 0 ) {
            database->value = val;
            database = first;
            return database;
        } 
        database = database->next;
    }
    
    // création du nouvel élément si liste non vide et clé non présente
    database = first;
    linked_list *new;
    new = malloc(sizeof(linked_list));
    new->next = first;
    new->key = key;
    new->value = val;
    new->prev = NULL;
    new->next->prev = new;
    database = new;
    return database;
}

// Suppression d'un élément de la base de donnée, identifiée par sa clé
// Si aucun élément n'a cette clé, renvoie -1.
linked_list *del_item (char *key, linked_list *database) {
    linked_list *first = database;
    if (database == NULL) {
        my_putstr("-1");
        return NULL;
    }
    
    // Si le premier élément est à supprimer
    if (my_strcmp(database->key, key) == 0) {
        if (database->next == NULL) {
            my_putstr(database->value);
            free(database);
            return NULL;
        }
        my_putstr(database->value);
        database = database->next;
        free(database->prev);
        database->prev = NULL;
        return database;
    }

    // Si un élément entre le deuxième ou le n-1 est à supprimer
    while (database->next != NULL) {
        if (my_strcmp(database->key, key) == 0) {
            my_putstr(database->value);
            database->prev->next = database->next;
            database->next->prev = database->prev;
            free(database);
            return first;
        }
        database = database->next;
    }

    // Si le dernier élément est à supprimer
    if (my_strcmp(database->key, key) == 0) {
        my_putstr(database->value);
        database->prev->next = NULL;
        free(database);
    }
    else {
        my_putstr("-1");
    }
    return first;
}

// Renvoie la valeur d'un élément identifié par sa clé. 
char *search (char *search, linked_list *database) {    
    if (database == NULL) {
        return "-1";
    }
    
    while (database != NULL) {
        if (my_strcmp(database->key, search) == 0) {
            return database->value;
        }
        database = database->next;
    }
    return "-1";
}

// Décompose chaque ligne en couple clé valeur et appelle la fonction en conséquence
linked_list *execute(char *command, linked_list *database) {
    char *key;
    char *value;
    int i = 0;
    int value_cpt = 0;
    key = malloc(sizeof(char) * 10);
    value = malloc(sizeof(char) * 20);

    // Traitement de la chaine de caractère 
    // Clé et valurs peuvent être tous les éléments affichables du code ASCII
        while ( command[i] > 32 && command[i] < 127) {
            key[i] = command[i];
            i = i + 1;
        }
        key[i] = '\0';
        
        while (command[i] == 32){
            i = i + 1;
        }

        while ( command[i] > 32 && command[i] < 127) {
            value[value_cpt] = command[i];
            value_cpt = value_cpt + 1;
            i = i + 1;
        }

        if (value_cpt == 0) {
            value = NULL;
        }

        else {
            value[value_cpt] = '\0';
        }
        
        
        // Action en fontion de la valeur
        if ( value == NULL )
        {
            my_putstr(search(key, database));
            return database;
        }
        else if ( value[0] == 68 && value_cpt == 1 ) // Si value = "D" uniquement ("Damien" ne rentrera pas dans la boucle)
        {
            database = del_item(key, database);
            return database;
        }
        else
        {
            database = add_item(key, value, database);
            my_putstr(key);
            return database;
        }
} 

int main () {
    linked_list *database = malloc(sizeof(linked_list) * 20);
    char *line = NULL;
    size_t n;
    database = NULL;
    n = 50;
    line = malloc(sizeof(char) * n);

    while(getline(&line, &n, stdin) != -1) {
        database = execute(line, database);
        free(line);
        line = NULL;
        line = malloc(sizeof(char) * n);
    }

    free(database);
}