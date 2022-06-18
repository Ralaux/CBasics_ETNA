char my_putchar(char c);

void my_print_digits(void) {
  char c;
  int compteur;
  compteur = 0;
  c = '0';
  for (compteur = 0 ; compteur < 10 ; compteur++)
    {
      my_putchar(c);
      c = c + 1;
    }
}
