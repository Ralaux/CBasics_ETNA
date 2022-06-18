char my_putchar();

void my_iseven(int n) {
  char E;
  char O;
  int x;
  E = 'E';
  O = 'O';
  x = n % 2;

  if (x == 0)
    {
      my_putchar(E);
    }
  else
    {
      my_putchar(O);
    }
}
