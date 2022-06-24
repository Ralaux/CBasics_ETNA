char my_putchar(char c);

void my_isneg(int n) {
  char N;
  char P;
  N = 'N';
  P = 'P';

  if (n < 0)
    {
      my_putchar(N);
    }
  else
    {
      my_putchar(P);
    }
}
