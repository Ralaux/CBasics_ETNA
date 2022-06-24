int abs(int ca);

char my_putchar(char cb);

void my_putnbr(int n) {  
  int x;
  if (n < 0)
      {
          char k = '-';
          my_putchar(k);
          x = -1 * n;
      }
  else {
    x = n;
  }
  
  char a = (x / 1000000000) + 48 ;
  char b = ((x - 1000000000 * (a - 48)) / 100000000) + 48 ;
  char c = ((x - 1000000000 * (a - 48) - 100000000 * (b - 48)) / 10000000) + 48 ;
  char d = ((x - 1000000000 * (a - 48) - 100000000 * (b - 48) - 10000000 * (c - 48)) / 1000000) + 48 ;
  char e = ((x - 1000000000 * (a - 48) - 100000000 * (b - 48) - 10000000 * (c - 48) - 1000000 * (d - 48)) / 100000) + 48 ;
  char f = ((x - 1000000000 * (a - 48) - 100000000 * (b - 48) - 10000000 * (c - 48) - 1000000 * (d - 48) - 100000 * (e - 48)) / 10000) + 48 ;
  char g = ((x - 1000000000 * (a - 48) - 100000000 * (b - 48) - 10000000 * (c - 48) - 1000000 * (d - 48) - 100000 * (e - 48) - 10000 * (f - 48)) / 1000 ) + 48 ;
  char h = ((x - 1000000000 * (a - 48) - 100000000 * (b - 48) - 10000000 * (c - 48) - 1000000 * (d - 48) - 100000 * (e - 48) - 10000 * (f - 48) - 1000 * (g - 48)) / 100 ) + 48 ;
  char i = ((x - 1000000000 * (a - 48) - 100000000 * (b - 48) - 10000000 * (c - 48) - 1000000 * (d - 48) - 100000 * (e - 48) - 10000 * (f - 48) - 1000 * (g - 48) - 100 * (h - 48)) / 10 ) + 48 ;
  char j = x - 1000000000 * (a - 48) - 100000000 * (b - 48) - 10000000 * (c - 48) - 1000000 * (d - 48) - 100000 * (e - 48) - 10000 * (f - 48) - 1000 * (g - 48) - 100 * (h - 48) - 10 * (i - 48) + 48 ;

  if ( a == 48 && b == 48 && c == 48 && d == 48 && e == 48 && f == 48 && g == 48 && h == 48 && i == 48 \
       )
    {
      my_putchar(j);
    }
  else if (a == 48 && b == 48 && c == 48 && d == 48 && e == 48 && f == 48 && g == 48 && h == 48)
    {
      my_putchar(i);
      my_putchar(j);
    }
  else if (a == 48 && b == 48 && c == 48 && d == 48 && e == 48 && f == 48 && g == 48)
    {
      my_putchar(h);
      my_putchar(i);
      my_putchar(j);
    }
  else if (a == 48 && b == 48 && c == 48 && d == 48 && e == 48 && f == 48)
    {
      my_putchar(g);
      my_putchar(h);
      my_putchar(i);
      my_putchar(j);
    }
  else if (a == 48 && b == 48 && c == 48 && d == 48 && e == 48)
    {
      my_putchar(f);
      my_putchar(g);
      my_putchar(h);
      my_putchar(i);
      my_putchar(j);
    }
  else if (a == 48 && b == 48 && c == 48 && d == 48)
    {
      my_putchar(e);
      my_putchar(f);
      my_putchar(g);
      my_putchar(h);
      my_putchar(i);
      my_putchar(j);
    }
  else if (a == 48 && b == 48 && c == 48)
    {
      my_putchar(d);
      my_putchar(e);
      my_putchar(f);
      my_putchar(g);
      my_putchar(h);
      my_putchar(i);
      my_putchar(j);
    }
  else if (a == 48 && b == 48)
    {
      my_putchar(c);
      my_putchar(d);
      my_putchar(e);
      my_putchar(f);
      my_putchar(g);
      my_putchar(h);
      my_putchar(i);
      my_putchar(j);
    }
  else if (a == 48)
    {
      my_putchar(b);
      my_putchar(c);
      my_putchar(d);
      my_putchar(e);
      my_putchar(f);
      my_putchar(g);
      my_putchar(h);
      my_putchar(i);
      my_putchar(j);
    }
  else
    {
      my_putchar(a);
      my_putchar(b);
      my_putchar(c);
      my_putchar(d);
      my_putchar(e);
      my_putchar(f);
      my_putchar(g);
      my_putchar(h);
      my_putchar(i);
      my_putchar(j);
    }
}
