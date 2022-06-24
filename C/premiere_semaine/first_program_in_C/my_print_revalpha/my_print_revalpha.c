char my_putchar(char c);

void my_print_revalpha(void) {
  char c;
  int compteur;
  compteur = 0;
  c = 'z';
  for (compteur = 0 ; compteur < 26 ; compteur++)
    {
      my_putchar(c);
      c = c - 1;
    }
}
