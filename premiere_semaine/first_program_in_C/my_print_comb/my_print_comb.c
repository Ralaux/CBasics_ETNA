char my_putchar(char c);

void my_print_comb(void) {
  char first;
  char second;
  char third;
  char coma;
  char space;
  first = '0';
  second = '0';
  third = '0';
  coma = ',';
  space = ' ';

  for (first = '0' ; first < 58 ; first = first + 1)
    {
      for (second = '0' ; second < 58 ; second = second + 1)
	{
	  for (third = '0' ; third < 58 ; third = third + 1)
	    {
	      if (first != second && second != third && first != third && first < second && second < third)
		{
		  my_putchar(first);
		  my_putchar(second);
		  my_putchar(third);
		  if ( first != '7' || second != '8' || third != '9')
		    {
		      my_putchar(coma);
		      my_putchar(space);
		    }
		}
	    }
	}
    }
}
