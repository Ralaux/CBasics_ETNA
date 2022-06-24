/*
Bonjour,

Voici le projet de la semaine 4 de la piscine.
Malgré son apparente complexité, je reste frais.

En espérant qu'il te plaise,
Bien cordialement,
Papi René (Descartes)

Ranger les clés dans l'ordre
liste doublement chainée, si clé grande ou petite, patir du début ou de la fin.
*/

#include <stdio.h>
#include "my_readline.c"

typedef struct linked_list {
    char *key;
    char *value;
    //struct linked_list *prev;
    struct linked_list *next;
} linked_list;

char my_putchar(char c);

void my_putstr(const char *str) {

    int i;
    i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i = i + 1;
    }
}

linked_list *add_item(char *key, char *val, linked_list *database) {
    linked_list *first = database;
    
    if(database == NULL) {
        linked_list *new;
        new = malloc(sizeof(linked_list));
        new->next = database;
        //new->prev = NULL;
        new->key = key;
        new->value = val;
        database = new;
        return database;
    }
    
    while (database->next != NULL) {
        if ( database->key == key ) {
            database->value = val;
            return first;
        } 
        database = database->next;
    }

    linked_list *new;
    new = malloc(sizeof(linked_list));
    new->next = first;
    //new->prev = NULL;
    new->key = key;
    new->value = val;
    database = new;
    return first;
}

linked_list *del_item (char *key, linked_list *database) {
    if (database == NULL) {
        return NULL;
    }
    else if (database->key == key) {
        database = database->next;
        return database;
    }
    
    while (database != NULL) {
        if (database->next->key == key) {
            database->next = database->next->next;
        }
        database = database->next;
    }
    return database;
}

char *search (char *search, linked_list *database) {    
    while (database != NULL) {
        if (database->key == search) {
            return database->value;
        }
        database = database->next;
    }
    return "-1";
}

void execute(char *command, linked_list *database) {
    database->value = command;
}

/* void execute(char *command, linked_list *database) {
    char *key;
    char *value;
    int i = 0;
    key = malloc(sizeof(char) * 10);
    value = malloc(sizeof(char) * 20);

    /* Traitement de la chaine de caractère 
        while (command[i] < 48 || command[i] > 57) {
            key[i] = command[i];
            i = i + 1;
        }
        key[i] = '\0';

        i = i + 1;
        while (command[i] < 48 || command[i] > 57) {
            value[i] = command[i];
            i = i + 1;
        }
        value[i] = '\0';
        
        /* Action en fontion de la valeur 
        if ( value[0] == 68 )
        {
           del_item(key, database);
        }
        else if ( value == NULL )
        {
            search(key, database);
        }
        else
        {
            add_item(key, value, database);
        }
} */

int main () {
    linked_list *database;
    char *line;
    int line_nbr = 1;
    char *buff;
    buff = malloc(sizeof(char) * (1000 + 1));
    line = malloc(sizeof(char) * 50);
    database = malloc (sizeof(linked_list) * sizeof(buff));
    read(0, buff, 1000); // Buff = Tout mon fichier

    /* Boucler sur chaque ligne et exécuter la commande */
    while (line != NULL) {
      line = my_readline_perso(buff, line_nbr);
      execute(line, database);
      line_nbr = line_nbr + 1;
      free(line);
    }
    
    free (database);
    free (buff);
    return 0;
}