/*
** This function allows you to read a line of less than 50 characters from the standard input.
** The function does not take any parameter and returns an allocated string, dont forget to free().
*/

#include <stdlib.h>
#include <unistd.h>

char *my_readline(void)
{
  char    *buff;
  ssize_t size;

  buff = malloc(sizeof(*buff) * (50 + 1));
  if (buff == NULL)
    return NULL;
  size = read(0, buff, 50);
  if (size > 1) {
    buff[size - 1] = '\0';
    return buff;
  }
  free(buff);
  return NULL;
}

char *my_readline_perso(char *buff, int line)
{
    int end = 0; // Dernier element de la ligne
    int start = 0; // Premier element de la ligne
    int cpt = 0; // Compteur des /n
    int i = 0; // Parcours du char* final
    char *final; // String qui sera retourné
    final = malloc(sizeof(char) * 50);
    while (cpt != line)
      {
        if (buff[end] == '\n') {    
            cpt = cpt + 1;
            if (cpt == line - 1) {
              start = end +1;
            }
        }
        end = end + 1;
      }
    while (i < ((end - start)-1)) {
      final[i] = buff[start+i];
      i = i + 1;
    }
    return final;
}