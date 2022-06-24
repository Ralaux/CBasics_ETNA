char my_putchar(char c);

void my_print_alpha(void) {
  char c;
  int compteur;
  compteur = 0;
  c = 'a';
  for (compteur = 0 ; compteur < 26 ; compteur++)
    {
      my_putchar(c);
      c = c + 1;
    }
  my_putchar('\n');
}
